

#include "huaweicloud/projectman/v4/model/BatchDeletePlansRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeletePlansRequest::BatchDeletePlansRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeletePlansRequest::~BatchDeletePlansRequest() = default;

void BatchDeletePlansRequest::validate()
{
}

web::json::value BatchDeletePlansRequest::toJson() const
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
bool BatchDeletePlansRequest::fromJson(const web::json::value& val)
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
            BatchOperateReqVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeletePlansRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeletePlansRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeletePlansRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeletePlansRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchOperateReqVO BatchDeletePlansRequest::getBody() const
{
    return body_;
}

void BatchDeletePlansRequest::setBody(const BatchOperateReqVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeletePlansRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeletePlansRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


