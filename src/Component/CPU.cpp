#include "CPU.h"

namespace Component
{
    CPU::CPU(
        const unsigned int identifier,
        const std::string name,
        const double price,
        const std::string brand,
        const std::string image_path,
        const std::string chipset,
        const unsigned int numCores,
        const unsigned int threads,
        const double coreclock,
        const double boostclock,
        const unsigned int cache) : AbstractComponent(identifier, name, price, brand, image_path),
                                    chipset(chipset), numCores(numCores), threads(threads), coreclock(coreclock), boostclock(boostclock), cache(cache) {}

    const std::string& CPU::getChipset() const
    {
        return chipset;
    }

    CPU& CPU::setChipset(const std::string chipset)
    {
        this->chipset = chipset;
        return *this;
    }

    unsigned int CPU::getNumCores() const
    {
        return numCores;
    }

    CPU& CPU::setNumCores(const unsigned int numCores)
    {
        this->numCores = numCores;
        return *this;
    }

    unsigned int CPU::getThreads() const
    {
        return threads;
    }

    CPU& CPU::setThreads(const unsigned int threads)
    {
        this->threads = threads;
        return *this;
    }

    double CPU::getCoreclock() const
    {
        return coreclock;
    }

    CPU& CPU::setCoreclock(const double coreclock)
    {
        this->coreclock = coreclock;
        return *this;
    }

    double CPU::getBoostclock() const
    {
        return boostclock;
    }

    CPU &CPU::setBoostclock(const double boostclock)
    {
        this->boostclock = boostclock;
        return *this;
    }

    unsigned int CPU::getCache() const
    {
        return cache;
    }

    CPU &CPU::setCache(const unsigned int cache)
    {
        this->cache = cache;
        return *this;
    }

    void CPU::accept(IConstVisitor& visitor) const {
        visitor.visit(*this);
    }
    void CPU::accept(IVisitor& visitor) {
        visitor.visit(*this);
    }
}