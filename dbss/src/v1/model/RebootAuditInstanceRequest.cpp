

#include "huaweicloud/dbss/v1/model/RebootAuditInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootAuditInstanceRequest::RebootAuditInstanceRequest()
{
    bodyIsSet_ = false;
}

RebootAuditInstanceRequest::~RebootAuditInstanceRequest() = default;

void RebootAuditInstanceRequest::validate()
{
}

web::json::value RebootAuditInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RebootAuditInstanceRequest::fromJson(const web::json::value& val)
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


ServerIdBean RebootAuditInstanceRequest::getBody() const
{
    return body_;
}

void RebootAuditInstanceRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RebootAuditInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RebootAuditInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


