

#include "huaweicloud/ram/v1/model/UpdateResourceShareReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




UpdateResourceShareReqBody::UpdateResourceShareReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    allowExternalPrincipals_ = false;
    allowExternalPrincipalsIsSet_ = false;
}

UpdateResourceShareReqBody::~UpdateResourceShareReqBody() = default;

void UpdateResourceShareReqBody::validate()
{
}

web::json::value UpdateResourceShareReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(allowExternalPrincipalsIsSet_) {
        val[utility::conversions::to_string_t("allow_external_principals")] = ModelBase::toJson(allowExternalPrincipals_);
    }

    return val;
}
bool UpdateResourceShareReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("allow_external_principals"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_external_principals"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowExternalPrincipals(refVal);
        }
    }
    return ok;
}


std::string UpdateResourceShareReqBody::getName() const
{
    return name_;
}

void UpdateResourceShareReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateResourceShareReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateResourceShareReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateResourceShareReqBody::getDescription() const
{
    return description_;
}

void UpdateResourceShareReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateResourceShareReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateResourceShareReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool UpdateResourceShareReqBody::isAllowExternalPrincipals() const
{
    return allowExternalPrincipals_;
}

void UpdateResourceShareReqBody::setAllowExternalPrincipals(bool value)
{
    allowExternalPrincipals_ = value;
    allowExternalPrincipalsIsSet_ = true;
}

bool UpdateResourceShareReqBody::allowExternalPrincipalsIsSet() const
{
    return allowExternalPrincipalsIsSet_;
}

void UpdateResourceShareReqBody::unsetallowExternalPrincipals()
{
    allowExternalPrincipalsIsSet_ = false;
}

}
}
}
}
}


