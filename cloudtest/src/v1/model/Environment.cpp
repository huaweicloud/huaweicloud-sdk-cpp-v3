

#include "huaweicloud/cloudtest/v1/model/Environment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Environment::Environment()
{
    environmentId_ = "";
    environmentIdIsSet_ = false;
    environmentName_ = "";
    environmentNameIsSet_ = false;
    environmentDescription_ = "";
    environmentDescriptionIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
}

Environment::~Environment() = default;

void Environment::validate()
{
}

web::json::value Environment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(environmentNameIsSet_) {
        val[utility::conversions::to_string_t("environment_name")] = ModelBase::toJson(environmentName_);
    }
    if(environmentDescriptionIsSet_) {
        val[utility::conversions::to_string_t("environment_description")] = ModelBase::toJson(environmentDescription_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }

    return val;
}
bool Environment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    return ok;
}


std::string Environment::getEnvironmentId() const
{
    return environmentId_;
}

void Environment::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool Environment::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void Environment::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::string Environment::getEnvironmentName() const
{
    return environmentName_;
}

void Environment::setEnvironmentName(const std::string& value)
{
    environmentName_ = value;
    environmentNameIsSet_ = true;
}

bool Environment::environmentNameIsSet() const
{
    return environmentNameIsSet_;
}

void Environment::unsetenvironmentName()
{
    environmentNameIsSet_ = false;
}

std::string Environment::getEnvironmentDescription() const
{
    return environmentDescription_;
}

void Environment::setEnvironmentDescription(const std::string& value)
{
    environmentDescription_ = value;
    environmentDescriptionIsSet_ = true;
}

bool Environment::environmentDescriptionIsSet() const
{
    return environmentDescriptionIsSet_;
}

void Environment::unsetenvironmentDescription()
{
    environmentDescriptionIsSet_ = false;
}

bool Environment::isIsDefault() const
{
    return isDefault_;
}

void Environment::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool Environment::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void Environment::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

}
}
}
}
}


