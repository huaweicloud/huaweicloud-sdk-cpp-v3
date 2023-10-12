

#include "huaweicloud/vod/v1/model/CreateAssetCategoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetCategoryResponse::CreateAssetCategoryResponse()
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

CreateAssetCategoryResponse::~CreateAssetCategoryResponse() = default;

void CreateAssetCategoryResponse::validate()
{
}

web::json::value CreateAssetCategoryResponse::toJson() const
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
bool CreateAssetCategoryResponse::fromJson(const web::json::value& val)
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


std::string CreateAssetCategoryResponse::getName() const
{
    return name_;
}

void CreateAssetCategoryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAssetCategoryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAssetCategoryResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateAssetCategoryResponse::getParentId() const
{
    return parentId_;
}

void CreateAssetCategoryResponse::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateAssetCategoryResponse::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateAssetCategoryResponse::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t CreateAssetCategoryResponse::getId() const
{
    return id_;
}

void CreateAssetCategoryResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateAssetCategoryResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateAssetCategoryResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t CreateAssetCategoryResponse::getLevel() const
{
    return level_;
}

void CreateAssetCategoryResponse::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool CreateAssetCategoryResponse::levelIsSet() const
{
    return levelIsSet_;
}

void CreateAssetCategoryResponse::unsetlevel()
{
    levelIsSet_ = false;
}

std::string CreateAssetCategoryResponse::getProjectId() const
{
    return projectId_;
}

void CreateAssetCategoryResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateAssetCategoryResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateAssetCategoryResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


