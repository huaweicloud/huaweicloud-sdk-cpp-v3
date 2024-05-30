

#include "huaweicloud/organizations/v1/model/CreateOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest()
{
    bodyIsSet_ = false;
}

CreateOrganizationalUnitRequest::~CreateOrganizationalUnitRequest() = default;

void CreateOrganizationalUnitRequest::validate()
{
}

web::json::value CreateOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateOrganizationalUnitRequest::fromJson(const web::json::value& val)
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


CreateOrganizationalUnitReqBody CreateOrganizationalUnitRequest::getBody() const
{
    return body_;
}

void CreateOrganizationalUnitRequest::setBody(const CreateOrganizationalUnitReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrganizationalUnitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrganizationalUnitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


