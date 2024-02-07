

#include "huaweicloud/geip/v3/model/ListAccessSitesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListAccessSitesResponse::ListAccessSitesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    accessSitesIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListAccessSitesResponse::~ListAccessSitesResponse() = default;

void ListAccessSitesResponse::validate()
{
}

web::json::value ListAccessSitesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(accessSitesIsSet_) {
        val[utility::conversions::to_string_t("access_sites")] = ModelBase::toJson(accessSites_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListAccessSitesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_sites"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_sites"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAccessSites> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSites(refVal);
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


std::string ListAccessSitesResponse::getRequestId() const
{
    return requestId_;
}

void ListAccessSitesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListAccessSitesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListAccessSitesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListAccessSites>& ListAccessSitesResponse::getAccessSites()
{
    return accessSites_;
}

void ListAccessSitesResponse::setAccessSites(const std::vector<ListAccessSites>& value)
{
    accessSites_ = value;
    accessSitesIsSet_ = true;
}

bool ListAccessSitesResponse::accessSitesIsSet() const
{
    return accessSitesIsSet_;
}

void ListAccessSitesResponse::unsetaccessSites()
{
    accessSitesIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListAccessSitesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccessSitesResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccessSitesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccessSitesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListAccessSitesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListAccessSitesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListAccessSitesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListAccessSitesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


