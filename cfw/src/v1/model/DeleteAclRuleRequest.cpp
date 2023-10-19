

#include "huaweicloud/cfw/v1/model/DeleteAclRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAclRuleRequest::DeleteAclRuleRequest()
{
    aclRuleId_ = "";
    aclRuleIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteAclRuleRequest::~DeleteAclRuleRequest() = default;

void DeleteAclRuleRequest::validate()
{
}

web::json::value DeleteAclRuleRequest::toJson() const
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

    return val;
}
bool DeleteAclRuleRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteAclRuleRequest::getAclRuleId() const
{
    return aclRuleId_;
}

void DeleteAclRuleRequest::setAclRuleId(const std::string& value)
{
    aclRuleId_ = value;
    aclRuleIdIsSet_ = true;
}

bool DeleteAclRuleRequest::aclRuleIdIsSet() const
{
    return aclRuleIdIsSet_;
}

void DeleteAclRuleRequest::unsetaclRuleId()
{
    aclRuleIdIsSet_ = false;
}

std::string DeleteAclRuleRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteAclRuleRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteAclRuleRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteAclRuleRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteAclRuleRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteAclRuleRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteAclRuleRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteAclRuleRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


