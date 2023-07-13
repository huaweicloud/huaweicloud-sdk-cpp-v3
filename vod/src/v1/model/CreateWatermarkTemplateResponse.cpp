

#include "huaweicloud/vod/v1/model/CreateWatermarkTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateWatermarkTemplateResponse::CreateWatermarkTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    uploadUrl_ = "";
    uploadUrlIsSet_ = false;
}

CreateWatermarkTemplateResponse::~CreateWatermarkTemplateResponse() = default;

void CreateWatermarkTemplateResponse::validate()
{
}

web::json::value CreateWatermarkTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(uploadUrlIsSet_) {
        val[utility::conversions::to_string_t("upload_url")] = ModelBase::toJson(uploadUrl_);
    }

    return val;
}

bool CreateWatermarkTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadUrl(refVal);
        }
    }
    return ok;
}

std::string CreateWatermarkTemplateResponse::getId() const
{
    return id_;
}

void CreateWatermarkTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateWatermarkTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateWatermarkTemplateResponse::getUploadUrl() const
{
    return uploadUrl_;
}

void CreateWatermarkTemplateResponse::setUploadUrl(const std::string& value)
{
    uploadUrl_ = value;
    uploadUrlIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::uploadUrlIsSet() const
{
    return uploadUrlIsSet_;
}

void CreateWatermarkTemplateResponse::unsetuploadUrl()
{
    uploadUrlIsSet_ = false;
}

}
}
}
}
}


