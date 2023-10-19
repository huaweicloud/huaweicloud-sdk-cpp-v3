

#include "huaweicloud/cfw/v1/model/AddAclRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAclRuleRequest::AddAclRuleRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAclRuleRequest::~AddAclRuleRequest() = default;

void AddAclRuleRequest::validate()
{
}

web::json::value AddAclRuleRequest::toJson() const
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
bool AddAclRuleRequest::fromJson(const web::json::value& val)
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
            AddRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAclRuleRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddAclRuleRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddAclRuleRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddAclRuleRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddAclRuleRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddAclRuleRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddAclRuleRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddAclRuleRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddRuleAclDto AddAclRuleRequest::getBody() const
{
    return body_;
}

void AddAclRuleRequest::setBody(const AddRuleAclDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAclRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAclRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


