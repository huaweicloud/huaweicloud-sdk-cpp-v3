

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentsResponse::ListAccountAssignmentsResponse()
{
    accountAssignmentsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountAssignmentsResponse::~ListAccountAssignmentsResponse() = default;

void ListAccountAssignmentsResponse::validate()
{
}

web::json::value ListAccountAssignmentsResponse::toJson() const
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
bool ListAccountAssignmentsResponse::fromJson(const web::json::value& val)
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


std::vector<AccountAssignmentDto>& ListAccountAssignmentsResponse::getAccountAssignments()
{
    return accountAssignments_;
}

void ListAccountAssignmentsResponse::setAccountAssignments(const std::vector<AccountAssignmentDto>& value)
{
    accountAssignments_ = value;
    accountAssignmentsIsSet_ = true;
}

bool ListAccountAssignmentsResponse::accountAssignmentsIsSet() const
{
    return accountAssignmentsIsSet_;
}

void ListAccountAssignmentsResponse::unsetaccountAssignments()
{
    accountAssignmentsIsSet_ = false;
}

PageInfoDto ListAccountAssignmentsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountAssignmentsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountAssignmentsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountAssignmentsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


