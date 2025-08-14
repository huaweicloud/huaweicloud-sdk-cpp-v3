

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentsForPrincipalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentsForPrincipalResponse::ListAccountAssignmentsForPrincipalResponse()
{
    accountAssignmentsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountAssignmentsForPrincipalResponse::~ListAccountAssignmentsForPrincipalResponse() = default;

void ListAccountAssignmentsForPrincipalResponse::validate()
{
}

web::json::value ListAccountAssignmentsForPrincipalResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentsIsSet_) {
        val[utility::conversions::to_string_t("account_assignments")] = ModelBase::toJson(accountAssignments_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAccountAssignmentsForPrincipalResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_assignments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_assignments"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountAssignmentDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountAssignments(refVal);
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


std::vector<AccountAssignmentDto>& ListAccountAssignmentsForPrincipalResponse::getAccountAssignments()
{
    return accountAssignments_;
}

void ListAccountAssignmentsForPrincipalResponse::setAccountAssignments(const std::vector<AccountAssignmentDto>& value)
{
    accountAssignments_ = value;
    accountAssignmentsIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalResponse::accountAssignmentsIsSet() const
{
    return accountAssignmentsIsSet_;
}

void ListAccountAssignmentsForPrincipalResponse::unsetaccountAssignments()
{
    accountAssignmentsIsSet_ = false;
}

PageInfoDto ListAccountAssignmentsForPrincipalResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountAssignmentsForPrincipalResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountAssignmentsForPrincipalResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


