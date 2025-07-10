

#include "huaweicloud/rgc/v1/model/EnrollAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnrollAccountRequest::EnrollAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    bodyIsSet_ = false;
}

EnrollAccountRequest::~EnrollAccountRequest() = default;

void EnrollAccountRequest::validate()
{
}

web::json::value EnrollAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool EnrollAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EnrollAccountRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string EnrollAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void EnrollAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool EnrollAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void EnrollAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

EnrollAccountRequestBody EnrollAccountRequest::getBody() const
{
    return body_;
}

void EnrollAccountRequest::setBody(const EnrollAccountRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnrollAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnrollAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


