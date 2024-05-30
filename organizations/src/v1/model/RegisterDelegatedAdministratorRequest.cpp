

#include "huaweicloud/organizations/v1/model/RegisterDelegatedAdministratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




RegisterDelegatedAdministratorRequest::RegisterDelegatedAdministratorRequest()
{
    bodyIsSet_ = false;
}

RegisterDelegatedAdministratorRequest::~RegisterDelegatedAdministratorRequest() = default;

void RegisterDelegatedAdministratorRequest::validate()
{
}

web::json::value RegisterDelegatedAdministratorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RegisterDelegatedAdministratorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DelegatedAdministratorReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DelegatedAdministratorReqBody RegisterDelegatedAdministratorRequest::getBody() const
{
    return body_;
}

void RegisterDelegatedAdministratorRequest::setBody(const DelegatedAdministratorReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterDelegatedAdministratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterDelegatedAdministratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


