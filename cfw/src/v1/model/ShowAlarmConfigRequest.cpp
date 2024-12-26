

#include "huaweicloud/cfw/v1/model/ShowAlarmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAlarmConfigRequest::ShowAlarmConfigRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowAlarmConfigRequest::~ShowAlarmConfigRequest() = default;

void ShowAlarmConfigRequest::validate()
{
}

web::json::value ShowAlarmConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowAlarmConfigRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAlarmConfigRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowAlarmConfigRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowAlarmConfigRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowAlarmConfigRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowAlarmConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowAlarmConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowAlarmConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowAlarmConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


