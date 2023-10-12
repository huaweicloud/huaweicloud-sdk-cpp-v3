

#include "huaweicloud/eip/v3/model/DetachSharedbwReq_publicip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachSharedbwReq_publicip::DetachSharedbwReq_publicip()
{
    bandwidthIsSet_ = false;
}

DetachSharedbwReq_publicip::~DetachSharedbwReq_publicip() = default;

void DetachSharedbwReq_publicip::validate()
{
}

web::json::value DetachSharedbwReq_publicip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool DetachSharedbwReq_publicip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            DetachSharedbwDict refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


DetachSharedbwDict DetachSharedbwReq_publicip::getBandwidth() const
{
    return bandwidth_;
}

void DetachSharedbwReq_publicip::setBandwidth(const DetachSharedbwDict& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool DetachSharedbwReq_publicip::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void DetachSharedbwReq_publicip::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


