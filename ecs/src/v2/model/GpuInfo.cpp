

#include "huaweicloud/ecs/v2/model/GpuInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




GpuInfo::GpuInfo()
{
    name_ = "";
    nameIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    memoryMb_ = 0;
    memoryMbIsSet_ = false;
}

GpuInfo::~GpuInfo() = default;

void GpuInfo::validate()
{
}

web::json::value GpuInfo::toJson() const
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
bool GpuInfo::fromJson(const web::json::value& val)
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


std::string GpuInfo::getName() const
{
    return name_;
}

void GpuInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GpuInfo::nameIsSet() const
{
    return nameIsSet_;
}

void GpuInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t GpuInfo::getCount() const
{
    return count_;
}

void GpuInfo::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool GpuInfo::countIsSet() const
{
    return countIsSet_;
}

void GpuInfo::unsetcount()
{
    countIsSet_ = false;
}

int32_t GpuInfo::getMemoryMb() const
{
    return memoryMb_;
}

void GpuInfo::setMemoryMb(int32_t value)
{
    memoryMb_ = value;
    memoryMbIsSet_ = true;
}

bool GpuInfo::memoryMbIsSet() const
{
    return memoryMbIsSet_;
}

void GpuInfo::unsetmemoryMb()
{
    memoryMbIsSet_ = false;
}

}
}
}
}
}


