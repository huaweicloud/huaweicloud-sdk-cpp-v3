

#include "huaweicloud/cfw/v1/model/ListAclRuleHitCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRuleHitCountRequest::ListAclRuleHitCountRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAclRuleHitCountRequest::~ListAclRuleHitCountRequest() = default;

void ListAclRuleHitCountRequest::validate()
{
}

web::json::value ListAclRuleHitCountRequest::toJson() const
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
bool ListAclRuleHitCountRequest::fromJson(const web::json::value& val)
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
            ListRuleHitCountDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAclRuleHitCountRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAclRuleHitCountRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAclRuleHitCountRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAclRuleHitCountRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAclRuleHitCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAclRuleHitCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAclRuleHitCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAclRuleHitCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ListRuleHitCountDto ListAclRuleHitCountRequest::getBody() const
{
    return body_;
}

void ListAclRuleHitCountRequest::setBody(const ListRuleHitCountDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAclRuleHitCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAclRuleHitCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


