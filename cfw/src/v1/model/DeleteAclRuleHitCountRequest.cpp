

#include "huaweicloud/cfw/v1/model/DeleteAclRuleHitCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAclRuleHitCountRequest::DeleteAclRuleHitCountRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAclRuleHitCountRequest::~DeleteAclRuleHitCountRequest() = default;

void DeleteAclRuleHitCountRequest::validate()
{
}

web::json::value DeleteAclRuleHitCountRequest::toJson() const
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
bool DeleteAclRuleHitCountRequest::fromJson(const web::json::value& val)
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


std::string DeleteAclRuleHitCountRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteAclRuleHitCountRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteAclRuleHitCountRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteAclRuleHitCountRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteAclRuleHitCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteAclRuleHitCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteAclRuleHitCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteAclRuleHitCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ClearAccessLogRuleHitCountsDto DeleteAclRuleHitCountRequest::getBody() const
{
    return body_;
}

void DeleteAclRuleHitCountRequest::setBody(const ClearAccessLogRuleHitCountsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAclRuleHitCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAclRuleHitCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


