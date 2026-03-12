

#include "huaweicloud/vod/v1/model/DeleteThumbnailResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteThumbnailResult::DeleteThumbnailResult()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteThumbnailResult::~DeleteThumbnailResult() = default;

void DeleteThumbnailResult::validate()
{
}

web::json::value DeleteThumbnailResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteThumbnailResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string DeleteThumbnailResult::getAssetId() const
{
    return assetId_;
}

void DeleteThumbnailResult::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteThumbnailResult::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteThumbnailResult::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteThumbnailResult::getTaskId() const
{
    return taskId_;
}

void DeleteThumbnailResult::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteThumbnailResult::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteThumbnailResult::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string DeleteThumbnailResult::getStatus() const
{
    return status_;
}

void DeleteThumbnailResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteThumbnailResult::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteThumbnailResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


