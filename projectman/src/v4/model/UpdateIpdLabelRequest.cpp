

#include "huaweicloud/projectman/v4/model/UpdateIpdLabelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdLabelRequest::UpdateIpdLabelRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    labelId_ = "";
    labelIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIpdLabelRequest::~UpdateIpdLabelRequest() = default;

void UpdateIpdLabelRequest::validate()
{
}

web::json::value UpdateIpdLabelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(labelIdIsSet_) {
        val[utility::conversions::to_string_t("label_id")] = ModelBase::toJson(labelId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateIpdLabelRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("label_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelId(refVal);
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


std::string UpdateIpdLabelRequest::getProjectId() const
{
    return projectId_;
}

void UpdateIpdLabelRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIpdLabelRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIpdLabelRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateIpdLabelRequest::getLabelId() const
{
    return labelId_;
}

void UpdateIpdLabelRequest::setLabelId(const std::string& value)
{
    labelId_ = value;
    labelIdIsSet_ = true;
}

bool UpdateIpdLabelRequest::labelIdIsSet() const
{
    return labelIdIsSet_;
}

void UpdateIpdLabelRequest::unsetlabelId()
{
    labelIdIsSet_ = false;
}

LabelParam UpdateIpdLabelRequest::getBody() const
{
    return body_;
}

void UpdateIpdLabelRequest::setBody(const LabelParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIpdLabelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIpdLabelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


