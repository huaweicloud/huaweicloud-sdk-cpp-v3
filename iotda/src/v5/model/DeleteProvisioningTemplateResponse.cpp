

#include "huaweicloud/iotda/v5/model/DeleteProvisioningTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteProvisioningTemplateResponse::DeleteProvisioningTemplateResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteProvisioningTemplateResponse::~DeleteProvisioningTemplateResponse() = default;

void DeleteProvisioningTemplateResponse::validate()
{
}

web::json::value DeleteProvisioningTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteProvisioningTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteProvisioningTemplateResponse::getBody() const
{
    return body_;
}

void DeleteProvisioningTemplateResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteProvisioningTemplateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteProvisioningTemplateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


