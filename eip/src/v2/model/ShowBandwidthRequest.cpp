

#include "huaweicloud/eip/v2/model/ShowBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowBandwidthRequest::ShowBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
}

ShowBandwidthRequest::~ShowBandwidthRequest() = default;

void ShowBandwidthRequest::validate()
{
}

web::json::value ShowBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }

    return val;
}

bool ShowBandwidthRequest::fromJson(const web::json::value& val)
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

std::string ShowBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void ShowBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool ShowBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void ShowBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

}
}
}
}
}


