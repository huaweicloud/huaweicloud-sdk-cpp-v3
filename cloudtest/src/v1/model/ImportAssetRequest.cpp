

#include "huaweicloud/cloudtest/v1/model/ImportAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ImportAssetRequest::ImportAssetRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportAssetRequest::~ImportAssetRequest() = default;

void ImportAssetRequest::validate()
{
}

web::json::value ImportAssetRequest::toJson() const
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
bool ImportAssetRequest::fromJson(const web::json::value& val)
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
            ImportAssetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportAssetRequest::getProjectId() const
{
    return projectId_;
}

void ImportAssetRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ImportAssetRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ImportAssetRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ImportAssetRequestBody ImportAssetRequest::getBody() const
{
    return body_;
}

void ImportAssetRequest::setBody(const ImportAssetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


