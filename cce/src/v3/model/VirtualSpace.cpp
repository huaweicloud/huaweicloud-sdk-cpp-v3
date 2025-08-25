

#include "huaweicloud/cce/v3/model/VirtualSpace.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




VirtualSpace::VirtualSpace()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    lvmConfigIsSet_ = false;
    runtimeConfigIsSet_ = false;
}

VirtualSpace::~VirtualSpace() = default;

void VirtualSpace::validate()
{
}

web::json::value VirtualSpace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(lvmConfigIsSet_) {
        val[utility::conversions::to_string_t("lvmConfig")] = ModelBase::toJson(lvmConfig_);
    }
    if(runtimeConfigIsSet_) {
        val[utility::conversions::to_string_t("runtimeConfig")] = ModelBase::toJson(runtimeConfig_);
    }

    return val;
}
bool VirtualSpace::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lvmConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lvmConfig"));
        if(!fieldValue.is_null())
        {
            LVMConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLvmConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtimeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtimeConfig"));
        if(!fieldValue.is_null())
        {
            RuntimeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeConfig(refVal);
        }
    }
    return ok;
}


std::string VirtualSpace::getName() const
{
    return name_;
}

void VirtualSpace::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VirtualSpace::nameIsSet() const
{
    return nameIsSet_;
}

void VirtualSpace::unsetname()
{
    nameIsSet_ = false;
}

std::string VirtualSpace::getSize() const
{
    return size_;
}

void VirtualSpace::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool VirtualSpace::sizeIsSet() const
{
    return sizeIsSet_;
}

void VirtualSpace::unsetsize()
{
    sizeIsSet_ = false;
}

LVMConfig VirtualSpace::getLvmConfig() const
{
    return lvmConfig_;
}

void VirtualSpace::setLvmConfig(const LVMConfig& value)
{
    lvmConfig_ = value;
    lvmConfigIsSet_ = true;
}

bool VirtualSpace::lvmConfigIsSet() const
{
    return lvmConfigIsSet_;
}

void VirtualSpace::unsetlvmConfig()
{
    lvmConfigIsSet_ = false;
}

RuntimeConfig VirtualSpace::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void VirtualSpace::setRuntimeConfig(const RuntimeConfig& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool VirtualSpace::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void VirtualSpace::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

}
}
}
}
}


