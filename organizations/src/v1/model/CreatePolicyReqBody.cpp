

#include "huaweicloud/organizations/v1/model/CreatePolicyReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreatePolicyReqBody::CreatePolicyReqBody()
{
    content_ = "";
    contentIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    tagsIsSet_ = false;
}

CreatePolicyReqBody::~CreatePolicyReqBody() = default;

void CreatePolicyReqBody::validate()
{
}

web::json::value CreatePolicyReqBody::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreatePolicyReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreatePolicyReqBody::getContent() const
{
    return content_;
}

void CreatePolicyReqBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreatePolicyReqBody::contentIsSet() const
{
    return contentIsSet_;
}

void CreatePolicyReqBody::unsetcontent()
{
    contentIsSet_ = false;
}

std::string CreatePolicyReqBody::getDescription() const
{
    return description_;
}

void CreatePolicyReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreatePolicyReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreatePolicyReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreatePolicyReqBody::getName() const
{
    return name_;
}

void CreatePolicyReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreatePolicyReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreatePolicyReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreatePolicyReqBody::getType() const
{
    return type_;
}

void CreatePolicyReqBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreatePolicyReqBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreatePolicyReqBody::unsettype()
{
    typeIsSet_ = false;
}

std::vector<TagDto>& CreatePolicyReqBody::getTags()
{
    return tags_;
}

void CreatePolicyReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreatePolicyReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreatePolicyReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


