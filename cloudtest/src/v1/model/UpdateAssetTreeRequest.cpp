

#include "huaweicloud/cloudtest/v1/model/UpdateAssetTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateAssetTreeRequest::UpdateAssetTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssetTreeRequest::~UpdateAssetTreeRequest() = default;

void UpdateAssetTreeRequest::validate()
{
}

web::json::value UpdateAssetTreeRequest::toJson() const
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
bool UpdateAssetTreeRequest::fromJson(const web::json::value& val)
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
            CommRequestUpdateAssetTreeParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetTreeRequest::getProjectId() const
{
    return projectId_;
}

void UpdateAssetTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAssetTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAssetTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestUpdateAssetTreeParam UpdateAssetTreeRequest::getBody() const
{
    return body_;
}

void UpdateAssetTreeRequest::setBody(const CommRequestUpdateAssetTreeParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssetTreeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssetTreeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


