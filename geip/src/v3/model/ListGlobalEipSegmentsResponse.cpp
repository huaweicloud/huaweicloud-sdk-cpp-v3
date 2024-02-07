

#include "huaweicloud/geip/v3/model/ListGlobalEipSegmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipSegmentsResponse::ListGlobalEipSegmentsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipSegmentsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGlobalEipSegmentsResponse::~ListGlobalEipSegmentsResponse() = default;

void ListGlobalEipSegmentsResponse::validate()
{
}

web::json::value ListGlobalEipSegmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(globalEipSegmentsIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segments")] = ModelBase::toJson(globalEipSegments_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGlobalEipSegmentsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("global_eip_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segments"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGlobalEipSegments> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegments(refVal);
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


std::string ListGlobalEipSegmentsResponse::getRequestId() const
{
    return requestId_;
}

void ListGlobalEipSegmentsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGlobalEipSegmentsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGlobalEipSegmentsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListGlobalEipSegments>& ListGlobalEipSegmentsResponse::getGlobalEipSegments()
{
    return globalEipSegments_;
}

void ListGlobalEipSegmentsResponse::setGlobalEipSegments(const std::vector<ListGlobalEipSegments>& value)
{
    globalEipSegments_ = value;
    globalEipSegmentsIsSet_ = true;
}

bool ListGlobalEipSegmentsResponse::globalEipSegmentsIsSet() const
{
    return globalEipSegmentsIsSet_;
}

void ListGlobalEipSegmentsResponse::unsetglobalEipSegments()
{
    globalEipSegmentsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListGlobalEipSegmentsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGlobalEipSegmentsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGlobalEipSegmentsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGlobalEipSegmentsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListGlobalEipSegmentsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGlobalEipSegmentsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGlobalEipSegmentsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGlobalEipSegmentsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


