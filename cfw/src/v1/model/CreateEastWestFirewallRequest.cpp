

#include "huaweicloud/cfw/v1/model/CreateEastWestFirewallRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateEastWestFirewallRequest::CreateEastWestFirewallRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateEastWestFirewallRequest::~CreateEastWestFirewallRequest() = default;

void CreateEastWestFirewallRequest::validate()
{
}

web::json::value CreateEastWestFirewallRequest::toJson() const
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
bool CreateEastWestFirewallRequest::fromJson(const web::json::value& val)
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
            CreateEastWestFirewallRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateEastWestFirewallRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateEastWestFirewallRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateEastWestFirewallRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateEastWestFirewallRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateEastWestFirewallRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void CreateEastWestFirewallRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool CreateEastWestFirewallRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void CreateEastWestFirewallRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

CreateEastWestFirewallRequestBody CreateEastWestFirewallRequest::getBody() const
{
    return body_;
}

void CreateEastWestFirewallRequest::setBody(const CreateEastWestFirewallRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEastWestFirewallRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEastWestFirewallRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


