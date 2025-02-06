

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentCreationStatusResponse::ListAccountAssignmentCreationStatusResponse()
{
    accountAssignmentsCreationStatusIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountAssignmentCreationStatusResponse::~ListAccountAssignmentCreationStatusResponse() = default;

void ListAccountAssignmentCreationStatusResponse::validate()
{
}

web::json::value ListAccountAssignmentCreationStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentsCreationStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignments_creation_status")] = ModelBase::toJson(accountAssignmentsCreationStatus_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAccountAssignmentCreationStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_assignments_creation_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_assignments_creation_status"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountAssignmentOperationStatusMetadataDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountAssignmentsCreationStatus(refVal);
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


std::vector<AccountAssignmentOperationStatusMetadataDto>& ListAccountAssignmentCreationStatusResponse::getAccountAssignmentsCreationStatus()
{
    return accountAssignmentsCreationStatus_;
}

void ListAccountAssignmentCreationStatusResponse::setAccountAssignmentsCreationStatus(const std::vector<AccountAssignmentOperationStatusMetadataDto>& value)
{
    accountAssignmentsCreationStatus_ = value;
    accountAssignmentsCreationStatusIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusResponse::accountAssignmentsCreationStatusIsSet() const
{
    return accountAssignmentsCreationStatusIsSet_;
}

void ListAccountAssignmentCreationStatusResponse::unsetaccountAssignmentsCreationStatus()
{
    accountAssignmentsCreationStatusIsSet_ = false;
}

PageInfoDto ListAccountAssignmentCreationStatusResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountAssignmentCreationStatusResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountAssignmentCreationStatusResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


