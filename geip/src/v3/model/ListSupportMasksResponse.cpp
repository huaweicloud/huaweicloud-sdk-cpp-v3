

#include "huaweicloud/geip/v3/model/ListSupportMasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportMasksResponse::ListSupportMasksResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    supportMasksIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSupportMasksResponse::~ListSupportMasksResponse() = default;

void ListSupportMasksResponse::validate()
{
}

web::json::value ListSupportMasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(supportMasksIsSet_) {
        val[utility::conversions::to_string_t("support_masks")] = ModelBase::toJson(supportMasks_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSupportMasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_masks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_masks"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSupportMasks> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportMasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListGlobalEipsResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListSupportMasksResponse::getRequestId() const
{
    return requestId_;
}

void ListSupportMasksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListSupportMasksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListSupportMasksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListSupportMasks>& ListSupportMasksResponse::getSupportMasks()
{
    return supportMasks_;
}

void ListSupportMasksResponse::setSupportMasks(const std::vector<ListSupportMasks>& value)
{
    supportMasks_ = value;
    supportMasksIsSet_ = true;
}

bool ListSupportMasksResponse::supportMasksIsSet() const
{
    return supportMasksIsSet_;
}

void ListSupportMasksResponse::unsetsupportMasks()
{
    supportMasksIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListSupportMasksResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListSupportMasksResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListSupportMasksResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListSupportMasksResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListSupportMasksResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSupportMasksResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSupportMasksResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSupportMasksResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


