

#include "huaweicloud/cfw/v1/model/BatchDeleteAclRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAclRulesRequest::BatchDeleteAclRulesRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteAclRulesRequest::~BatchDeleteAclRulesRequest() = default;

void BatchDeleteAclRulesRequest::validate()
{
}

web::json::value BatchDeleteAclRulesRequest::toJson() const
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
bool BatchDeleteAclRulesRequest::fromJson(const web::json::value& val)
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
            DeleteRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteAclRulesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchDeleteAclRulesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchDeleteAclRulesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchDeleteAclRulesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchDeleteAclRulesRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchDeleteAclRulesRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchDeleteAclRulesRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchDeleteAclRulesRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

DeleteRuleAclDto BatchDeleteAclRulesRequest::getBody() const
{
    return body_;
}

void BatchDeleteAclRulesRequest::setBody(const DeleteRuleAclDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteAclRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteAclRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


