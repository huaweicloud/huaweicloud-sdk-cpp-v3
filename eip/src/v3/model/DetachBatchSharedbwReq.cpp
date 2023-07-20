

#include "huaweicloud/eip/v3/model/DetachBatchSharedbwReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachBatchSharedbwReq::DetachBatchSharedbwReq()
{
    publicipsIsSet_ = false;
}

DetachBatchSharedbwReq::~DetachBatchSharedbwReq() = default;

void DetachBatchSharedbwReq::validate()
{
}

web::json::value DetachBatchSharedbwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipsIsSet_) {
        val[utility::conversions::to_string_t("publicips")] = ModelBase::toJson(publicips_);
    }

    return val;
}

bool DetachBatchSharedbwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicips"));
        if(!fieldValue.is_null())
        {
            std::vector<DetachBatchSharedbwReq_publicips> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicips(refVal);
        }
    }
    return ok;
}

std::vector<DetachBatchSharedbwReq_publicips>& DetachBatchSharedbwReq::getPublicips()
{
    return publicips_;
}

void DetachBatchSharedbwReq::setPublicips(const std::vector<DetachBatchSharedbwReq_publicips>& value)
{
    publicips_ = value;
    publicipsIsSet_ = true;
}

bool DetachBatchSharedbwReq::publicipsIsSet() const
{
    return publicipsIsSet_;
}

void DetachBatchSharedbwReq::unsetpublicips()
{
    publicipsIsSet_ = false;
}

}
}
}
}
}


