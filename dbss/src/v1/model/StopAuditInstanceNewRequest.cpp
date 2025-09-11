

#include "huaweicloud/dbss/v1/model/StopAuditInstanceNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopAuditInstanceNewRequest::StopAuditInstanceNewRequest()
{
    bodyIsSet_ = false;
}

StopAuditInstanceNewRequest::~StopAuditInstanceNewRequest() = default;

void StopAuditInstanceNewRequest::validate()
{
}

web::json::value StopAuditInstanceNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StopAuditInstanceNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServerIdBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServerIdBean StopAuditInstanceNewRequest::getBody() const
{
    return body_;
}

void StopAuditInstanceNewRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopAuditInstanceNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopAuditInstanceNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


