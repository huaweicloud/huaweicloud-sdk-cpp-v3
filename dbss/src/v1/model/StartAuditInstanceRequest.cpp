

#include "huaweicloud/dbss/v1/model/StartAuditInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartAuditInstanceRequest::StartAuditInstanceRequest()
{
    bodyIsSet_ = false;
}

StartAuditInstanceRequest::~StartAuditInstanceRequest() = default;

void StartAuditInstanceRequest::validate()
{
}

web::json::value StartAuditInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartAuditInstanceRequest::fromJson(const web::json::value& val)
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


ServerIdBean StartAuditInstanceRequest::getBody() const
{
    return body_;
}

void StartAuditInstanceRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartAuditInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartAuditInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


