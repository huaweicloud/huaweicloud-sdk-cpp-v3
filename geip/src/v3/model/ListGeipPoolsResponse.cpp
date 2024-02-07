

#include "huaweicloud/geip/v3/model/ListGeipPoolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipPoolsResponse::ListGeipPoolsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    geipPoolsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGeipPoolsResponse::~ListGeipPoolsResponse() = default;

void ListGeipPoolsResponse::validate()
{
}

web::json::value ListGeipPoolsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(geipPoolsIsSet_) {
        val[utility::conversions::to_string_t("geip_pools")] = ModelBase::toJson(geipPools_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGeipPoolsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("geip_pools"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pools"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGeipPools> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPools(refVal);
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


std::string ListGeipPoolsResponse::getRequestId() const
{
    return requestId_;
}

void ListGeipPoolsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGeipPoolsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGeipPoolsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListGeipPools>& ListGeipPoolsResponse::getGeipPools()
{
    return geipPools_;
}

void ListGeipPoolsResponse::setGeipPools(const std::vector<ListGeipPools>& value)
{
    geipPools_ = value;
    geipPoolsIsSet_ = true;
}

bool ListGeipPoolsResponse::geipPoolsIsSet() const
{
    return geipPoolsIsSet_;
}

void ListGeipPoolsResponse::unsetgeipPools()
{
    geipPoolsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListGeipPoolsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGeipPoolsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGeipPoolsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGeipPoolsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListGeipPoolsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGeipPoolsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGeipPoolsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGeipPoolsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


