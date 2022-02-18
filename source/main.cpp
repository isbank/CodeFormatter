#include "main.hpp"

using namespace std;

/**
 * @brief Base Class
 */
class Base
{
    private:
        int x;  ///< Data Field
    public:
        /**
         * @brief  Default Constructor
         */
        Base ()
        {
            x = 0;
        }

        /**
         * @brief  Destructor
         */
        virtual ~Base ()
        {
        }

        /**
         * @brief  Pure Virtual Method
         */
        virtual void function () = 0;

        /**
         * @brief  Getter Method
         * @return
         */
        int getValue ()
        {
            return x;
        }
};

/**
 * @brief Derived Class
 */
class Derived : public Base
{
    private:
        int y;  ///< Data Field
    public:
        /**
         * @brief  Default Constructor
         */
        Derived ()
        {
            y = 0;
        }

        /**
         * @brief  Destructor
         */
        virtual ~Derived ()
        {
        }

        /**
         * @brief  Overridden Method
         */
        void function ()
        {
            cout << "function() called." << endl;
        }
};

/**
 * @brief  Pure Virtual Functions and Abstract Classes
 * @return If the program runs successfully, it returns 0.
 */
int main ()
{
    Derived object;
    object.function ();
    return 0;
}
