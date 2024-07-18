

#include "huaweicloud/evs/v2/model/UnsubscribePostpaidVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UnsubscribePostpaidVolumeResponse::UnsubscribePostpaidVolumeResponse()
{
    bodyIsSet_ = false;
}

UnsubscribePostpaidVolumeResponse::~UnsubscribePostpaidVolumeResponse() = default;

void UnsubscribePostpaidVolumeResponse::validate()
{
}

web::json::value UnsubscribePostpaidVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UnsubscribePostpaidVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UnsubscribeVolumeResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UnsubscribeVolumeResponseBody>& UnsubscribePostpaidVolumeResponse::getBody()
{
    return body_;
}

void UnsubscribePostpaidVolumeResponse::setBody(const std::vector<UnsubscribeVolumeResponseBody>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnsubscribePostpaidVolumeResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnsubscribePostpaidVolumeResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


