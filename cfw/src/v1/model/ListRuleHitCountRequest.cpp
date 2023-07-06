

#include "huaweicloud/cfw/v1/model/ListRuleHitCountRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListRuleHitCountRequest::ListRuleHitCountRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListRuleHitCountRequest::~ListRuleHitCountRequest() = default;

void ListRuleHitCountRequest::validate()
{
}

web::json::value ListRuleHitCountRequest::toJson() const
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

bool ListRuleHitCountRequest::fromJson(const web::json::value& val)
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

std::string ListRuleHitCountRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListRuleHitCountRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListRuleHitCountRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListRuleHitCountRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListRuleHitCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListRuleHitCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListRuleHitCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListRuleHitCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ListRuleHitCountDto ListRuleHitCountRequest::getBody() const
{
    return body_;
}

void ListRuleHitCountRequest::setBody(const ListRuleHitCountDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRuleHitCountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRuleHitCountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


