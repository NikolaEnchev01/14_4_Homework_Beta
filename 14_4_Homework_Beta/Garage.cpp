#include "Garage.h"
#include <cstring>
Garage::Garage(size_t size)
{
    this->capacity = size;
    this->vehicleCount = 0;
    //TODO : for vehicles
}

Garage::Garage(const Garage& other)
{
    this->capacity = other.vehicleCount;

    Vehicle** buffer = new Vehicle* [other.vehicleCount];

    for (int i = 0; i < other.vehicleCount; i++)
    {
        buffer[i] = new Vehicle{other.vehicles[i]->getRegistration(),other.vehicles[i]->getDescription() ,other.vehicles[i]->getSpace()};
    }
    this->vehicles = buffer;
    buffer = nullptr;
   
}

Garage::~Garage()
{
}

Garage& Garage::operator=(const Garage& rhs)
{

}

void Garage::insert(Vehicle& v)
{
}

void Garage::erase(const char* registration)
{
}

const Vehicle& Garage::at(size_t pos) const
{
    // TODO: insert return statement here
}

const Vehicle& Garage::operator[](size_t pos) const
{
    // TODO: insert return statement here
}

bool Garage::empty() const
{
    return false;
}

size_t Garage::size() const
{
    return size_t();
}

void Garage::clear()
{
}

const Vehicle* Garage::find(const char* registration) const
{
    return nullptr;
}
