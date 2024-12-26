

#include "huaweicloud/cfw/v1/model/UpdateAlarmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAlarmConfigRequest::UpdateAlarmConfigRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAlarmConfigRequest::~UpdateAlarmConfigRequest() = default;

void UpdateAlarmConfigRequest::validate()
{
}

web::json::value UpdateAlarmConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAlarmConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAttackLogAlarmConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAlarmConfigRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateAlarmConfigRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateAlarmConfigRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateAlarmConfigRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateAlarmConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAlarmConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAlarmConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAlarmConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

UpdateAttackLogAlarmConfigDto UpdateAlarmConfigRequest::getBody() const
{
    return body_;
}

void UpdateAlarmConfigRequest::setBody(const UpdateAttackLogAlarmConfigDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAlarmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAlarmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


