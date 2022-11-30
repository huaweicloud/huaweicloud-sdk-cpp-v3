

#include "huaweicloud/eip/v2/model/ListBandwidthsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListBandwidthsResponse::ListBandwidthsResponse()
{
    bandwidthsIsSet_ = false;
}

ListBandwidthsResponse::~ListBandwidthsResponse() = default;

void ListBandwidthsResponse::validate()
{
}

web::json::value ListBandwidthsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthsIsSet_) {
        val[utility::conversions::to_string_t("bandwidths")] = ModelBase::toJson(bandwidths_);
    }

    return val;
}

bool ListBandwidthsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<BandwidthResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidths(refVal);
        }
    }
    return ok;
}


std::vector<BandwidthResp>& ListBandwidthsResponse::getBandwidths()
{
    return bandwidths_;
}

void ListBandwidthsResponse::setBandwidths(const std::vector<BandwidthResp>& value)
{
    bandwidths_ = value;
    bandwidthsIsSet_ = true;
}

bool ListBandwidthsResponse::bandwidthsIsSet() const
{
    return bandwidthsIsSet_;
}

void ListBandwidthsResponse::unsetbandwidths()
{
    bandwidthsIsSet_ = false;
}

}
}
}
}
}


