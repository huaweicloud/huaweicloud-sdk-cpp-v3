

#include "huaweicloud/meeting/v1/model/UploadFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UploadFileResponse::UploadFileResponse()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    imageModerationIsSet_ = false;
}

UploadFileResponse::~UploadFileResponse() = default;

void UploadFileResponse::validate()
{
}

web::json::value UploadFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileIdIsSet_) {
        val[utility::conversions::to_string_t("fileId")] = ModelBase::toJson(fileId_);
    }
    if(imageModerationIsSet_) {
        val[utility::conversions::to_string_t("imageModeration")] = ModelBase::toJson(imageModeration_);
    }

    return val;
}
bool UploadFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fileId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageModeration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageModeration"));
        if(!fieldValue.is_null())
        {
            ImageModerationResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageModeration(refVal);
        }
    }
    return ok;
}


std::string UploadFileResponse::getFileId() const
{
    return fileId_;
}

void UploadFileResponse::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool UploadFileResponse::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void UploadFileResponse::unsetfileId()
{
    fileIdIsSet_ = false;
}

ImageModerationResult UploadFileResponse::getImageModeration() const
{
    return imageModeration_;
}

void UploadFileResponse::setImageModeration(const ImageModerationResult& value)
{
    imageModeration_ = value;
    imageModerationIsSet_ = true;
}

bool UploadFileResponse::imageModerationIsSet() const
{
    return imageModerationIsSet_;
}

void UploadFileResponse::unsetimageModeration()
{
    imageModerationIsSet_ = false;
}

}
}
}
}
}


