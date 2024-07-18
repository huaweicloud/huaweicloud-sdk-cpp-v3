

#include "huaweicloud/ecs/v2/model/ASICAcceleratorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ASICAcceleratorInfo::ASICAcceleratorInfo()
{
    name_ = "";
    nameIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    memoryMb_ = 0;
    memoryMbIsSet_ = false;
}

ASICAcceleratorInfo::~ASICAcceleratorInfo() = default;

void ASICAcceleratorInfo::validate()
{
}

web::json::value ASICAcceleratorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(memoryMbIsSet_) {
        val[utility::conversions::to_string_t("memory_mb")] = ModelBase::toJson(memoryMb_);
    }

    return val;
}
bool ASICAcceleratorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_mb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_mb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryMb(refVal);
        }
    }
    return ok;
}


std::string ASICAcceleratorInfo::getName() const
{
    return name_;
}

void ASICAcceleratorInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ASICAcceleratorInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ASICAcceleratorInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t ASICAcceleratorInfo::getCount() const
{
    return count_;
}

void ASICAcceleratorInfo::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ASICAcceleratorInfo::countIsSet() const
{
    return countIsSet_;
}

void ASICAcceleratorInfo::unsetcount()
{
    countIsSet_ = false;
}

int32_t ASICAcceleratorInfo::getMemoryMb() const
{
    return memoryMb_;
}

void ASICAcceleratorInfo::setMemoryMb(int32_t value)
{
    memoryMb_ = value;
    memoryMbIsSet_ = true;
}

bool ASICAcceleratorInfo::memoryMbIsSet() const
{
    return memoryMbIsSet_;
}

void ASICAcceleratorInfo::unsetmemoryMb()
{
    memoryMbIsSet_ = false;
}

}
}
}
}
}


