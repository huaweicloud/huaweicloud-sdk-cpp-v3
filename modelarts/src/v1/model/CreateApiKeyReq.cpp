

#include "huaweicloud/modelarts/v1/model/CreateApiKeyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateApiKeyReq::CreateApiKeyReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
}

CreateApiKeyReq::~CreateApiKeyReq() = default;

void CreateApiKeyReq::validate()
{
}

web::json::value CreateApiKeyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }

    return val;
}
bool CreateApiKeyReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    return ok;
}


std::string CreateApiKeyReq::getName() const
{
    return name_;
}

void CreateApiKeyReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateApiKeyReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateApiKeyReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateApiKeyReq::getDescription() const
{
    return description_;
}

void CreateApiKeyReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateApiKeyReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateApiKeyReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateApiKeyReq::getScope() const
{
    return scope_;
}

void CreateApiKeyReq::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool CreateApiKeyReq::scopeIsSet() const
{
    return scopeIsSet_;
}

void CreateApiKeyReq::unsetscope()
{
    scopeIsSet_ = false;
}

}
}
}
}
}


