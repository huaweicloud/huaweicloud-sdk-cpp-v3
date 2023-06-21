

#include "huaweicloud/cfw/v1/model/DeleteAclRuleCountRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAclRuleCountRequest::DeleteAclRuleCountRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAclRuleCountRequest::~DeleteAclRuleCountRequest() = default;

void DeleteAclRuleCountRequest::validate()
{
}

web::json::value DeleteAclRuleCountRequest::toJson() const
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

bool DeleteAclRuleCountRequest::fromJson(const web::json::value& val)
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
            ClearAccessLogRuleHitCountsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteAclRuleCountRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteAclRuleCountRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteAclRuleCountRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteAclRuleCountRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteAclRuleCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteAclRuleCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteAclRuleCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteAclRuleCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ClearAccessLogRuleHitCountsDto DeleteAclRuleCountRequest::getBody() const
{
    return body_;
}

void DeleteAclRuleCountRequest::setBody(const ClearAccessLogRuleHitCountsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAclRuleCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAclRuleCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


