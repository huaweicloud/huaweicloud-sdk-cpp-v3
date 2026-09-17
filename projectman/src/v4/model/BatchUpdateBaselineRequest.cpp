

#include "huaweicloud/projectman/v4/model/BatchUpdateBaselineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateBaselineRequest::BatchUpdateBaselineRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateBaselineRequest::~BatchUpdateBaselineRequest() = default;

void BatchUpdateBaselineRequest::validate()
{
}

web::json::value BatchUpdateBaselineRequest::toJson() const
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
bool BatchUpdateBaselineRequest::fromJson(const web::json::value& val)
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
            OperateSprintReqVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateBaselineRequest::getProjectId() const
{
    return projectId_;
}

void BatchUpdateBaselineRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateBaselineRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateBaselineRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

OperateSprintReqVO BatchUpdateBaselineRequest::getBody() const
{
    return body_;
}

void BatchUpdateBaselineRequest::setBody(const OperateSprintReqVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateBaselineRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateBaselineRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


