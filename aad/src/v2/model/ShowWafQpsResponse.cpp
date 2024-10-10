

#include "huaweicloud/aad/v2/model/ShowWafQpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowWafQpsResponse::ShowWafQpsResponse()
{
    qps_ = 0;
    qpsIsSet_ = false;
}

ShowWafQpsResponse::~ShowWafQpsResponse() = default;

void ShowWafQpsResponse::validate()
{
}

web::json::value ShowWafQpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(qpsIsSet_) {
        val[utility::conversions::to_string_t("qps")] = ModelBase::toJson(qps_);
    }

    return val;
}
bool ShowWafQpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQps(refVal);
        }
    }
    return ok;
}


int32_t ShowWafQpsResponse::getQps() const
{
    return qps_;
}

void ShowWafQpsResponse::setQps(int32_t value)
{
    qps_ = value;
    qpsIsSet_ = true;
}

bool ShowWafQpsResponse::qpsIsSet() const
{
    return qpsIsSet_;
}

void ShowWafQpsResponse::unsetqps()
{
    qpsIsSet_ = false;
}

}
}
}
}
}


