

#include "huaweicloud/vod/v1/model/ListAssetTaskInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetTaskInfoRequest::ListAssetTaskInfoRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    createTimeAfter_ = "";
    createTimeAfterIsSet_ = false;
    createTimeBefore_ = "";
    createTimeBeforeIsSet_ = false;
    endTimeAfter_ = "";
    endTimeAfterIsSet_ = false;
    endTimeBefore_ = "";
    endTimeBeforeIsSet_ = false;
    statusIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAssetTaskInfoRequest::~ListAssetTaskInfoRequest() = default;

void ListAssetTaskInfoRequest::validate()
{
}

web::json::value ListAssetTaskInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(createTimeAfterIsSet_) {
        val[utility::conversions::to_string_t("create_time_after")] = ModelBase::toJson(createTimeAfter_);
    }
    if(createTimeBeforeIsSet_) {
        val[utility::conversions::to_string_t("create_time_before")] = ModelBase::toJson(createTimeBefore_);
    }
    if(endTimeAfterIsSet_) {
        val[utility::conversions::to_string_t("end_time_after")] = ModelBase::toJson(endTimeAfter_);
    }
    if(endTimeBeforeIsSet_) {
        val[utility::conversions::to_string_t("end_time_before")] = ModelBase::toJson(endTimeBefore_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAssetTaskInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_after"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_before"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_after"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time_before"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeBefore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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


std::string ListAssetTaskInfoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetTaskInfoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetTaskInfoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetTaskInfoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getType() const
{
    return type_;
}

void ListAssetTaskInfoRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAssetTaskInfoRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAssetTaskInfoRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getAssetId() const
{
    return assetId_;
}

void ListAssetTaskInfoRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListAssetTaskInfoRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListAssetTaskInfoRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getCreateTimeAfter() const
{
    return createTimeAfter_;
}

void ListAssetTaskInfoRequest::setCreateTimeAfter(const std::string& value)
{
    createTimeAfter_ = value;
    createTimeAfterIsSet_ = true;
}

bool ListAssetTaskInfoRequest::createTimeAfterIsSet() const
{
    return createTimeAfterIsSet_;
}

void ListAssetTaskInfoRequest::unsetcreateTimeAfter()
{
    createTimeAfterIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getCreateTimeBefore() const
{
    return createTimeBefore_;
}

void ListAssetTaskInfoRequest::setCreateTimeBefore(const std::string& value)
{
    createTimeBefore_ = value;
    createTimeBeforeIsSet_ = true;
}

bool ListAssetTaskInfoRequest::createTimeBeforeIsSet() const
{
    return createTimeBeforeIsSet_;
}

void ListAssetTaskInfoRequest::unsetcreateTimeBefore()
{
    createTimeBeforeIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getEndTimeAfter() const
{
    return endTimeAfter_;
}

void ListAssetTaskInfoRequest::setEndTimeAfter(const std::string& value)
{
    endTimeAfter_ = value;
    endTimeAfterIsSet_ = true;
}

bool ListAssetTaskInfoRequest::endTimeAfterIsSet() const
{
    return endTimeAfterIsSet_;
}

void ListAssetTaskInfoRequest::unsetendTimeAfter()
{
    endTimeAfterIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getEndTimeBefore() const
{
    return endTimeBefore_;
}

void ListAssetTaskInfoRequest::setEndTimeBefore(const std::string& value)
{
    endTimeBefore_ = value;
    endTimeBeforeIsSet_ = true;
}

bool ListAssetTaskInfoRequest::endTimeBeforeIsSet() const
{
    return endTimeBeforeIsSet_;
}

void ListAssetTaskInfoRequest::unsetendTimeBefore()
{
    endTimeBeforeIsSet_ = false;
}

std::vector<std::string>& ListAssetTaskInfoRequest::getStatus()
{
    return status_;
}

void ListAssetTaskInfoRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAssetTaskInfoRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAssetTaskInfoRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAssetTaskInfoRequest::getMarker() const
{
    return marker_;
}

void ListAssetTaskInfoRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAssetTaskInfoRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAssetTaskInfoRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListAssetTaskInfoRequest::getLimit() const
{
    return limit_;
}

void ListAssetTaskInfoRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetTaskInfoRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetTaskInfoRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


