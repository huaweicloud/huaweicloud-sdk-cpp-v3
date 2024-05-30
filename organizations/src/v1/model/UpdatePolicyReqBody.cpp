

#include "huaweicloud/organizations/v1/model/UpdatePolicyReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdatePolicyReqBody::UpdatePolicyReqBody()
{
    content_ = "";
    contentIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdatePolicyReqBody::~UpdatePolicyReqBody() = default;

void UpdatePolicyReqBody::validate()
{
}

web::json::value UpdatePolicyReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdatePolicyReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdatePolicyReqBody::getContent() const
{
    return content_;
}

void UpdatePolicyReqBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdatePolicyReqBody::contentIsSet() const
{
    return contentIsSet_;
}

void UpdatePolicyReqBody::unsetcontent()
{
    contentIsSet_ = false;
}

std::string UpdatePolicyReqBody::getDescription() const
{
    return description_;
}

void UpdatePolicyReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdatePolicyReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdatePolicyReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdatePolicyReqBody::getName() const
{
    return name_;
}

void UpdatePolicyReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePolicyReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePolicyReqBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


