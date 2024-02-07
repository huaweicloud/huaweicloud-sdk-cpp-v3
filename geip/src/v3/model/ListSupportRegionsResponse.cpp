

#include "huaweicloud/geip/v3/model/ListSupportRegionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportRegionsResponse::ListSupportRegionsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    supportRegionsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSupportRegionsResponse::~ListSupportRegionsResponse() = default;

void ListSupportRegionsResponse::validate()
{
}

web::json::value ListSupportRegionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(supportRegionsIsSet_) {
        val[utility::conversions::to_string_t("support_regions")] = ModelBase::toJson(supportRegions_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSupportRegionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("support_regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_regions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSupportRegions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportRegions(refVal);
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


std::string ListSupportRegionsResponse::getRequestId() const
{
    return requestId_;
}

void ListSupportRegionsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListSupportRegionsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListSupportRegionsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListSupportRegions>& ListSupportRegionsResponse::getSupportRegions()
{
    return supportRegions_;
}

void ListSupportRegionsResponse::setSupportRegions(const std::vector<ListSupportRegions>& value)
{
    supportRegions_ = value;
    supportRegionsIsSet_ = true;
}

bool ListSupportRegionsResponse::supportRegionsIsSet() const
{
    return supportRegionsIsSet_;
}

void ListSupportRegionsResponse::unsetsupportRegions()
{
    supportRegionsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListSupportRegionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListSupportRegionsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListSupportRegionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListSupportRegionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListSupportRegionsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSupportRegionsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSupportRegionsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSupportRegionsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


