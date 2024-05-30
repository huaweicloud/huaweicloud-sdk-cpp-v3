

#include "huaweicloud/organizations/v1/model/CreateAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateAccountResponse::CreateAccountResponse()
{
    createAccountStatusIsSet_ = false;
}

CreateAccountResponse::~CreateAccountResponse() = default;

void CreateAccountResponse::validate()
{
}

web::json::value CreateAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAccountStatusIsSet_) {
        val[utility::conversions::to_string_t("create_account_status")] = ModelBase::toJson(createAccountStatus_);
    }

    return val;
}
bool CreateAccountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_account_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_account_status"));
        if(!fieldValue.is_null())
        {
            CreateAccountStatusDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAccountStatus(refVal);
        }
    }
    return ok;
}


CreateAccountStatusDto CreateAccountResponse::getCreateAccountStatus() const
{
    return createAccountStatus_;
}

void CreateAccountResponse::setCreateAccountStatus(const CreateAccountStatusDto& value)
{
    createAccountStatus_ = value;
    createAccountStatusIsSet_ = true;
}

bool CreateAccountResponse::createAccountStatusIsSet() const
{
    return createAccountStatusIsSet_;
}

void CreateAccountResponse::unsetcreateAccountStatus()
{
    createAccountStatusIsSet_ = false;
}

}
}
}
}
}


