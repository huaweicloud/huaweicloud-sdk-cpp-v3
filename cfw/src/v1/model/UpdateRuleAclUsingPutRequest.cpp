

#include "huaweicloud/cfw/v1/model/UpdateRuleAclUsingPutRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateRuleAclUsingPutRequest::UpdateRuleAclUsingPutRequest()
{
    aclRuleId_ = "";
    aclRuleIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRuleAclUsingPutRequest::~UpdateRuleAclUsingPutRequest() = default;

void UpdateRuleAclUsingPutRequest::validate()
{
}

web::json::value UpdateRuleAclUsingPutRequest::toJson() const
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

bool UpdateRuleAclUsingPutRequest::fromJson(const web::json::value& val)
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
            UpdateRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleAclUsingPutRequest::getAclRuleId() const
{
    return aclRuleId_;
}

void UpdateRuleAclUsingPutRequest::setAclRuleId(const std::string& value)
{
    aclRuleId_ = value;
    aclRuleIdIsSet_ = true;
}

bool UpdateRuleAclUsingPutRequest::aclRuleIdIsSet() const
{
    return aclRuleIdIsSet_;
}

void UpdateRuleAclUsingPutRequest::unsetaclRuleId()
{
    aclRuleIdIsSet_ = false;
}

std::string UpdateRuleAclUsingPutRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateRuleAclUsingPutRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateRuleAclUsingPutRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateRuleAclUsingPutRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateRuleAclUsingPutRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateRuleAclUsingPutRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateRuleAclUsingPutRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateRuleAclUsingPutRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateRuleAclDto UpdateRuleAclUsingPutRequest::getBody() const
{
    return body_;
}

void UpdateRuleAclUsingPutRequest::setBody(const UpdateRuleAclDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRuleAclUsingPutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRuleAclUsingPutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


