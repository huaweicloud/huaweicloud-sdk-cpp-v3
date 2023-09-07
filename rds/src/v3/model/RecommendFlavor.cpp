

#include "huaweicloud/rds/v3/model/RecommendFlavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RecommendFlavor::RecommendFlavor()
{
    type_ = "";
    typeIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    volumeFlavorsIsSet_ = false;
}

RecommendFlavor::~RecommendFlavor() = default;

void RecommendFlavor::validate()
{
}

web::json::value RecommendFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(volumeFlavorsIsSet_) {
        val[utility::conversions::to_string_t("volume_flavors")] = ModelBase::toJson(volumeFlavors_);
    }

    return val;
}

bool RecommendFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeFlavors(refVal);
        }
    }
    return ok;
}

std::string RecommendFlavor::getType() const
{
    return type_;
}

void RecommendFlavor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RecommendFlavor::typeIsSet() const
{
    return typeIsSet_;
}

void RecommendFlavor::unsettype()
{
    typeIsSet_ = false;
}

std::string RecommendFlavor::getFlavorRef() const
{
    return flavorRef_;
}

void RecommendFlavor::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool RecommendFlavor::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void RecommendFlavor::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string RecommendFlavor::getCpu() const
{
    return cpu_;
}

void RecommendFlavor::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool RecommendFlavor::cpuIsSet() const
{
    return cpuIsSet_;
}

void RecommendFlavor::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string RecommendFlavor::getMem() const
{
    return mem_;
}

void RecommendFlavor::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool RecommendFlavor::memIsSet() const
{
    return memIsSet_;
}

void RecommendFlavor::unsetmem()
{
    memIsSet_ = false;
}

std::string RecommendFlavor::getGroupType() const
{
    return groupType_;
}

void RecommendFlavor::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool RecommendFlavor::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void RecommendFlavor::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<VolumeFlavor>& RecommendFlavor::getVolumeFlavors()
{
    return volumeFlavors_;
}

void RecommendFlavor::setVolumeFlavors(const std::vector<VolumeFlavor>& value)
{
    volumeFlavors_ = value;
    volumeFlavorsIsSet_ = true;
}

bool RecommendFlavor::volumeFlavorsIsSet() const
{
    return volumeFlavorsIsSet_;
}

void RecommendFlavor::unsetvolumeFlavors()
{
    volumeFlavorsIsSet_ = false;
}

}
}
}
}
}


