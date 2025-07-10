

#include "huaweicloud/rgc/v1/model/ShowControlsForAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlsForAccountRequest::ShowControlsForAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ShowControlsForAccountRequest::~ShowControlsForAccountRequest() = default;

void ShowControlsForAccountRequest::validate()
{
}

web::json::value ShowControlsForAccountRequest::toJson() const
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
bool ShowControlsForAccountRequest::fromJson(const web::json::value& val)
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


std::string ShowControlsForAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ShowControlsForAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ShowControlsForAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ShowControlsForAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

std::string ShowControlsForAccountRequest::getControlId() const
{
    return controlId_;
}

void ShowControlsForAccountRequest::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ShowControlsForAccountRequest::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ShowControlsForAccountRequest::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


