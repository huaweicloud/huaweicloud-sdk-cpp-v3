

#include "huaweicloud/geip/v3/model/BatchAttachInternetBandwidthsGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachInternetBandwidthsGlobalEipRequestBody::BatchAttachInternetBandwidthsGlobalEipRequestBody()
{
    globalEipsIsSet_ = false;
}

BatchAttachInternetBandwidthsGlobalEipRequestBody::~BatchAttachInternetBandwidthsGlobalEipRequestBody() = default;

void BatchAttachInternetBandwidthsGlobalEipRequestBody::validate()
{
}

web::json::value BatchAttachInternetBandwidthsGlobalEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipsIsSet_) {
        val[utility::conversions::to_string_t("global_eips")] = ModelBase::toJson(globalEips_);
    }

    return val;
}
bool BatchAttachInternetBandwidthsGlobalEipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eips"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEips(refVal);
        }
    }
    return ok;
}


std::vector<Object>& BatchAttachInternetBandwidthsGlobalEipRequestBody::getGlobalEips()
{
    return globalEips_;
}

void BatchAttachInternetBandwidthsGlobalEipRequestBody::setGlobalEips(const std::vector<Object>& value)
{
    globalEips_ = value;
    globalEipsIsSet_ = true;
}

bool BatchAttachInternetBandwidthsGlobalEipRequestBody::globalEipsIsSet() const
{
    return globalEipsIsSet_;
}

void BatchAttachInternetBandwidthsGlobalEipRequestBody::unsetglobalEips()
{
    globalEipsIsSet_ = false;
}

}
}
}
}
}


