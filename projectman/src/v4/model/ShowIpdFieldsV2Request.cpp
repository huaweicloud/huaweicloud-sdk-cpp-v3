

#include "huaweicloud/projectman/v4/model/ShowIpdFieldsV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdFieldsV2Request::ShowIpdFieldsV2Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    categoryId_ = "";
    categoryIdIsSet_ = false;
    categoryLayerId_ = "";
    categoryLayerIdIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
}

ShowIpdFieldsV2Request::~ShowIpdFieldsV2Request() = default;

void ShowIpdFieldsV2Request::validate()
{
}

web::json::value ShowIpdFieldsV2Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(categoryLayerIdIsSet_) {
        val[utility::conversions::to_string_t("category_layer_id")] = ModelBase::toJson(categoryLayerId_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }

    return val;
}
bool ShowIpdFieldsV2Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_layer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_layer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryLayerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowIpdFieldsV2Request::getProjectId() const
{
    return projectId_;
}

void ShowIpdFieldsV2Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIpdFieldsV2Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIpdFieldsV2Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIpdFieldsV2Request::getCategoryId() const
{
    return categoryId_;
}

void ShowIpdFieldsV2Request::setCategoryId(const std::string& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool ShowIpdFieldsV2Request::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void ShowIpdFieldsV2Request::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string ShowIpdFieldsV2Request::getCategoryLayerId() const
{
    return categoryLayerId_;
}

void ShowIpdFieldsV2Request::setCategoryLayerId(const std::string& value)
{
    categoryLayerId_ = value;
    categoryLayerIdIsSet_ = true;
}

bool ShowIpdFieldsV2Request::categoryLayerIdIsSet() const
{
    return categoryLayerIdIsSet_;
}

void ShowIpdFieldsV2Request::unsetcategoryLayerId()
{
    categoryLayerIdIsSet_ = false;
}

std::string ShowIpdFieldsV2Request::getTargetProjectId() const
{
    return targetProjectId_;
}

void ShowIpdFieldsV2Request::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool ShowIpdFieldsV2Request::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void ShowIpdFieldsV2Request::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

}
}
}
}
}


