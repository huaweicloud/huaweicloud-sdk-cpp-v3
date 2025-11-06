

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupRequestBody::CreateGroupRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateGroupRequestBody::~CreateGroupRequestBody() = default;

void CreateGroupRequestBody::validate()
{
}

web::json::value CreateGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateGroupRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
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


std::string CreateGroupRequestBody::getName() const
{
    return name_;
}

void CreateGroupRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGroupRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGroupRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateGroupRequestBody::getParentId() const
{
    return parentId_;
}

void CreateGroupRequestBody::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateGroupRequestBody::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateGroupRequestBody::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string CreateGroupRequestBody::getVisibility() const
{
    return visibility_;
}

void CreateGroupRequestBody::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool CreateGroupRequestBody::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void CreateGroupRequestBody::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string CreateGroupRequestBody::getDescription() const
{
    return description_;
}

void CreateGroupRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGroupRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGroupRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


