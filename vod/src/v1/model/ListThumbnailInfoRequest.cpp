

#include "huaweicloud/vod/v1/model/ListThumbnailInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListThumbnailInfoRequest::ListThumbnailInfoRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListThumbnailInfoRequest::~ListThumbnailInfoRequest() = default;

void ListThumbnailInfoRequest::validate()
{
}

web::json::value ListThumbnailInfoRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListThumbnailInfoRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListThumbnailInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListThumbnailInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListThumbnailInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListThumbnailInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListThumbnailInfoRequest::getAssetId() const
{
    return assetId_;
}

void ListThumbnailInfoRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListThumbnailInfoRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListThumbnailInfoRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListThumbnailInfoRequest::getTaskId() const
{
    return taskId_;
}

void ListThumbnailInfoRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListThumbnailInfoRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListThumbnailInfoRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListThumbnailInfoRequest::getOffset() const
{
    return offset_;
}

void ListThumbnailInfoRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListThumbnailInfoRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListThumbnailInfoRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListThumbnailInfoRequest::getLimit() const
{
    return limit_;
}

void ListThumbnailInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListThumbnailInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListThumbnailInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


