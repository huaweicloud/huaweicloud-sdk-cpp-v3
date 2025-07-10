

#include "huaweicloud/rgc/v1/model/ShowManagedCoreAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowManagedCoreAccountResponse::ShowManagedCoreAccountResponse()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    coreResourceMappingsIsSet_ = false;
}

ShowManagedCoreAccountResponse::~ShowManagedCoreAccountResponse() = default;

void ShowManagedCoreAccountResponse::validate()
{
}

web::json::value ShowManagedCoreAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(coreResourceMappingsIsSet_) {
        val[utility::conversions::to_string_t("core_resource_mappings")] = ModelBase::toJson(coreResourceMappings_);
    }

    return val;
}
bool ShowManagedCoreAccountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("core_resource_mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("core_resource_mappings"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoreResourceMappings(refVal);
        }
    }
    return ok;
}


std::string ShowManagedCoreAccountResponse::getAccountId() const
{
    return accountId_;
}

void ShowManagedCoreAccountResponse::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ShowManagedCoreAccountResponse::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ShowManagedCoreAccountResponse::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ShowManagedCoreAccountResponse::getAccountName() const
{
    return accountName_;
}

void ShowManagedCoreAccountResponse::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool ShowManagedCoreAccountResponse::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void ShowManagedCoreAccountResponse::unsetaccountName()
{
    accountNameIsSet_ = false;
}

std::map<std::string, std::string>& ShowManagedCoreAccountResponse::getCoreResourceMappings()
{
    return coreResourceMappings_;
}

void ShowManagedCoreAccountResponse::setCoreResourceMappings(const std::map<std::string, std::string>& value)
{
    coreResourceMappings_ = value;
    coreResourceMappingsIsSet_ = true;
}

bool ShowManagedCoreAccountResponse::coreResourceMappingsIsSet() const
{
    return coreResourceMappingsIsSet_;
}

void ShowManagedCoreAccountResponse::unsetcoreResourceMappings()
{
    coreResourceMappingsIsSet_ = false;
}

}
}
}
}
}


