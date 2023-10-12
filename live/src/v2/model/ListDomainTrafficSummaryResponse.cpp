

#include "huaweicloud/live/v2/model/ListDomainTrafficSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainTrafficSummaryResponse::ListDomainTrafficSummaryResponse()
{
    trafficListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDomainTrafficSummaryResponse::~ListDomainTrafficSummaryResponse() = default;

void ListDomainTrafficSummaryResponse::validate()
{
}

web::json::value ListDomainTrafficSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trafficListIsSet_) {
        val[utility::conversions::to_string_t("traffic_list")] = ModelBase::toJson(trafficList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListDomainTrafficSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("traffic_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TrafficSummaryData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficList(refVal);
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


std::vector<TrafficSummaryData>& ListDomainTrafficSummaryResponse::getTrafficList()
{
    return trafficList_;
}

void ListDomainTrafficSummaryResponse::setTrafficList(const std::vector<TrafficSummaryData>& value)
{
    trafficList_ = value;
    trafficListIsSet_ = true;
}

bool ListDomainTrafficSummaryResponse::trafficListIsSet() const
{
    return trafficListIsSet_;
}

void ListDomainTrafficSummaryResponse::unsettrafficList()
{
    trafficListIsSet_ = false;
}

std::string ListDomainTrafficSummaryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDomainTrafficSummaryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDomainTrafficSummaryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDomainTrafficSummaryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


