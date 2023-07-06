

#include "huaweicloud/cfw/v1/model/ListRuleAclUsingPutRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleAclUsingPutRequest::ListRuleAclUsingPutRequest()
{
    aclRuleId_ = "";
    aclRuleIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListRuleAclUsingPutRequest::~ListRuleAclUsingPutRequest() = default;

void ListRuleAclUsingPutRequest::validate()
{
}

web::json::value ListRuleAclUsingPutRequest::toJson() const
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

bool ListRuleAclUsingPutRequest::fromJson(const web::json::value& val)
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

std::string ListRuleAclUsingPutRequest::getAclRuleId() const
{
    return aclRuleId_;
}

void ListRuleAclUsingPutRequest::setAclRuleId(const std::string& value)
{
    aclRuleId_ = value;
    aclRuleIdIsSet_ = true;
}

bool ListRuleAclUsingPutRequest::aclRuleIdIsSet() const
{
    return aclRuleIdIsSet_;
}

void ListRuleAclUsingPutRequest::unsetaclRuleId()
{
    aclRuleIdIsSet_ = false;
}

std::string ListRuleAclUsingPutRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListRuleAclUsingPutRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListRuleAclUsingPutRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListRuleAclUsingPutRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListRuleAclUsingPutRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListRuleAclUsingPutRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListRuleAclUsingPutRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListRuleAclUsingPutRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

OrderRuleAclDto ListRuleAclUsingPutRequest::getBody() const
{
    return body_;
}

void ListRuleAclUsingPutRequest::setBody(const OrderRuleAclDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRuleAclUsingPutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRuleAclUsingPutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


