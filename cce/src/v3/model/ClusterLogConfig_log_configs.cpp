

#include "huaweicloud/cce/v3/model/ClusterLogConfig_log_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterLogConfig_log_configs::ClusterLogConfig_log_configs()
{
    name_ = "";
    nameIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ClusterLogConfig_log_configs::~ClusterLogConfig_log_configs() = default;

void ClusterLogConfig_log_configs::validate()
{
}

web::json::value ClusterLogConfig_log_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ClusterLogConfig_log_configs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ClusterLogConfig_log_configs::getName() const
{
    return name_;
}

void ClusterLogConfig_log_configs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClusterLogConfig_log_configs::nameIsSet() const
{
    return nameIsSet_;
}

void ClusterLogConfig_log_configs::unsetname()
{
    nameIsSet_ = false;
}

bool ClusterLogConfig_log_configs::isEnable() const
{
    return enable_;
}

void ClusterLogConfig_log_configs::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ClusterLogConfig_log_configs::enableIsSet() const
{
    return enableIsSet_;
}

void ClusterLogConfig_log_configs::unsetenable()
{
    enableIsSet_ = false;
}

std::string ClusterLogConfig_log_configs::getType() const
{
    return type_;
}

void ClusterLogConfig_log_configs::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterLogConfig_log_configs::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterLogConfig_log_configs::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


