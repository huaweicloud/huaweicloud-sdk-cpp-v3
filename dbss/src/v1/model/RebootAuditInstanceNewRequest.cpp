

#include "huaweicloud/dbss/v1/model/RebootAuditInstanceNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootAuditInstanceNewRequest::RebootAuditInstanceNewRequest()
{
    bodyIsSet_ = false;
}

RebootAuditInstanceNewRequest::~RebootAuditInstanceNewRequest() = default;

void RebootAuditInstanceNewRequest::validate()
{
}

web::json::value RebootAuditInstanceNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RebootAuditInstanceNewRequest::fromJson(const web::json::value& val)
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


ServerIdBean RebootAuditInstanceNewRequest::getBody() const
{
    return body_;
}

void RebootAuditInstanceNewRequest::setBody(const ServerIdBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RebootAuditInstanceNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RebootAuditInstanceNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


