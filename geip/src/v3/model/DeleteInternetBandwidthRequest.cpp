

#include "huaweicloud/geip/v3/model/DeleteInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteInternetBandwidthRequest::DeleteInternetBandwidthRequest()
{
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
}

DeleteInternetBandwidthRequest::~DeleteInternetBandwidthRequest() = default;

void DeleteInternetBandwidthRequest::validate()
{
}

web::json::value DeleteInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }

    return val;
}
bool DeleteInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    return ok;
}


std::string DeleteInternetBandwidthRequest::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void DeleteInternetBandwidthRequest::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool DeleteInternetBandwidthRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void DeleteInternetBandwidthRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

}
}
}
}
}


