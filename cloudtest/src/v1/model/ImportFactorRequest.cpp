

#include "huaweicloud/cloudtest/v1/model/ImportFactorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ImportFactorRequest::ImportFactorRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportFactorRequest::~ImportFactorRequest() = default;

void ImportFactorRequest::validate()
{
}

web::json::value ImportFactorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportFactorRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportFactorRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportFactorRequest::getProjectId() const
{
    return projectId_;
}

void ImportFactorRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ImportFactorRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ImportFactorRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ImportFactorRequest::getAssetId() const
{
    return assetId_;
}

void ImportFactorRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ImportFactorRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ImportFactorRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

ImportFactorRequestBody ImportFactorRequest::getBody() const
{
    return body_;
}

void ImportFactorRequest::setBody(const ImportFactorRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportFactorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportFactorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


