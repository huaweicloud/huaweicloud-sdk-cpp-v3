

#include "huaweicloud/eip/v2/model/BatchCreateSharedBandwidthsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreateSharedBandwidthsResponse::BatchCreateSharedBandwidthsResponse()
{
    bandwidthsIsSet_ = false;
}

BatchCreateSharedBandwidthsResponse::~BatchCreateSharedBandwidthsResponse() = default;

void BatchCreateSharedBandwidthsResponse::validate()
{
}

web::json::value BatchCreateSharedBandwidthsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthsIsSet_) {
        val[utility::conversions::to_string_t("bandwidths")] = ModelBase::toJson(bandwidths_);
    }

    return val;
}

bool BatchCreateSharedBandwidthsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchBandwidthResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidths(refVal);
        }
    }
    return ok;
}

std::vector<BatchBandwidthResp>& BatchCreateSharedBandwidthsResponse::getBandwidths()
{
    return bandwidths_;
}

void BatchCreateSharedBandwidthsResponse::setBandwidths(const std::vector<BatchBandwidthResp>& value)
{
    bandwidths_ = value;
    bandwidthsIsSet_ = true;
}

bool BatchCreateSharedBandwidthsResponse::bandwidthsIsSet() const
{
    return bandwidthsIsSet_;
}

void BatchCreateSharedBandwidthsResponse::unsetbandwidths()
{
    bandwidthsIsSet_ = false;
}

}
}
}
}
}


