

#include "huaweicloud/eps/v1/model/DisableEnterpriseProjectRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




DisableEnterpriseProjectRequest::DisableEnterpriseProjectRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisableEnterpriseProjectRequest::~DisableEnterpriseProjectRequest() = default;

void DisableEnterpriseProjectRequest::validate()
{
}

web::json::value DisableEnterpriseProjectRequest::toJson() const
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

bool DisableEnterpriseProjectRequest::fromJson(const web::json::value& val)
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
            DisableAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DisableEnterpriseProjectRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DisableEnterpriseProjectRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DisableEnterpriseProjectRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DisableEnterpriseProjectRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DisableAction DisableEnterpriseProjectRequest::getBody() const
{
    return body_;
}

void DisableEnterpriseProjectRequest::setBody(const DisableAction& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableEnterpriseProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableEnterpriseProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


