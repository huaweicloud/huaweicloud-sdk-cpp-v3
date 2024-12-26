

#include "huaweicloud/cfw/v1/model/SwitchAutoProtectStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchAutoProtectStatusRequest::SwitchAutoProtectStatusRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAutoProtectStatusRequest::~SwitchAutoProtectStatusRequest() = default;

void SwitchAutoProtectStatusRequest::validate()
{
}

web::json::value SwitchAutoProtectStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchAutoProtectStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchEipStatusDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchAutoProtectStatusRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SwitchAutoProtectStatusRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SwitchAutoProtectStatusRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SwitchAutoProtectStatusRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

SwitchEipStatusDto SwitchAutoProtectStatusRequest::getBody() const
{
    return body_;
}

void SwitchAutoProtectStatusRequest::setBody(const SwitchEipStatusDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAutoProtectStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAutoProtectStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


