

#include "huaweicloud/cloudtest/v1/model/ShowAssetTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowAssetTreeRequest::ShowAssetTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

ShowAssetTreeRequest::~ShowAssetTreeRequest() = default;

void ShowAssetTreeRequest::validate()
{
}

web::json::value ShowAssetTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool ShowAssetTreeRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAssetTreeRequest::getProjectId() const
{
    return projectId_;
}

void ShowAssetTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAssetTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAssetTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowAssetTreeRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetTreeRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetTreeRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetTreeRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


