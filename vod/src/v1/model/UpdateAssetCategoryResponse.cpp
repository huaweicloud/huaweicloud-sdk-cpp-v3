

#include "huaweicloud/vod/v1/model/UpdateAssetCategoryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetCategoryResponse::UpdateAssetCategoryResponse()
{
    name_ = "";
    nameIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

UpdateAssetCategoryResponse::~UpdateAssetCategoryResponse() = default;

void UpdateAssetCategoryResponse::validate()
{
}

web::json::value UpdateAssetCategoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }

    return val;
}

bool UpdateAssetCategoryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetCategoryResponse::getName() const
{
    return name_;
}

void UpdateAssetCategoryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAssetCategoryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAssetCategoryResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateAssetCategoryResponse::getParentId() const
{
    return parentId_;
}

void UpdateAssetCategoryResponse::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool UpdateAssetCategoryResponse::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void UpdateAssetCategoryResponse::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t UpdateAssetCategoryResponse::getId() const
{
    return id_;
}

void UpdateAssetCategoryResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAssetCategoryResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateAssetCategoryResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateAssetCategoryResponse::getLevel() const
{
    return level_;
}

void UpdateAssetCategoryResponse::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool UpdateAssetCategoryResponse::levelIsSet() const
{
    return levelIsSet_;
}

void UpdateAssetCategoryResponse::unsetlevel()
{
    levelIsSet_ = false;
}

std::string UpdateAssetCategoryResponse::getProjectId() const
{
    return projectId_;
}

void UpdateAssetCategoryResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAssetCategoryResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAssetCategoryResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


