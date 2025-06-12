

#include "huaweicloud/metastudio/v1/model/CreatePictureModelingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePictureModelingJobResponse::CreatePictureModelingJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreatePictureModelingJobResponse::~CreatePictureModelingJobResponse() = default;

void CreatePictureModelingJobResponse::validate()
{
}

web::json::value CreatePictureModelingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreatePictureModelingJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreatePictureModelingJobResponse::getJobId() const
{
    return jobId_;
}

void CreatePictureModelingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreatePictureModelingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreatePictureModelingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreatePictureModelingJobResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void CreatePictureModelingJobResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool CreatePictureModelingJobResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void CreatePictureModelingJobResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string CreatePictureModelingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreatePictureModelingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePictureModelingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePictureModelingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


