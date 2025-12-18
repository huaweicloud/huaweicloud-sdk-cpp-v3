

#include "huaweicloud/meeting/v1/model/OpenUploadFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenUploadFileInfo::OpenUploadFileInfo()
{
    fileId_ = "";
    fileIdIsSet_ = false;
    imageModerationIsSet_ = false;
}

OpenUploadFileInfo::~OpenUploadFileInfo() = default;

void OpenUploadFileInfo::validate()
{
}

web::json::value OpenUploadFileInfo::toJson() const
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
bool OpenUploadFileInfo::fromJson(const web::json::value& val)
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


std::string OpenUploadFileInfo::getFileId() const
{
    return fileId_;
}

void OpenUploadFileInfo::setFileId(const std::string& value)
{
    fileId_ = value;
    fileIdIsSet_ = true;
}

bool OpenUploadFileInfo::fileIdIsSet() const
{
    return fileIdIsSet_;
}

void OpenUploadFileInfo::unsetfileId()
{
    fileIdIsSet_ = false;
}

ImageModerationResult OpenUploadFileInfo::getImageModeration() const
{
    return imageModeration_;
}

void OpenUploadFileInfo::setImageModeration(const ImageModerationResult& value)
{
    imageModeration_ = value;
    imageModerationIsSet_ = true;
}

bool OpenUploadFileInfo::imageModerationIsSet() const
{
    return imageModerationIsSet_;
}

void OpenUploadFileInfo::unsetimageModeration()
{
    imageModerationIsSet_ = false;
}

}
}
}
}
}


