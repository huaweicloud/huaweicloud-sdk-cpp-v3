

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentDeletionStatusResponse::ListAccountAssignmentDeletionStatusResponse()
{
    accountAssignmentsDeletionStatusIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAccountAssignmentDeletionStatusResponse::~ListAccountAssignmentDeletionStatusResponse() = default;

void ListAccountAssignmentDeletionStatusResponse::validate()
{
}

web::json::value ListAccountAssignmentDeletionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentsDeletionStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignments_deletion_status")] = ModelBase::toJson(accountAssignmentsDeletionStatus_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAccountAssignmentDeletionStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_assignments_deletion_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_assignments_deletion_status"));
        if(!fieldValue.is_null())
        {
            std::vector<AccountAssignmentOperationStatusMetadataDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountAssignmentsDeletionStatus(refVal);
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


std::vector<AccountAssignmentOperationStatusMetadataDto>& ListAccountAssignmentDeletionStatusResponse::getAccountAssignmentsDeletionStatus()
{
    return accountAssignmentsDeletionStatus_;
}

void ListAccountAssignmentDeletionStatusResponse::setAccountAssignmentsDeletionStatus(const std::vector<AccountAssignmentOperationStatusMetadataDto>& value)
{
    accountAssignmentsDeletionStatus_ = value;
    accountAssignmentsDeletionStatusIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusResponse::accountAssignmentsDeletionStatusIsSet() const
{
    return accountAssignmentsDeletionStatusIsSet_;
}

void ListAccountAssignmentDeletionStatusResponse::unsetaccountAssignmentsDeletionStatus()
{
    accountAssignmentsDeletionStatusIsSet_ = false;
}

PageInfoDto ListAccountAssignmentDeletionStatusResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccountAssignmentDeletionStatusResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccountAssignmentDeletionStatusResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


