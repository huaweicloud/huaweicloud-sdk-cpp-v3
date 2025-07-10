

#include "huaweicloud/rgc/v1/model/UpdateManagedAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




UpdateManagedAccountRequest::UpdateManagedAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateManagedAccountRequest::~UpdateManagedAccountRequest() = default;

void UpdateManagedAccountRequest::validate()
{
}

web::json::value UpdateManagedAccountRequest::toJson() const
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
bool UpdateManagedAccountRequest::fromJson(const web::json::value& val)
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
            UpdateManagedAccountRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateManagedAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void UpdateManagedAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool UpdateManagedAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void UpdateManagedAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

UpdateManagedAccountRequestBody UpdateManagedAccountRequest::getBody() const
{
    return body_;
}

void UpdateManagedAccountRequest::setBody(const UpdateManagedAccountRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateManagedAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateManagedAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


