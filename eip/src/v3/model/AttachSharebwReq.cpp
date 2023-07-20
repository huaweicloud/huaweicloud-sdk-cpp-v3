

#include "huaweicloud/eip/v3/model/AttachSharebwReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AttachSharebwReq::AttachSharebwReq()
{
    publicipIsSet_ = false;
}

AttachSharebwReq::~AttachSharebwReq() = default;

void AttachSharebwReq::validate()
{
}

web::json::value AttachSharebwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool AttachSharebwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            AttachSharebwDict refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}

AttachSharebwDict AttachSharebwReq::getPublicip() const
{
    return publicip_;
}

void AttachSharebwReq::setPublicip(const AttachSharebwDict& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool AttachSharebwReq::publicipIsSet() const
{
    return publicipIsSet_;
}

void AttachSharebwReq::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


