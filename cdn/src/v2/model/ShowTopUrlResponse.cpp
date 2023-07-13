

#include "huaweicloud/cdn/v2/model/ShowTopUrlResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowTopUrlResponse::ShowTopUrlResponse()
{
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    topUrlSummaryIsSet_ = false;
}

ShowTopUrlResponse::~ShowTopUrlResponse() = default;

void ShowTopUrlResponse::validate()
{
}

web::json::value ShowTopUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(topUrlSummaryIsSet_) {
        val[utility::conversions::to_string_t("top_url_summary")] = ModelBase::toJson(topUrlSummary_);
    }

    return val;
}

bool ShowTopUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_url_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_url_summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TopUrlSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopUrlSummary(refVal);
        }
    }
    return ok;
}

std::string ShowTopUrlResponse::getServiceArea() const
{
    return serviceArea_;
}

void ShowTopUrlResponse::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowTopUrlResponse::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowTopUrlResponse::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::vector<TopUrlSummary>& ShowTopUrlResponse::getTopUrlSummary()
{
    return topUrlSummary_;
}

void ShowTopUrlResponse::setTopUrlSummary(const std::vector<TopUrlSummary>& value)
{
    topUrlSummary_ = value;
    topUrlSummaryIsSet_ = true;
}

bool ShowTopUrlResponse::topUrlSummaryIsSet() const
{
    return topUrlSummaryIsSet_;
}

void ShowTopUrlResponse::unsettopUrlSummary()
{
    topUrlSummaryIsSet_ = false;
}

}
}
}
}
}


