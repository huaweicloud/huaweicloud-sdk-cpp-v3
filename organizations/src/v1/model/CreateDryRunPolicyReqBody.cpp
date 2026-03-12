

#include "huaweicloud/organizations/v1/model/CreateDryRunPolicyReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateDryRunPolicyReqBody::CreateDryRunPolicyReqBody()
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

CreateDryRunPolicyReqBody::~CreateDryRunPolicyReqBody() = default;

void CreateDryRunPolicyReqBody::validate()
{
}

web::json::value CreateDryRunPolicyReqBody::toJson() const
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
bool CreateDryRunPolicyReqBody::fromJson(const web::json::value& val)
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


std::string CreateDryRunPolicyReqBody::getContent() const
{
    return content_;
}

void CreateDryRunPolicyReqBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateDryRunPolicyReqBody::contentIsSet() const
{
    return contentIsSet_;
}

void CreateDryRunPolicyReqBody::unsetcontent()
{
    contentIsSet_ = false;
}

std::string CreateDryRunPolicyReqBody::getDescription() const
{
    return description_;
}

void CreateDryRunPolicyReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDryRunPolicyReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDryRunPolicyReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDryRunPolicyReqBody::getName() const
{
    return name_;
}

void CreateDryRunPolicyReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDryRunPolicyReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDryRunPolicyReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDryRunPolicyReqBody::getType() const
{
    return type_;
}

void CreateDryRunPolicyReqBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateDryRunPolicyReqBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateDryRunPolicyReqBody::unsettype()
{
    typeIsSet_ = false;
}

std::vector<TagDto>& CreateDryRunPolicyReqBody::getTags()
{
    return tags_;
}

void CreateDryRunPolicyReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateDryRunPolicyReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateDryRunPolicyReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


