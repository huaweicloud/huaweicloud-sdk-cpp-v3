

#include "huaweicloud/metastudio/v1/model/CreatePictureModelingByUrlJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePictureModelingByUrlJobResponse::CreatePictureModelingByUrlJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreatePictureModelingByUrlJobResponse::~CreatePictureModelingByUrlJobResponse() = default;

void CreatePictureModelingByUrlJobResponse::validate()
{
}

web::json::value CreatePictureModelingByUrlJobResponse::toJson() const
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
bool CreatePictureModelingByUrlJobResponse::fromJson(const web::json::value& val)
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


std::string CreatePictureModelingByUrlJobResponse::getJobId() const
{
    return jobId_;
}

void CreatePictureModelingByUrlJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreatePictureModelingByUrlJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreatePictureModelingByUrlJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreatePictureModelingByUrlJobResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void CreatePictureModelingByUrlJobResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool CreatePictureModelingByUrlJobResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void CreatePictureModelingByUrlJobResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string CreatePictureModelingByUrlJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreatePictureModelingByUrlJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePictureModelingByUrlJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePictureModelingByUrlJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


