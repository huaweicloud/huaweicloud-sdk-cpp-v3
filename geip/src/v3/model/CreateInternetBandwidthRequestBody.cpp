

#include "huaweicloud/geip/v3/model/CreateInternetBandwidthRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateInternetBandwidthRequestBody::CreateInternetBandwidthRequestBody()
{
    internetBandwidthIsSet_ = false;
}

CreateInternetBandwidthRequestBody::~CreateInternetBandwidthRequestBody() = default;

void CreateInternetBandwidthRequestBody::validate()
{
}

web::json::value CreateInternetBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }

    return val;
}
bool CreateInternetBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            CreateInternetBandwidthRequestBody_internet_bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
        }
    }
    return ok;
}


CreateInternetBandwidthRequestBody_internet_bandwidth CreateInternetBandwidthRequestBody::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void CreateInternetBandwidthRequestBody::setInternetBandwidth(const CreateInternetBandwidthRequestBody_internet_bandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool CreateInternetBandwidthRequestBody::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void CreateInternetBandwidthRequestBody::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

}
}
}
}
}


