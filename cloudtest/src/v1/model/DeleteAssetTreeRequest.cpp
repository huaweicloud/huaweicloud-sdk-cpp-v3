

#include "huaweicloud/cloudtest/v1/model/DeleteAssetTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteAssetTreeRequest::DeleteAssetTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

DeleteAssetTreeRequest::~DeleteAssetTreeRequest() = default;

void DeleteAssetTreeRequest::validate()
{
}

web::json::value DeleteAssetTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool DeleteAssetTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string DeleteAssetTreeRequest::getProjectId() const
{
    return projectId_;
}

void DeleteAssetTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteAssetTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteAssetTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteAssetTreeRequest::getAssetId() const
{
    return assetId_;
}

void DeleteAssetTreeRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteAssetTreeRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteAssetTreeRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteAssetTreeRequest::getParentId() const
{
    return parentId_;
}

void DeleteAssetTreeRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DeleteAssetTreeRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DeleteAssetTreeRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


