

#include "huaweicloud/codeartsbuild/v3/model/SystemParameters_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SystemParameters_result::SystemParameters_result()
{
    id_ = 0;
    idIsSet_ = false;
    parameterName_ = "";
    parameterNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

SystemParameters_result::~SystemParameters_result() = default;

void SystemParameters_result::validate()
{
}

web::json::value SystemParameters_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool SystemParameters_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


int32_t SystemParameters_result::getId() const
{
    return id_;
}

void SystemParameters_result::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SystemParameters_result::idIsSet() const
{
    return idIsSet_;
}

void SystemParameters_result::unsetid()
{
    idIsSet_ = false;
}

std::string SystemParameters_result::getParameterName() const
{
    return parameterName_;
}

void SystemParameters_result::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool SystemParameters_result::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void SystemParameters_result::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string SystemParameters_result::getDescription() const
{
    return description_;
}

void SystemParameters_result::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SystemParameters_result::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SystemParameters_result::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


