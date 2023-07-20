

#include "huaweicloud/eip/v3/model/DetachSharedbwReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachSharedbwReq::DetachSharedbwReq()
{
    publicipIsSet_ = false;
}

DetachSharedbwReq::~DetachSharedbwReq() = default;

void DetachSharedbwReq::validate()
{
}

web::json::value DetachSharedbwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool DetachSharedbwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            DetachSharedbwReq_publicip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}

DetachSharedbwReq_publicip DetachSharedbwReq::getPublicip() const
{
    return publicip_;
}

void DetachSharedbwReq::setPublicip(const DetachSharedbwReq_publicip& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool DetachSharedbwReq::publicipIsSet() const
{
    return publicipIsSet_;
}

void DetachSharedbwReq::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


