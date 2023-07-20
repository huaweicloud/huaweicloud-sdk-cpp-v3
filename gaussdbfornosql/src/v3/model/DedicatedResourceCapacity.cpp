

#include "huaweicloud/gaussdbfornosql/v3/model/DedicatedResourceCapacity.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DedicatedResourceCapacity::DedicatedResourceCapacity()
{
    vcpus_ = 0;
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
}

DedicatedResourceCapacity::~DedicatedResourceCapacity() = default;

void DedicatedResourceCapacity::validate()
{
}

web::json::value DedicatedResourceCapacity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}

bool DedicatedResourceCapacity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}

int32_t DedicatedResourceCapacity::getVcpus() const
{
    return vcpus_;
}

void DedicatedResourceCapacity::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool DedicatedResourceCapacity::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void DedicatedResourceCapacity::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t DedicatedResourceCapacity::getRam() const
{
    return ram_;
}

void DedicatedResourceCapacity::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool DedicatedResourceCapacity::ramIsSet() const
{
    return ramIsSet_;
}

void DedicatedResourceCapacity::unsetram()
{
    ramIsSet_ = false;
}

int32_t DedicatedResourceCapacity::getVolume() const
{
    return volume_;
}

void DedicatedResourceCapacity::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool DedicatedResourceCapacity::volumeIsSet() const
{
    return volumeIsSet_;
}

void DedicatedResourceCapacity::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


