

#include "huaweicloud/eip/v3/model/ListBandwidthsLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListBandwidthsLimitRequest::ListBandwidthsLimitRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    fieldsIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

ListBandwidthsLimitRequest::~ListBandwidthsLimitRequest() = default;

void ListBandwidthsLimitRequest::validate()
{
}

web::json::value ListBandwidthsLimitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}
bool ListBandwidthsLimitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}


int32_t ListBandwidthsLimitRequest::getLimit() const
{
    return limit_;
}

void ListBandwidthsLimitRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBandwidthsLimitRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBandwidthsLimitRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBandwidthsLimitRequest::getOffset() const
{
    return offset_;
}

void ListBandwidthsLimitRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBandwidthsLimitRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBandwidthsLimitRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBandwidthsLimitRequest::getMarker() const
{
    return marker_;
}

void ListBandwidthsLimitRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBandwidthsLimitRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBandwidthsLimitRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListBandwidthsLimitRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListBandwidthsLimitRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListBandwidthsLimitRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListBandwidthsLimitRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListBandwidthsLimitRequest::getFields()
{
    return fields_;
}

void ListBandwidthsLimitRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListBandwidthsLimitRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListBandwidthsLimitRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListBandwidthsLimitRequest::getChargeMode() const
{
    return chargeMode_;
}

void ListBandwidthsLimitRequest::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListBandwidthsLimitRequest::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListBandwidthsLimitRequest::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


