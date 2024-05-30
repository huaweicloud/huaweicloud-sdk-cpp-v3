

#include "huaweicloud/organizations/v1/model/ListAccountsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListAccountsResponse::ListAccountsResponse()
{
    accountsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountsResponse::~ListAccountsResponse() = default;

void ListAccountsResponse::validate()
{
}

web::json::value ListAccountsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountsIsSet_) {
        val[utility::conversions::to_string_t("accounts")] = ModelBase::toJson(accounts_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAccountsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accounts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accounts"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccounts(refVal);
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


std::vector<AccountDto>& ListAccountsResponse::getAccounts()
{
    return accounts_;
}

void ListAccountsResponse::setAccounts(const std::vector<AccountDto>& value)
{
    accounts_ = value;
    accountsIsSet_ = true;
}

bool ListAccountsResponse::accountsIsSet() const
{
    return accountsIsSet_;
}

void ListAccountsResponse::unsetaccounts()
{
    accountsIsSet_ = false;
}

PageInfoDto ListAccountsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


