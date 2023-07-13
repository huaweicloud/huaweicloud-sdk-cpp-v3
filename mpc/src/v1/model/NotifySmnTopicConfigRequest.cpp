

#include "huaweicloud/mpc/v1/model/NotifySmnTopicConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




NotifySmnTopicConfigRequest::NotifySmnTopicConfigRequest()
{
    bodyIsSet_ = false;
}

NotifySmnTopicConfigRequest::~NotifySmnTopicConfigRequest() = default;

void NotifySmnTopicConfigRequest::validate()
{
}

web::json::value NotifySmnTopicConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NotifySmnTopicConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NotificationConfigReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

NotificationConfigReq NotifySmnTopicConfigRequest::getBody() const
{
    return body_;
}

void NotifySmnTopicConfigRequest::setBody(const NotificationConfigReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NotifySmnTopicConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NotifySmnTopicConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


