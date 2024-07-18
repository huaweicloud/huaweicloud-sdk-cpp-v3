

#include "huaweicloud/evs/v2/model/UnsubscribePostpaidVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UnsubscribePostpaidVolumeRequest::UnsubscribePostpaidVolumeRequest()
{
    bodyIsSet_ = false;
}

UnsubscribePostpaidVolumeRequest::~UnsubscribePostpaidVolumeRequest() = default;

void UnsubscribePostpaidVolumeRequest::validate()
{
}

web::json::value UnsubscribePostpaidVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UnsubscribePostpaidVolumeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UnsubscribeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UnsubscribeVolumeRequestBody UnsubscribePostpaidVolumeRequest::getBody() const
{
    return body_;
}

void UnsubscribePostpaidVolumeRequest::setBody(const UnsubscribeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnsubscribePostpaidVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnsubscribePostpaidVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


