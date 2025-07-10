

#include "huaweicloud/rgc/v1/model/ListManagedAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListManagedAccountsResponse::ListManagedAccountsResponse()
{
    managedAccountsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListManagedAccountsResponse::~ListManagedAccountsResponse() = default;

void ListManagedAccountsResponse::validate()
{
}

web::json::value ListManagedAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountsIsSet_) {
        val[utility::conversions::to_string_t("managed_accounts")] = ModelBase::toJson(managedAccounts_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListManagedAccountsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_accounts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_accounts"));
        if(!fieldValue.is_null())
        {
            std::vector<ManagedAccount> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ManagedAccount>& ListManagedAccountsResponse::getManagedAccounts()
{
    return managedAccounts_;
}

void ListManagedAccountsResponse::setManagedAccounts(const std::vector<ManagedAccount>& value)
{
    managedAccounts_ = value;
    managedAccountsIsSet_ = true;
}

bool ListManagedAccountsResponse::managedAccountsIsSet() const
{
    return managedAccountsIsSet_;
}

void ListManagedAccountsResponse::unsetmanagedAccounts()
{
    managedAccountsIsSet_ = false;
}

PageInfoDto ListManagedAccountsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListManagedAccountsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListManagedAccountsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListManagedAccountsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


