

#include "huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentCreationStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeAccountAssignmentCreationStatusResponse::DescribeAccountAssignmentCreationStatusResponse()
{
    accountAssignmentCreationStatusIsSet_ = false;
}

DescribeAccountAssignmentCreationStatusResponse::~DescribeAccountAssignmentCreationStatusResponse() = default;

void DescribeAccountAssignmentCreationStatusResponse::validate()
{
}

web::json::value DescribeAccountAssignmentCreationStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentCreationStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignment_creation_status")] = ModelBase::toJson(accountAssignmentCreationStatus_);
    }

    return val;
}
bool DescribeAccountAssignmentCreationStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_assignment_creation_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_assignment_creation_status"));
        if(!fieldValue.is_null())
        {
            AccountAssignmentOperationStatusDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountAssignmentCreationStatus(refVal);
        }
    }
    return ok;
}


AccountAssignmentOperationStatusDto DescribeAccountAssignmentCreationStatusResponse::getAccountAssignmentCreationStatus() const
{
    return accountAssignmentCreationStatus_;
}

void DescribeAccountAssignmentCreationStatusResponse::setAccountAssignmentCreationStatus(const AccountAssignmentOperationStatusDto& value)
{
    accountAssignmentCreationStatus_ = value;
    accountAssignmentCreationStatusIsSet_ = true;
}

bool DescribeAccountAssignmentCreationStatusResponse::accountAssignmentCreationStatusIsSet() const
{
    return accountAssignmentCreationStatusIsSet_;
}

void DescribeAccountAssignmentCreationStatusResponse::unsetaccountAssignmentCreationStatus()
{
    accountAssignmentCreationStatusIsSet_ = false;
}

}
}
}
}
}


