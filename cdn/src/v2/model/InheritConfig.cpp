

#include "huaweicloud/cdn/v2/model/InheritConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




InheritConfig::InheritConfig()
{
    status_ = "";
    statusIsSet_ = false;
    inheritType_ = "";
    inheritTypeIsSet_ = false;
    inheritTimeType_ = "";
    inheritTimeTypeIsSet_ = false;
}

InheritConfig::~InheritConfig() = default;

void InheritConfig::validate()
{
}

web::json::value InheritConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(inheritTypeIsSet_) {
        val[utility::conversions::to_string_t("inherit_type")] = ModelBase::toJson(inheritType_);
    }
    if(inheritTimeTypeIsSet_) {
        val[utility::conversions::to_string_t("inherit_time_type")] = ModelBase::toJson(inheritTimeType_);
    }

    return val;
}
bool InheritConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inherit_time_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_time_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritTimeType(refVal);
        }
    }
    return ok;
}


std::string InheritConfig::getStatus() const
{
    return status_;
}

void InheritConfig::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InheritConfig::statusIsSet() const
{
    return statusIsSet_;
}

void InheritConfig::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InheritConfig::getInheritType() const
{
    return inheritType_;
}

void InheritConfig::setInheritType(const std::string& value)
{
    inheritType_ = value;
    inheritTypeIsSet_ = true;
}

bool InheritConfig::inheritTypeIsSet() const
{
    return inheritTypeIsSet_;
}

void InheritConfig::unsetinheritType()
{
    inheritTypeIsSet_ = false;
}

std::string InheritConfig::getInheritTimeType() const
{
    return inheritTimeType_;
}

void InheritConfig::setInheritTimeType(const std::string& value)
{
    inheritTimeType_ = value;
    inheritTimeTypeIsSet_ = true;
}

bool InheritConfig::inheritTimeTypeIsSet() const
{
    return inheritTimeTypeIsSet_;
}

void InheritConfig::unsetinheritTimeType()
{
    inheritTimeTypeIsSet_ = false;
}

}
}
}
}
}


