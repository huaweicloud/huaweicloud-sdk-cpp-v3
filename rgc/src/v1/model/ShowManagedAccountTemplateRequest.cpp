

#include "huaweicloud/rgc/v1/model/ShowManagedAccountTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedAccountTemplateRequest::ShowManagedAccountTemplateRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
}

ShowManagedAccountTemplateRequest::~ShowManagedAccountTemplateRequest() = default;

void ShowManagedAccountTemplateRequest::validate()
{
}

web::json::value ShowManagedAccountTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }

    return val;
}
bool ShowManagedAccountTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowManagedAccountTemplateRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ShowManagedAccountTemplateRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ShowManagedAccountTemplateRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ShowManagedAccountTemplateRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

}
}
}
}
}


