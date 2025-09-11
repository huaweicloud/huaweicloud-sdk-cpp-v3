

#include "huaweicloud/dbss/v1/model/StartAuditInstanceNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartAuditInstanceNewRequest::StartAuditInstanceNewRequest()
{
    bodyIsSet_ = false;
}

StartAuditInstanceNewRequest::~StartAuditInstanceNewRequest() = default;

void StartAuditInstanceNewRequest::validate()
{
}

web::json::value StartAuditInstanceNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartAuditInstanceNewRequest::fromJson(const web::json::value& val)
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


ServerIdBean StartAuditInstanceNewRequest::getBody() const
{
    return body_;
}

void StartAuditInstanceNewRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartAuditInstanceNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartAuditInstanceNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


