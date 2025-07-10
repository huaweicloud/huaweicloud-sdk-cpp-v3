

#include "huaweicloud/rgc/v1/model/ShowManagedCoreAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedCoreAccountRequest::ShowManagedCoreAccountRequest()
{
    accountType_ = "";
    accountTypeIsSet_ = false;
}

ShowManagedCoreAccountRequest::~ShowManagedCoreAccountRequest() = default;

void ShowManagedCoreAccountRequest::validate()
{
}

web::json::value ShowManagedCoreAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("account_type")] = ModelBase::toJson(accountType_);
    }

    return val;
}
bool ShowManagedCoreAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountType(refVal);
        }
    }
    return ok;
}


std::string ShowManagedCoreAccountRequest::getAccountType() const
{
    return accountType_;
}

void ShowManagedCoreAccountRequest::setAccountType(const std::string& value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool ShowManagedCoreAccountRequest::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void ShowManagedCoreAccountRequest::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

}
}
}
}
}


