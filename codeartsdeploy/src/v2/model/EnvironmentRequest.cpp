

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentRequest::EnvironmentRequest()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

EnvironmentRequest::~EnvironmentRequest() = default;

void EnvironmentRequest::validate()
{
}

web::json::value EnvironmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool EnvironmentRequest::fromJson(const web::json::value& val)
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


std::string EnvironmentRequest::getName() const
{
    return name_;
}

void EnvironmentRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnvironmentRequest::nameIsSet() const
{
    return nameIsSet_;
}

void EnvironmentRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string EnvironmentRequest::getDescription() const
{
    return description_;
}

void EnvironmentRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnvironmentRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnvironmentRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


