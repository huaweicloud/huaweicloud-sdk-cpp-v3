

#include "huaweicloud/eip/v3/model/UpdateTenantVpcIgwRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateTenantVpcIgwRequest::UpdateTenantVpcIgwRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    vpcIgwId_ = "";
    vpcIgwIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTenantVpcIgwRequest::~UpdateTenantVpcIgwRequest() = default;

void UpdateTenantVpcIgwRequest::validate()
{
}

web::json::value UpdateTenantVpcIgwRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(vpcIgwIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw_id")] = ModelBase::toJson(vpcIgwId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTenantVpcIgwRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_igw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTenantVpcIgwRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTenantVpcIgwRequest::getFields() const
{
    return fields_;
}

void UpdateTenantVpcIgwRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool UpdateTenantVpcIgwRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void UpdateTenantVpcIgwRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string UpdateTenantVpcIgwRequest::getVpcIgwId() const
{
    return vpcIgwId_;
}

void UpdateTenantVpcIgwRequest::setVpcIgwId(const std::string& value)
{
    vpcIgwId_ = value;
    vpcIgwIdIsSet_ = true;
}

bool UpdateTenantVpcIgwRequest::vpcIgwIdIsSet() const
{
    return vpcIgwIdIsSet_;
}

void UpdateTenantVpcIgwRequest::unsetvpcIgwId()
{
    vpcIgwIdIsSet_ = false;
}

UpdateTenantVpcIgwRequestBody UpdateTenantVpcIgwRequest::getBody() const
{
    return body_;
}

void UpdateTenantVpcIgwRequest::setBody(const UpdateTenantVpcIgwRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTenantVpcIgwRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTenantVpcIgwRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


