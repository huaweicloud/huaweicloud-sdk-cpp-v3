

#include "huaweicloud/eip/v2/model/DeleteSharedBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




DeleteSharedBandwidthRequest::DeleteSharedBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
}

DeleteSharedBandwidthRequest::~DeleteSharedBandwidthRequest() = default;

void DeleteSharedBandwidthRequest::validate()
{
}

web::json::value DeleteSharedBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }

    return val;
}

bool DeleteSharedBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    return ok;
}


std::string DeleteSharedBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void DeleteSharedBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool DeleteSharedBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void DeleteSharedBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

}
}
}
}
}


