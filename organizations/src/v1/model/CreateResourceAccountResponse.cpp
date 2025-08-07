

#include "huaweicloud/organizations/v1/model/CreateResourceAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateResourceAccountResponse::CreateResourceAccountResponse()
{
    createAccountStatusIsSet_ = false;
}

CreateResourceAccountResponse::~CreateResourceAccountResponse() = default;

void CreateResourceAccountResponse::validate()
{
}

web::json::value CreateResourceAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAccountStatusIsSet_) {
        val[utility::conversions::to_string_t("create_account_status")] = ModelBase::toJson(createAccountStatus_);
    }

    return val;
}
bool CreateResourceAccountResponse::fromJson(const web::json::value& val)
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


CreateAccountStatusDto CreateResourceAccountResponse::getCreateAccountStatus() const
{
    return createAccountStatus_;
}

void CreateResourceAccountResponse::setCreateAccountStatus(const CreateAccountStatusDto& value)
{
    createAccountStatus_ = value;
    createAccountStatusIsSet_ = true;
}

bool CreateResourceAccountResponse::createAccountStatusIsSet() const
{
    return createAccountStatusIsSet_;
}

void CreateResourceAccountResponse::unsetcreateAccountStatus()
{
    createAccountStatusIsSet_ = false;
}

}
}
}
}
}


