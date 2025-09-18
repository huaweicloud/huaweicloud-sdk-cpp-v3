

#include "huaweicloud/projectman/v4/model/DownloadImageFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DownloadImageFileRequest::DownloadImageFileRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    imageUri_ = "";
    imageUriIsSet_ = false;
}

DownloadImageFileRequest::~DownloadImageFileRequest() = default;

void DownloadImageFileRequest::validate()
{
}

web::json::value DownloadImageFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(imageUriIsSet_) {
        val[utility::conversions::to_string_t("image_uri")] = ModelBase::toJson(imageUri_);
    }

    return val;
}
bool DownloadImageFileRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("image_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUri(refVal);
        }
    }
    return ok;
}


std::string DownloadImageFileRequest::getProjectId() const
{
    return projectId_;
}

void DownloadImageFileRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DownloadImageFileRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DownloadImageFileRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DownloadImageFileRequest::getImageUri() const
{
    return imageUri_;
}

void DownloadImageFileRequest::setImageUri(const std::string& value)
{
    imageUri_ = value;
    imageUriIsSet_ = true;
}

bool DownloadImageFileRequest::imageUriIsSet() const
{
    return imageUriIsSet_;
}

void DownloadImageFileRequest::unsetimageUri()
{
    imageUriIsSet_ = false;
}

}
}
}
}
}


