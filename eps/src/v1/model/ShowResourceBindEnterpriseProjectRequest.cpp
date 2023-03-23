

#include "huaweicloud/eps/v1/model/ShowResourceBindEnterpriseProjectRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowResourceBindEnterpriseProjectRequest::ShowResourceBindEnterpriseProjectRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowResourceBindEnterpriseProjectRequest::~ShowResourceBindEnterpriseProjectRequest() = default;

void ShowResourceBindEnterpriseProjectRequest::validate()
{
}

web::json::value ShowResourceBindEnterpriseProjectRequest::toJson() const
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

bool ShowResourceBindEnterpriseProjectRequest::fromJson(const web::json::value& val)
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
            ResqEpResouce refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowResourceBindEnterpriseProjectRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowResourceBindEnterpriseProjectRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowResourceBindEnterpriseProjectRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowResourceBindEnterpriseProjectRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ResqEpResouce ShowResourceBindEnterpriseProjectRequest::getBody() const
{
    return body_;
}

void ShowResourceBindEnterpriseProjectRequest::setBody(const ResqEpResouce& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowResourceBindEnterpriseProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowResourceBindEnterpriseProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


