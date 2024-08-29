

#include "huaweicloud/eip/v3/model/CreateTenantVpcIgwRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CreateTenantVpcIgwRequest::CreateTenantVpcIgwRequest()
{
    fieldsIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTenantVpcIgwRequest::~CreateTenantVpcIgwRequest() = default;

void CreateTenantVpcIgwRequest::validate()
{
}

web::json::value CreateTenantVpcIgwRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTenantVpcIgwRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTenantVpcIgwRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateTenantVpcIgwRequest::getFields()
{
    return fields_;
}

void CreateTenantVpcIgwRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool CreateTenantVpcIgwRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void CreateTenantVpcIgwRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

CreateTenantVpcIgwRequestBody CreateTenantVpcIgwRequest::getBody() const
{
    return body_;
}

void CreateTenantVpcIgwRequest::setBody(const CreateTenantVpcIgwRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTenantVpcIgwRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTenantVpcIgwRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


