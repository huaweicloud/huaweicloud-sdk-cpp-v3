

#include "huaweicloud/geip/v3/model/ListGlobalEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipsResponse::ListGlobalEipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGlobalEipsResponse::~ListGlobalEipsResponse() = default;

void ListGlobalEipsResponse::validate()
{
}

web::json::value ListGlobalEipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(globalEipsIsSet_) {
        val[utility::conversions::to_string_t("global_eips")] = ModelBase::toJson(globalEips_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGlobalEipsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("global_eips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eips"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGlobalEips> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEips(refVal);
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


std::string ListGlobalEipsResponse::getRequestId() const
{
    return requestId_;
}

void ListGlobalEipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGlobalEipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGlobalEipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListGlobalEips>& ListGlobalEipsResponse::getGlobalEips()
{
    return globalEips_;
}

void ListGlobalEipsResponse::setGlobalEips(const std::vector<ListGlobalEips>& value)
{
    globalEips_ = value;
    globalEipsIsSet_ = true;
}

bool ListGlobalEipsResponse::globalEipsIsSet() const
{
    return globalEipsIsSet_;
}

void ListGlobalEipsResponse::unsetglobalEips()
{
    globalEipsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info ListGlobalEipsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListGlobalEipsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListGlobalEipsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListGlobalEipsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListGlobalEipsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGlobalEipsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGlobalEipsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGlobalEipsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


