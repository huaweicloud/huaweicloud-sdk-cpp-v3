

#include "huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentDeletionStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeAccountAssignmentDeletionStatusResponse::DescribeAccountAssignmentDeletionStatusResponse()
{
    accountAssignmentDeletionStatusIsSet_ = false;
}

DescribeAccountAssignmentDeletionStatusResponse::~DescribeAccountAssignmentDeletionStatusResponse() = default;

void DescribeAccountAssignmentDeletionStatusResponse::validate()
{
}

web::json::value DescribeAccountAssignmentDeletionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentDeletionStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignment_deletion_status")] = ModelBase::toJson(accountAssignmentDeletionStatus_);
    }

    return val;
}
bool DescribeAccountAssignmentDeletionStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_assignment_deletion_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_assignment_deletion_status"));
        if(!fieldValue.is_null())
        {
            AccountAssignmentOperationStatusDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountAssignmentDeletionStatus(refVal);
        }
    }
    return ok;
}


AccountAssignmentOperationStatusDto DescribeAccountAssignmentDeletionStatusResponse::getAccountAssignmentDeletionStatus() const
{
    return accountAssignmentDeletionStatus_;
}

void DescribeAccountAssignmentDeletionStatusResponse::setAccountAssignmentDeletionStatus(const AccountAssignmentOperationStatusDto& value)
{
    accountAssignmentDeletionStatus_ = value;
    accountAssignmentDeletionStatusIsSet_ = true;
}

bool DescribeAccountAssignmentDeletionStatusResponse::accountAssignmentDeletionStatusIsSet() const
{
    return accountAssignmentDeletionStatusIsSet_;
}

void DescribeAccountAssignmentDeletionStatusResponse::unsetaccountAssignmentDeletionStatus()
{
    accountAssignmentDeletionStatusIsSet_ = false;
}

}
}
}
}
}


