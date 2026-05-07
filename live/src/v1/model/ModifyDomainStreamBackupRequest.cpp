

#include "huaweicloud/live/v1/model/ModifyDomainStreamBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyDomainStreamBackupRequest::ModifyDomainStreamBackupRequest()
{
    bodyIsSet_ = false;
}

ModifyDomainStreamBackupRequest::~ModifyDomainStreamBackupRequest() = default;

void ModifyDomainStreamBackupRequest::validate()
{
}

web::json::value ModifyDomainStreamBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyDomainStreamBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DomainStreamBackupInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DomainStreamBackupInfo ModifyDomainStreamBackupRequest::getBody() const
{
    return body_;
}

void ModifyDomainStreamBackupRequest::setBody(const DomainStreamBackupInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyDomainStreamBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyDomainStreamBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


