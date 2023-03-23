

#include "huaweicloud/eps/v1/model/UpdateEnterpriseProjectRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




UpdateEnterpriseProjectRequest::UpdateEnterpriseProjectRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateEnterpriseProjectRequest::~UpdateEnterpriseProjectRequest() = default;

void UpdateEnterpriseProjectRequest::validate()
{
}

web::json::value UpdateEnterpriseProjectRequest::toJson() const
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

bool UpdateEnterpriseProjectRequest::fromJson(const web::json::value& val)
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
            EnterpriseProject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateEnterpriseProjectRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateEnterpriseProjectRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateEnterpriseProjectRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateEnterpriseProjectRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

EnterpriseProject UpdateEnterpriseProjectRequest::getBody() const
{
    return body_;
}

void UpdateEnterpriseProjectRequest::setBody(const EnterpriseProject& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateEnterpriseProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateEnterpriseProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


