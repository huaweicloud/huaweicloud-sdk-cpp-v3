

#include "huaweicloud/projectman/v4/model/CreateIpdLabelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdLabelRequest::CreateIpdLabelRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIpdLabelRequest::~CreateIpdLabelRequest() = default;

void CreateIpdLabelRequest::validate()
{
}

web::json::value CreateIpdLabelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateIpdLabelRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LabelParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIpdLabelRequest::getProjectId() const
{
    return projectId_;
}

void CreateIpdLabelRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIpdLabelRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIpdLabelRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

LabelParam CreateIpdLabelRequest::getBody() const
{
    return body_;
}

void CreateIpdLabelRequest::setBody(const LabelParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpdLabelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpdLabelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


