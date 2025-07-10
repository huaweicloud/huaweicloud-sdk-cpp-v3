

#include "huaweicloud/rgc/v1/model/ListExternalConfigRuleCompliancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListExternalConfigRuleCompliancesRequest::ListExternalConfigRuleCompliancesRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
}

ListExternalConfigRuleCompliancesRequest::~ListExternalConfigRuleCompliancesRequest() = default;

void ListExternalConfigRuleCompliancesRequest::validate()
{
}

web::json::value ListExternalConfigRuleCompliancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }

    return val;
}
bool ListExternalConfigRuleCompliancesRequest::fromJson(const web::json::value& val)
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


std::string ListExternalConfigRuleCompliancesRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ListExternalConfigRuleCompliancesRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ListExternalConfigRuleCompliancesRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ListExternalConfigRuleCompliancesRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

}
}
}
}
}


