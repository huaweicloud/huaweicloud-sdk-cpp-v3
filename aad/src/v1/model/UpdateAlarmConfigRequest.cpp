

#include "huaweicloud/aad/v1/model/UpdateAlarmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateAlarmConfigRequest::UpdateAlarmConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateAlarmConfigRequest::~UpdateAlarmConfigRequest() = default;

void UpdateAlarmConfigRequest::validate()
{
}

web::json::value UpdateAlarmConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAlarmConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AlarmBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AlarmBody UpdateAlarmConfigRequest::getBody() const
{
    return body_;
}

void UpdateAlarmConfigRequest::setBody(const AlarmBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAlarmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAlarmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


