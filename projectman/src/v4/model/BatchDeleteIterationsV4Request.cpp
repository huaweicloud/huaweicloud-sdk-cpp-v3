

#include "huaweicloud/projectman/v4/model/BatchDeleteIterationsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIterationsV4Request::BatchDeleteIterationsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteIterationsV4Request::~BatchDeleteIterationsV4Request() = default;

void BatchDeleteIterationsV4Request::validate()
{
}

web::json::value BatchDeleteIterationsV4Request::toJson() const
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
bool BatchDeleteIterationsV4Request::fromJson(const web::json::value& val)
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
            BatchDeleteIterationsV4RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteIterationsV4Request::getProjectId() const
{
    return projectId_;
}

void BatchDeleteIterationsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteIterationsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteIterationsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchDeleteIterationsV4RequestBody BatchDeleteIterationsV4Request::getBody() const
{
    return body_;
}

void BatchDeleteIterationsV4Request::setBody(const BatchDeleteIterationsV4RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteIterationsV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteIterationsV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


