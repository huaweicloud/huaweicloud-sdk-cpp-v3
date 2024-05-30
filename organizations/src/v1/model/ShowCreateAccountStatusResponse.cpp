

#include "huaweicloud/organizations/v1/model/ShowCreateAccountStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowCreateAccountStatusResponse::ShowCreateAccountStatusResponse()
{
    createAccountStatusIsSet_ = false;
}

ShowCreateAccountStatusResponse::~ShowCreateAccountStatusResponse() = default;

void ShowCreateAccountStatusResponse::validate()
{
}

web::json::value ShowCreateAccountStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAccountStatusIsSet_) {
        val[utility::conversions::to_string_t("create_account_status")] = ModelBase::toJson(createAccountStatus_);
    }

    return val;
}
bool ShowCreateAccountStatusResponse::fromJson(const web::json::value& val)
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


CreateAccountStatusDto ShowCreateAccountStatusResponse::getCreateAccountStatus() const
{
    return createAccountStatus_;
}

void ShowCreateAccountStatusResponse::setCreateAccountStatus(const CreateAccountStatusDto& value)
{
    createAccountStatus_ = value;
    createAccountStatusIsSet_ = true;
}

bool ShowCreateAccountStatusResponse::createAccountStatusIsSet() const
{
    return createAccountStatusIsSet_;
}

void ShowCreateAccountStatusResponse::unsetcreateAccountStatus()
{
    createAccountStatusIsSet_ = false;
}

}
}
}
}
}


