

#include "huaweicloud/metastudio/v1/model/TransJobRejectBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransJobRejectBody::TransJobRejectBody()
{
    reason_ = "";
    reasonIsSet_ = false;
}

TransJobRejectBody::~TransJobRejectBody() = default;

void TransJobRejectBody::validate()
{
}

web::json::value TransJobRejectBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool TransJobRejectBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string TransJobRejectBody::getReason() const
{
    return reason_;
}

void TransJobRejectBody::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool TransJobRejectBody::reasonIsSet() const
{
    return reasonIsSet_;
}

void TransJobRejectBody::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


