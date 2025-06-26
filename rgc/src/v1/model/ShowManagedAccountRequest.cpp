

#include "huaweicloud/rgc/v1/model/ShowManagedAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedAccountRequest::ShowManagedAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
}

ShowManagedAccountRequest::~ShowManagedAccountRequest() = default;

void ShowManagedAccountRequest::validate()
{
}

web::json::value ShowManagedAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }

    return val;
}
bool ShowManagedAccountRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowManagedAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ShowManagedAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ShowManagedAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ShowManagedAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

}
}
}
}
}


