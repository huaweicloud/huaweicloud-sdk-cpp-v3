

#include "huaweicloud/vod/v1/model/ListAssetListRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetListRequest::ListAssetListRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetIdIsSet_ = false;
    statusIsSet_ = false;
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
    mediaTypeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ListAssetListRequest::~ListAssetListRequest() = default;

void ListAssetListRequest::validate()
{
}

web::json::value ListAssetListRequest::toJson() const
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
    if(mediaTypeIsSet_) {
        val[utility::conversions::to_string_t("media_type")] = ModelBase::toJson(mediaType_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}

bool ListAssetListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("media_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}

std::string ListAssetListRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetListRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetListRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetListRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::vector<std::string>& ListAssetListRequest::getAssetId()
{
    return assetId_;
}

void ListAssetListRequest::setAssetId(const std::vector<std::string>& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListAssetListRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListAssetListRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::vector<std::string>& ListAssetListRequest::getStatus()
{
    return status_;
}

void ListAssetListRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAssetListRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAssetListRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAssetListRequest::getStartTime() const
{
    return startTime_;
}

void ListAssetListRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAssetListRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAssetListRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAssetListRequest::getEndTime() const
{
    return endTime_;
}

void ListAssetListRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAssetListRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAssetListRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListAssetListRequest::getCategoryId() const
{
    return categoryId_;
}

void ListAssetListRequest::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool ListAssetListRequest::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void ListAssetListRequest::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string ListAssetListRequest::getTags() const
{
    return tags_;
}

void ListAssetListRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListAssetListRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListAssetListRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListAssetListRequest::getQueryString() const
{
    return queryString_;
}

void ListAssetListRequest::setQueryString(const std::string& value)
{
    queryString_ = value;
    queryStringIsSet_ = true;
}

bool ListAssetListRequest::queryStringIsSet() const
{
    return queryStringIsSet_;
}

void ListAssetListRequest::unsetqueryString()
{
    queryStringIsSet_ = false;
}

std::vector<std::string>& ListAssetListRequest::getMediaType()
{
    return mediaType_;
}

void ListAssetListRequest::setMediaType(const std::vector<std::string>& value)
{
    mediaType_ = value;
    mediaTypeIsSet_ = true;
}

bool ListAssetListRequest::mediaTypeIsSet() const
{
    return mediaTypeIsSet_;
}

void ListAssetListRequest::unsetmediaType()
{
    mediaTypeIsSet_ = false;
}

int32_t ListAssetListRequest::getPage() const
{
    return page_;
}

void ListAssetListRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAssetListRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListAssetListRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAssetListRequest::getSize() const
{
    return size_;
}

void ListAssetListRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAssetListRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAssetListRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListAssetListRequest::getOrder() const
{
    return order_;
}

void ListAssetListRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListAssetListRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListAssetListRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


