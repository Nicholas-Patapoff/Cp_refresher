
#include <vector>
#include <iostream>
#include <unordered_map>
#include <any>

struct Data_and_type //! Saves std::any value of data and a const std::type_info *value_type
{
    // saves value as any and saves the value type_info to be compared to later on
    std::any value;
    const std::type_info *value_type;
};

class temp_data
{
public:
    temp_data() {} // general constructor

    template <typename T>
    /*! \brief initializes Data_and_type struct value and stores at location std::string ID in private hashmap
     */
    void add_data(const std::string ID, T &value)
    {

        if (data.contains(ID))
        {
            std::cerr << "ID: " << ID << " - is already defined" << std::endl;
            exit(EXIT_FAILURE);
        }

        Data_and_type temp{std::any(value), &typeid(T)};
        data[ID] = temp;
    }
    template <typename T>
    const T *retrieve_data(std::string ID)
    {
        if (data.contains(ID))
        {
            Data_and_type &stored = data[ID];
            if (*stored.value_type == typeid(T))
            {
                return std::any_cast<T>(&stored.value);
            }
            return nullptr;
        }
        return nullptr;
    }

private:
    std::unordered_map<std::string, Data_and_type> data;
};
