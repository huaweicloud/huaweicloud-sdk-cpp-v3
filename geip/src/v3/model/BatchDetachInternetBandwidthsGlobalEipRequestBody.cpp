

#include "huaweicloud/geip/v3/model/BatchDetachInternetBandwidthsGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachInternetBandwidthsGlobalEipRequestBody::BatchDetachInternetBandwidthsGlobalEipRequestBody()
{
    globalEipsIsSet_ = false;
}

BatchDetachInternetBandwidthsGlobalEipRequestBody::~BatchDetachInternetBandwidthsGlobalEipRequestBody() = default;

void BatchDetachInternetBandwidthsGlobalEipRequestBody::validate()
{
}

web::json::value BatchDetachInternetBandwidthsGlobalEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipsIsSet_) {
        val[utility::conversions::to_string_t("global_eips")] = ModelBase::toJson(globalEips_);
    }

    return val;
}
bool BatchDetachInternetBandwidthsGlobalEipRequestBody::fromJson(const web::json::value& val)
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


std::vector<Object>& BatchDetachInternetBandwidthsGlobalEipRequestBody::getGlobalEips()
{
    return globalEips_;
}

void BatchDetachInternetBandwidthsGlobalEipRequestBody::setGlobalEips(const std::vector<Object>& value)
{
    globalEips_ = value;
    globalEipsIsSet_ = true;
}

bool BatchDetachInternetBandwidthsGlobalEipRequestBody::globalEipsIsSet() const
{
    return globalEipsIsSet_;
}

void BatchDetachInternetBandwidthsGlobalEipRequestBody::unsetglobalEips()
{
    globalEipsIsSet_ = false;
}

}
}
}
}
}


