

#include "huaweicloud/cloudtest/v1/model/ExportFactorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExportFactorRequest::ExportFactorRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportFactorRequest::~ExportFactorRequest() = default;

void ExportFactorRequest::validate()
{
}

web::json::value ExportFactorRequest::toJson() const
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
bool ExportFactorRequest::fromJson(const web::json::value& val)
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
            CommRequestAssetExportParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportFactorRequest::getProjectId() const
{
    return projectId_;
}

void ExportFactorRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ExportFactorRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ExportFactorRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ExportFactorRequest::getAssetId() const
{
    return assetId_;
}

void ExportFactorRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ExportFactorRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ExportFactorRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

CommRequestAssetExportParam ExportFactorRequest::getBody() const
{
    return body_;
}

void ExportFactorRequest::setBody(const CommRequestAssetExportParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportFactorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportFactorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


