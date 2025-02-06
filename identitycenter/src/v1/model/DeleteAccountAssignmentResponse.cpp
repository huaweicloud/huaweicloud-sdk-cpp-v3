

#include "huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteAccountAssignmentResponse::DeleteAccountAssignmentResponse()
{
    accountAssignmentDeletionStatusIsSet_ = false;
}

DeleteAccountAssignmentResponse::~DeleteAccountAssignmentResponse() = default;

void DeleteAccountAssignmentResponse::validate()
{
}

web::json::value DeleteAccountAssignmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentDeletionStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignment_deletion_status")] = ModelBase::toJson(accountAssignmentDeletionStatus_);
    }

    return val;
}
bool DeleteAccountAssignmentResponse::fromJson(const web::json::value& val)
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


AccountAssignmentOperationStatusDto DeleteAccountAssignmentResponse::getAccountAssignmentDeletionStatus() const
{
    return accountAssignmentDeletionStatus_;
}

void DeleteAccountAssignmentResponse::setAccountAssignmentDeletionStatus(const AccountAssignmentOperationStatusDto& value)
{
    accountAssignmentDeletionStatus_ = value;
    accountAssignmentDeletionStatusIsSet_ = true;
}

bool DeleteAccountAssignmentResponse::accountAssignmentDeletionStatusIsSet() const
{
    return accountAssignmentDeletionStatusIsSet_;
}

void DeleteAccountAssignmentResponse::unsetaccountAssignmentDeletionStatus()
{
    accountAssignmentDeletionStatusIsSet_ = false;
}

}
}
}
}
}


