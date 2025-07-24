

#include "huaweicloud/cloudtest/v1/model/CreateAssetTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateAssetTreeRequest::CreateAssetTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetTreeRequest::~CreateAssetTreeRequest() = default;

void CreateAssetTreeRequest::validate()
{
}

web::json::value CreateAssetTreeRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAssetTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommRequestAssetTree refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetTreeRequest::getProjectId() const
{
    return projectId_;
}

void CreateAssetTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateAssetTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateAssetTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateAssetTreeRequest::getAssetId() const
{
    return assetId_;
}

void CreateAssetTreeRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetTreeRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetTreeRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string CreateAssetTreeRequest::getParentId() const
{
    return parentId_;
}

void CreateAssetTreeRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool CreateAssetTreeRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void CreateAssetTreeRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

CommRequestAssetTree CreateAssetTreeRequest::getBody() const
{
    return body_;
}

void CreateAssetTreeRequest::setBody(const CommRequestAssetTree& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetTreeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetTreeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


