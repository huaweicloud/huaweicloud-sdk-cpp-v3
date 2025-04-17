

#include "huaweicloud/antiddos/v1/model/UpdateLogConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateLogConfigRequest::UpdateLogConfigRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogConfigRequest::~UpdateLogConfigRequest() = default;

void UpdateLogConfigRequest::validate()
{
}

web::json::value UpdateLogConfigRequest::toJson() const
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
bool UpdateLogConfigRequest::fromJson(const web::json::value& val)
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
            LtsConfigRequestAndResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLogConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateLogConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateLogConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateLogConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LtsConfigRequestAndResponse UpdateLogConfigRequest::getBody() const
{
    return body_;
}

void UpdateLogConfigRequest::setBody(const LtsConfigRequestAndResponse& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


