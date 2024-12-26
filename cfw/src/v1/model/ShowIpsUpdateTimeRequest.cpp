

#include "huaweicloud/cfw/v1/model/ShowIpsUpdateTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowIpsUpdateTimeRequest::ShowIpsUpdateTimeRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowIpsUpdateTimeRequest::~ShowIpsUpdateTimeRequest() = default;

void ShowIpsUpdateTimeRequest::validate()
{
}

web::json::value ShowIpsUpdateTimeRequest::toJson() const
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
bool ShowIpsUpdateTimeRequest::fromJson(const web::json::value& val)
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


std::string ShowIpsUpdateTimeRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowIpsUpdateTimeRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowIpsUpdateTimeRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowIpsUpdateTimeRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowIpsUpdateTimeRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowIpsUpdateTimeRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowIpsUpdateTimeRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowIpsUpdateTimeRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


