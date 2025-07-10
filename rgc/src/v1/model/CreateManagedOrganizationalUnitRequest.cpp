

#include "huaweicloud/rgc/v1/model/CreateManagedOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateManagedOrganizationalUnitRequest::CreateManagedOrganizationalUnitRequest()
{
    bodyIsSet_ = false;
}

CreateManagedOrganizationalUnitRequest::~CreateManagedOrganizationalUnitRequest() = default;

void CreateManagedOrganizationalUnitRequest::validate()
{
}

web::json::value CreateManagedOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateManagedOrganizationalUnitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateOrganizationalUnitReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateOrganizationalUnitReqBody CreateManagedOrganizationalUnitRequest::getBody() const
{
    return body_;
}

void CreateManagedOrganizationalUnitRequest::setBody(const CreateOrganizationalUnitReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateManagedOrganizationalUnitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateManagedOrganizationalUnitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


