

class doxy_example
{

public:
    doxy_example() {}

    /*!
    \brief Block comments are denoted by the format and should ALWAYS be placed before FUNCTIONS
    */
    void block_comments(int first) {};

    /*! \brief here's an example of a brief, notice how the next line only exists in the description.

    Here's the description. It is separated from the brief an empty line! */
    void blocks_with_briefs(int second) {};

    void putting_detailed_docs_after_members(int third /**< you can attach desciptors after an expected input!*/, int thirdv2 /**< can't make it empty though*/) {};

    //! \brief single line Brief description before the function.
    void putting_brief_docs_after_members(int fourth) {};

    /*! \brief Notice how I can link to other functions just by stating them inline with ref like: \ref putting_brief_docs_after_members

    does this let me link to a member temp ?
     */
    void linking_members(int fifth) {};

    int class_variable = 10; //!< here's a public class var
};
