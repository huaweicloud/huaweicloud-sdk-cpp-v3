

#include "huaweicloud/rgc/v1/model/UnEnrollAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




UnEnrollAccountRequest::UnEnrollAccountRequest()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
}

UnEnrollAccountRequest::~UnEnrollAccountRequest() = default;

void UnEnrollAccountRequest::validate()
{
}

web::json::value UnEnrollAccountRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }

    return val;
}
bool UnEnrollAccountRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccountId(refVal);
        }
    }
    return ok;
}


std::string UnEnrollAccountRequest::getManagedAccountId() const
{
    return managedAccountId_;
}

void UnEnrollAccountRequest::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool UnEnrollAccountRequest::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void UnEnrollAccountRequest::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

}
}
}
}
}


