

#include "huaweicloud/rgc/v1/model/ListManagedAccountsForParentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListManagedAccountsForParentResponse::ListManagedAccountsForParentResponse()
{
    managedAccountsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListManagedAccountsForParentResponse::~ListManagedAccountsForParentResponse() = default;

void ListManagedAccountsForParentResponse::validate()
{
}

web::json::value ListManagedAccountsForParentResponse::toJson() const
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
bool ListManagedAccountsForParentResponse::fromJson(const web::json::value& val)
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


std::vector<ManagedAccount>& ListManagedAccountsForParentResponse::getManagedAccounts()
{
    return managedAccounts_;
}

void ListManagedAccountsForParentResponse::setManagedAccounts(const std::vector<ManagedAccount>& value)
{
    managedAccounts_ = value;
    managedAccountsIsSet_ = true;
}

bool ListManagedAccountsForParentResponse::managedAccountsIsSet() const
{
    return managedAccountsIsSet_;
}

void ListManagedAccountsForParentResponse::unsetmanagedAccounts()
{
    managedAccountsIsSet_ = false;
}

PageInfoDto ListManagedAccountsForParentResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListManagedAccountsForParentResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListManagedAccountsForParentResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListManagedAccountsForParentResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


