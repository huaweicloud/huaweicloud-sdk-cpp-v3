

#include "huaweicloud/dbss/v1/model/StopAuditInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopAuditInstanceRequest::StopAuditInstanceRequest()
{
    bodyIsSet_ = false;
}

StopAuditInstanceRequest::~StopAuditInstanceRequest() = default;

void StopAuditInstanceRequest::validate()
{
}

web::json::value StopAuditInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StopAuditInstanceRequest::fromJson(const web::json::value& val)
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


ServerIdBean StopAuditInstanceRequest::getBody() const
{
    return body_;
}

void StopAuditInstanceRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopAuditInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopAuditInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


