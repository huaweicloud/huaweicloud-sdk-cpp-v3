

#include "huaweicloud/identitycenter/v1/model/CreateAccountAssignmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateAccountAssignmentResponse::CreateAccountAssignmentResponse()
{
    accountAssignmentCreationStatusIsSet_ = false;
}

CreateAccountAssignmentResponse::~CreateAccountAssignmentResponse() = default;

void CreateAccountAssignmentResponse::validate()
{
}

web::json::value CreateAccountAssignmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountAssignmentCreationStatusIsSet_) {
        val[utility::conversions::to_string_t("account_assignment_creation_status")] = ModelBase::toJson(accountAssignmentCreationStatus_);
    }

    return val;
}
bool CreateAccountAssignmentResponse::fromJson(const web::json::value& val)
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


AccountAssignmentOperationStatusDto CreateAccountAssignmentResponse::getAccountAssignmentCreationStatus() const
{
    return accountAssignmentCreationStatus_;
}

void CreateAccountAssignmentResponse::setAccountAssignmentCreationStatus(const AccountAssignmentOperationStatusDto& value)
{
    accountAssignmentCreationStatus_ = value;
    accountAssignmentCreationStatusIsSet_ = true;
}

bool CreateAccountAssignmentResponse::accountAssignmentCreationStatusIsSet() const
{
    return accountAssignmentCreationStatusIsSet_;
}

void CreateAccountAssignmentResponse::unsetaccountAssignmentCreationStatus()
{
    accountAssignmentCreationStatusIsSet_ = false;
}

}
}
}
}
}


