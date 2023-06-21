

#include "huaweicloud/cfw/v1/model/DeleteRuleAclUsingDeleteRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteRuleAclUsingDeleteRequest::DeleteRuleAclUsingDeleteRequest()
{
    aclRuleId_ = "";
    aclRuleIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteRuleAclUsingDeleteRequest::~DeleteRuleAclUsingDeleteRequest() = default;

void DeleteRuleAclUsingDeleteRequest::validate()
{
}

web::json::value DeleteRuleAclUsingDeleteRequest::toJson() const
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

bool DeleteRuleAclUsingDeleteRequest::fromJson(const web::json::value& val)
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


std::string DeleteRuleAclUsingDeleteRequest::getAclRuleId() const
{
    return aclRuleId_;
}

void DeleteRuleAclUsingDeleteRequest::setAclRuleId(const std::string& value)
{
    aclRuleId_ = value;
    aclRuleIdIsSet_ = true;
}

bool DeleteRuleAclUsingDeleteRequest::aclRuleIdIsSet() const
{
    return aclRuleIdIsSet_;
}

void DeleteRuleAclUsingDeleteRequest::unsetaclRuleId()
{
    aclRuleIdIsSet_ = false;
}

std::string DeleteRuleAclUsingDeleteRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteRuleAclUsingDeleteRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteRuleAclUsingDeleteRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteRuleAclUsingDeleteRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteRuleAclUsingDeleteRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteRuleAclUsingDeleteRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteRuleAclUsingDeleteRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteRuleAclUsingDeleteRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


