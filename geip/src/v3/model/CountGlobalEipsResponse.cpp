

#include "huaweicloud/geip/v3/model/CountGlobalEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEipsResponse::CountGlobalEipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipsIsSet_ = false;
    pageInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CountGlobalEipsResponse::~CountGlobalEipsResponse() = default;

void CountGlobalEipsResponse::validate()
{
}

web::json::value CountGlobalEipsResponse::toJson() const
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
bool CountGlobalEipsResponse::fromJson(const web::json::value& val)
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
            std::vector<CountGlobalEips> refVal;
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


std::string CountGlobalEipsResponse::getRequestId() const
{
    return requestId_;
}

void CountGlobalEipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CountGlobalEipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CountGlobalEipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<CountGlobalEips>& CountGlobalEipsResponse::getGlobalEips()
{
    return globalEips_;
}

void CountGlobalEipsResponse::setGlobalEips(const std::vector<CountGlobalEips>& value)
{
    globalEips_ = value;
    globalEipsIsSet_ = true;
}

bool CountGlobalEipsResponse::globalEipsIsSet() const
{
    return globalEipsIsSet_;
}

void CountGlobalEipsResponse::unsetglobalEips()
{
    globalEipsIsSet_ = false;
}

ListGlobalEipsResponseBody_page_info CountGlobalEipsResponse::getPageInfo() const
{
    return pageInfo_;
}

void CountGlobalEipsResponse::setPageInfo(const ListGlobalEipsResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool CountGlobalEipsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void CountGlobalEipsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string CountGlobalEipsResponse::getXRequestId() const
{
    return xRequestId_;
}

void CountGlobalEipsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CountGlobalEipsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CountGlobalEipsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


