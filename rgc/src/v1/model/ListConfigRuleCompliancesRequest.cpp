

#include "huaweicloud/rgc/v1/model/ListConfigRuleCompliancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListConfigRuleCompliancesRequest::ListConfigRuleCompliancesRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
}

ListConfigRuleCompliancesRequest::~ListConfigRuleCompliancesRequest() = default;

void ListConfigRuleCompliancesRequest::validate()
{
}

web::json::value ListConfigRuleCompliancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }

    return val;
}
bool ListConfigRuleCompliancesRequest::fromJson(const web::json::value& val)
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


std::string ListConfigRuleCompliancesRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void ListConfigRuleCompliancesRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool ListConfigRuleCompliancesRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void ListConfigRuleCompliancesRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

}
}
}
}
}


