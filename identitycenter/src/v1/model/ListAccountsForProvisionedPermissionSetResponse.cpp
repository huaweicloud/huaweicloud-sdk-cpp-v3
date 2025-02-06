

#include "huaweicloud/identitycenter/v1/model/ListAccountsForProvisionedPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountsForProvisionedPermissionSetResponse::ListAccountsForProvisionedPermissionSetResponse()
{
    accountIdsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountsForProvisionedPermissionSetResponse::~ListAccountsForProvisionedPermissionSetResponse() = default;

void ListAccountsForProvisionedPermissionSetResponse::validate()
{
}

web::json::value ListAccountsForProvisionedPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdsIsSet_) {
        val[utility::conversions::to_string_t("account_ids")] = ModelBase::toJson(accountIds_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAccountsForProvisionedPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountIds(refVal);
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


std::vector<std::string>& ListAccountsForProvisionedPermissionSetResponse::getAccountIds()
{
    return accountIds_;
}

void ListAccountsForProvisionedPermissionSetResponse::setAccountIds(const std::vector<std::string>& value)
{
    accountIds_ = value;
    accountIdsIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetResponse::accountIdsIsSet() const
{
    return accountIdsIsSet_;
}

void ListAccountsForProvisionedPermissionSetResponse::unsetaccountIds()
{
    accountIdsIsSet_ = false;
}

PageInfoDto ListAccountsForProvisionedPermissionSetResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountsForProvisionedPermissionSetResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountsForProvisionedPermissionSetResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountsForProvisionedPermissionSetResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


