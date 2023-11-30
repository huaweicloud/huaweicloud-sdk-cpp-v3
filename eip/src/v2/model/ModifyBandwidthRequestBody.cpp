

#include "huaweicloud/eip/v2/model/ModifyBandwidthRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ModifyBandwidthRequestBody::ModifyBandwidthRequestBody()
{
    bandwidthsIsSet_ = false;
}

ModifyBandwidthRequestBody::~ModifyBandwidthRequestBody() = default;

void ModifyBandwidthRequestBody::validate()
{
}

web::json::value ModifyBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthsIsSet_) {
        val[utility::conversions::to_string_t("bandwidths")] = ModelBase::toJson(bandwidths_);
    }

    return val;
}
bool ModifyBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidths"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyBandwidthOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidths(refVal);
        }
    }
    return ok;
}


std::vector<ModifyBandwidthOption>& ModifyBandwidthRequestBody::getBandwidths()
{
    return bandwidths_;
}

void ModifyBandwidthRequestBody::setBandwidths(const std::vector<ModifyBandwidthOption>& value)
{
    bandwidths_ = value;
    bandwidthsIsSet_ = true;
}

bool ModifyBandwidthRequestBody::bandwidthsIsSet() const
{
    return bandwidthsIsSet_;
}

void ModifyBandwidthRequestBody::unsetbandwidths()
{
    bandwidthsIsSet_ = false;
}

}
}
}
}
}


