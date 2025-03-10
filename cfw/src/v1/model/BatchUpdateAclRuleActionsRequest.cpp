

#include "huaweicloud/cfw/v1/model/BatchUpdateAclRuleActionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchUpdateAclRuleActionsRequest::BatchUpdateAclRuleActionsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateAclRuleActionsRequest::~BatchUpdateAclRuleActionsRequest() = default;

void BatchUpdateAclRuleActionsRequest::validate()
{
}

web::json::value BatchUpdateAclRuleActionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool BatchUpdateAclRuleActionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            UpdateSecurityPolciesActionDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateAclRuleActionsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchUpdateAclRuleActionsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchUpdateAclRuleActionsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchUpdateAclRuleActionsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchUpdateAclRuleActionsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchUpdateAclRuleActionsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchUpdateAclRuleActionsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchUpdateAclRuleActionsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateSecurityPolciesActionDto BatchUpdateAclRuleActionsRequest::getBody() const
{
    return body_;
}

void BatchUpdateAclRuleActionsRequest::setBody(const UpdateSecurityPolciesActionDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateAclRuleActionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateAclRuleActionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


