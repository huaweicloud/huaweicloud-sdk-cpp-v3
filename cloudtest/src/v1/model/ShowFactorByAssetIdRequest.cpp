

#include "huaweicloud/cloudtest/v1/model/ShowFactorByAssetIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowFactorByAssetIdRequest::ShowFactorByAssetIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ShowFactorByAssetIdRequest::~ShowFactorByAssetIdRequest() = default;

void ShowFactorByAssetIdRequest::validate()
{
}

web::json::value ShowFactorByAssetIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowFactorByAssetIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommRequestListFactorParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowFactorByAssetIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowFactorByAssetIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowFactorByAssetIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowFactorByAssetIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowFactorByAssetIdRequest::getId() const
{
    return id_;
}

void ShowFactorByAssetIdRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFactorByAssetIdRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowFactorByAssetIdRequest::unsetid()
{
    idIsSet_ = false;
}

CommRequestListFactorParam ShowFactorByAssetIdRequest::getBody() const
{
    return body_;
}

void ShowFactorByAssetIdRequest::setBody(const CommRequestListFactorParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowFactorByAssetIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowFactorByAssetIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


