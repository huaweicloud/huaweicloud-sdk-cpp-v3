

#include "huaweicloud/cpcs/v1/model/DisassociateAppsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DisassociateAppsRequest::DisassociateAppsRequest()
{
    bodyIsSet_ = false;
}

DisassociateAppsRequest::~DisassociateAppsRequest() = default;

void DisassociateAppsRequest::validate()
{
}

web::json::value DisassociateAppsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisassociateAppsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DisAssociateAppsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DisAssociateAppsRequestBody DisassociateAppsRequest::getBody() const
{
    return body_;
}

void DisassociateAppsRequest::setBody(const DisAssociateAppsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisassociateAppsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisassociateAppsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


