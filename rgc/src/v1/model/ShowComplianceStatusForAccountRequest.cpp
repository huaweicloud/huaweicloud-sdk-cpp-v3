

#include "huaweicloud/rgc/v1/model/ShowComplianceStatusForAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowComplianceStatusForAccountRequest::ShowComplianceStatusForAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ShowComplianceStatusForAccountRequest::~ShowComplianceStatusForAccountRequest() = default;

void ShowComplianceStatusForAccountRequest::validate()
{
}

web::json::value ShowComplianceStatusForAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }
    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }

    return val;
}
bool ShowComplianceStatusForAccountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("control_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlId(refVal);
        }
    }
    return ok;
}


std::string ShowComplianceStatusForAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ShowComplianceStatusForAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ShowComplianceStatusForAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ShowComplianceStatusForAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

std::string ShowComplianceStatusForAccountRequest::getControlId() const
{
    return controlId_;
}

void ShowComplianceStatusForAccountRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ShowComplianceStatusForAccountRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ShowComplianceStatusForAccountRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


