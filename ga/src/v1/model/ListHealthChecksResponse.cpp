

#include "huaweicloud/ga/v1/model/ListHealthChecksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListHealthChecksResponse::ListHealthChecksResponse()
{
    healthChecksIsSet_ = false;
    pageInfoIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListHealthChecksResponse::~ListHealthChecksResponse() = default;

void ListHealthChecksResponse::validate()
{
}

web::json::value ListHealthChecksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(healthChecksIsSet_) {
        val[utility::conversions::to_string_t("health_checks")] = ModelBase::toJson(healthChecks_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListHealthChecksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("health_checks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_checks"));
        if(!fieldValue.is_null())
        {
            std::vector<HealthCheckDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthChecks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::vector<HealthCheckDetail>& ListHealthChecksResponse::getHealthChecks()
{
    return healthChecks_;
}

void ListHealthChecksResponse::setHealthChecks(const std::vector<HealthCheckDetail>& value)
{
    healthChecks_ = value;
    healthChecksIsSet_ = true;
}

bool ListHealthChecksResponse::healthChecksIsSet() const
{
    return healthChecksIsSet_;
}

void ListHealthChecksResponse::unsethealthChecks()
{
    healthChecksIsSet_ = false;
}

PageInfo ListHealthChecksResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListHealthChecksResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListHealthChecksResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListHealthChecksResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::string ListHealthChecksResponse::getRequestId() const
{
    return requestId_;
}

void ListHealthChecksResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListHealthChecksResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListHealthChecksResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


