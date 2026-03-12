

#include "huaweicloud/vod/v1/model/DeleteThumbnailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteThumbnailsRequest::DeleteThumbnailsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    taskIdIsSet_ = false;
}

DeleteThumbnailsRequest::~DeleteThumbnailsRequest() = default;

void DeleteThumbnailsRequest::validate()
{
}

web::json::value DeleteThumbnailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteThumbnailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string DeleteThumbnailsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteThumbnailsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteThumbnailsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteThumbnailsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteThumbnailsRequest::getAssetId() const
{
    return assetId_;
}

void DeleteThumbnailsRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteThumbnailsRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteThumbnailsRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::vector<std::string>& DeleteThumbnailsRequest::getTaskId()
{
    return taskId_;
}

void DeleteThumbnailsRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteThumbnailsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteThumbnailsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


