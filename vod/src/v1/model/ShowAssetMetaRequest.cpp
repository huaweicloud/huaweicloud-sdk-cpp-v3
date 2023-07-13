

#include "huaweicloud/vod/v1/model/ShowAssetMetaRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetMetaRequest::ShowAssetMetaRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetIdIsSet_ = false;
    statusIsSet_ = false;
    transcodeStatusIsSet_ = false;
    assetStatusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    categoryId_ = 0;
    categoryIdIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    queryString_ = "";
    queryStringIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ShowAssetMetaRequest::~ShowAssetMetaRequest() = default;

void ShowAssetMetaRequest::validate()
{
}

web::json::value ShowAssetMetaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(transcodeStatusIsSet_) {
        val[utility::conversions::to_string_t("transcodeStatus")] = ModelBase::toJson(transcodeStatus_);
    }
    if(assetStatusIsSet_) {
        val[utility::conversions::to_string_t("assetStatus")] = ModelBase::toJson(assetStatus_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(queryStringIsSet_) {
        val[utility::conversions::to_string_t("query_string")] = ModelBase::toJson(queryString_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool ShowAssetMetaRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcodeStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcodeStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assetStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assetStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryString(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}

std::string ShowAssetMetaRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAssetMetaRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAssetMetaRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAssetMetaRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::vector<std::string>& ShowAssetMetaRequest::getAssetId()
{
    return assetId_;
}

void ShowAssetMetaRequest::setAssetId(const std::vector<std::string>& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetMetaRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetMetaRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::vector<std::string>& ShowAssetMetaRequest::getStatus()
{
    return status_;
}

void ShowAssetMetaRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAssetMetaRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAssetMetaRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ShowAssetMetaRequest::getTranscodeStatus()
{
    return transcodeStatus_;
}

void ShowAssetMetaRequest::setTranscodeStatus(const std::vector<std::string>& value)
{
    transcodeStatus_ = value;
    transcodeStatusIsSet_ = true;
}

bool ShowAssetMetaRequest::transcodeStatusIsSet() const
{
    return transcodeStatusIsSet_;
}

void ShowAssetMetaRequest::unsettranscodeStatus()
{
    transcodeStatusIsSet_ = false;
}

std::vector<std::string>& ShowAssetMetaRequest::getAssetStatus()
{
    return assetStatus_;
}

void ShowAssetMetaRequest::setAssetStatus(const std::vector<std::string>& value)
{
    assetStatus_ = value;
    assetStatusIsSet_ = true;
}

bool ShowAssetMetaRequest::assetStatusIsSet() const
{
    return assetStatusIsSet_;
}

void ShowAssetMetaRequest::unsetassetStatus()
{
    assetStatusIsSet_ = false;
}

std::string ShowAssetMetaRequest::getStartTime() const
{
    return startTime_;
}

void ShowAssetMetaRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAssetMetaRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAssetMetaRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowAssetMetaRequest::getEndTime() const
{
    return endTime_;
}

void ShowAssetMetaRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAssetMetaRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAssetMetaRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowAssetMetaRequest::getCategoryId() const
{
    return categoryId_;
}

void ShowAssetMetaRequest::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool ShowAssetMetaRequest::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void ShowAssetMetaRequest::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string ShowAssetMetaRequest::getTags() const
{
    return tags_;
}

void ShowAssetMetaRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowAssetMetaRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowAssetMetaRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ShowAssetMetaRequest::getQueryString() const
{
    return queryString_;
}

void ShowAssetMetaRequest::setQueryString(const std::string& value)
{
    queryString_ = value;
    queryStringIsSet_ = true;
}

bool ShowAssetMetaRequest::queryStringIsSet() const
{
    return queryStringIsSet_;
}

void ShowAssetMetaRequest::unsetqueryString()
{
    queryStringIsSet_ = false;
}

int32_t ShowAssetMetaRequest::getPage() const
{
    return page_;
}

void ShowAssetMetaRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowAssetMetaRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ShowAssetMetaRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ShowAssetMetaRequest::getSize() const
{
    return size_;
}

void ShowAssetMetaRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowAssetMetaRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowAssetMetaRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


