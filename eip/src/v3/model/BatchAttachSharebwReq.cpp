

#include "huaweicloud/eip/v3/model/BatchAttachSharebwReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BatchAttachSharebwReq::BatchAttachSharebwReq()
{
    publicipsIsSet_ = false;
}

BatchAttachSharebwReq::~BatchAttachSharebwReq() = default;

void BatchAttachSharebwReq::validate()
{
}

web::json::value BatchAttachSharebwReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipsIsSet_) {
        val[utility::conversions::to_string_t("publicips")] = ModelBase::toJson(publicips_);
    }

    return val;
}
bool BatchAttachSharebwReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicips"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchAttachSharebwDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicips(refVal);
        }
    }
    return ok;
}


std::vector<BatchAttachSharebwDict>& BatchAttachSharebwReq::getPublicips()
{
    return publicips_;
}

void BatchAttachSharebwReq::setPublicips(const std::vector<BatchAttachSharebwDict>& value)
{
    publicips_ = value;
    publicipsIsSet_ = true;
}

bool BatchAttachSharebwReq::publicipsIsSet() const
{
    return publicipsIsSet_;
}

void BatchAttachSharebwReq::unsetpublicips()
{
    publicipsIsSet_ = false;
}

}
}
}
}
}


