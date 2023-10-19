

#include "huaweicloud/cfw/v1/model/UpdateAclRuleOrderRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAclRuleOrderRequest::UpdateAclRuleOrderRequest()
{
    aclRuleId_ = "";
    aclRuleIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAclRuleOrderRequest::~UpdateAclRuleOrderRequest() = default;

void UpdateAclRuleOrderRequest::validate()
{
}

web::json::value UpdateAclRuleOrderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aclRuleIdIsSet_) {
        val[utility::conversions::to_string_t("acl_rule_id")] = ModelBase::toJson(aclRuleId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAclRuleOrderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("acl_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acl_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAclRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OrderRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAclRuleOrderRequest::getAclRuleId() const
{
    return aclRuleId_;
}

void UpdateAclRuleOrderRequest::setAclRuleId(const std::string& value)
{
    aclRuleId_ = value;
    aclRuleIdIsSet_ = true;
}

bool UpdateAclRuleOrderRequest::aclRuleIdIsSet() const
{
    return aclRuleIdIsSet_;
}

void UpdateAclRuleOrderRequest::unsetaclRuleId()
{
    aclRuleIdIsSet_ = false;
}

std::string UpdateAclRuleOrderRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAclRuleOrderRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAclRuleOrderRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAclRuleOrderRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateAclRuleOrderRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateAclRuleOrderRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateAclRuleOrderRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateAclRuleOrderRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

OrderRuleAclDto UpdateAclRuleOrderRequest::getBody() const
{
    return body_;
}

void UpdateAclRuleOrderRequest::setBody(const OrderRuleAclDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAclRuleOrderRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAclRuleOrderRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


