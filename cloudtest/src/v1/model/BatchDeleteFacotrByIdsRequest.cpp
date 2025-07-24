

#include "huaweicloud/cloudtest/v1/model/BatchDeleteFacotrByIdsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteFacotrByIdsRequest::BatchDeleteFacotrByIdsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteFacotrByIdsRequest::~BatchDeleteFacotrByIdsRequest() = default;

void BatchDeleteFacotrByIdsRequest::validate()
{
}

web::json::value BatchDeleteFacotrByIdsRequest::toJson() const
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
bool BatchDeleteFacotrByIdsRequest::fromJson(const web::json::value& val)
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
            CommRequestListString refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteFacotrByIdsRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeleteFacotrByIdsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteFacotrByIdsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteFacotrByIdsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestListString BatchDeleteFacotrByIdsRequest::getBody() const
{
    return body_;
}

void BatchDeleteFacotrByIdsRequest::setBody(const CommRequestListString& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteFacotrByIdsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteFacotrByIdsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


