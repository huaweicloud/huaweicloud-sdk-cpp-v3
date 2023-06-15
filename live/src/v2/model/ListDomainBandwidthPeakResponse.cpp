

#include "huaweicloud/live/v2/model/ListDomainBandwidthPeakResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListDomainBandwidthPeakResponse::ListDomainBandwidthPeakResponse()
{
    bandwidthListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDomainBandwidthPeakResponse::~ListDomainBandwidthPeakResponse() = default;

void ListDomainBandwidthPeakResponse::validate()
{
}

web::json::value ListDomainBandwidthPeakResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthListIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_list")] = ModelBase::toJson(bandwidthList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListDomainBandwidthPeakResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PeakBandwidthData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthList(refVal);
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


std::vector<PeakBandwidthData>& ListDomainBandwidthPeakResponse::getBandwidthList()
{
    return bandwidthList_;
}

void ListDomainBandwidthPeakResponse::setBandwidthList(const std::vector<PeakBandwidthData>& value)
{
    bandwidthList_ = value;
    bandwidthListIsSet_ = true;
}

bool ListDomainBandwidthPeakResponse::bandwidthListIsSet() const
{
    return bandwidthListIsSet_;
}

void ListDomainBandwidthPeakResponse::unsetbandwidthList()
{
    bandwidthListIsSet_ = false;
}

std::string ListDomainBandwidthPeakResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDomainBandwidthPeakResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDomainBandwidthPeakResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDomainBandwidthPeakResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


