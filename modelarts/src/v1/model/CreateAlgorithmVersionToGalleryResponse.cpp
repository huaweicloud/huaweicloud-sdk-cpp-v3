

#include "huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAlgorithmVersionToGalleryResponse::CreateAlgorithmVersionToGalleryResponse()
{
    contentId_ = "";
    contentIdIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    versionNum_ = "";
    versionNumIsSet_ = false;
    contentUri_ = "";
    contentUriIsSet_ = false;
}

CreateAlgorithmVersionToGalleryResponse::~CreateAlgorithmVersionToGalleryResponse() = default;

void CreateAlgorithmVersionToGalleryResponse::validate()
{
}

web::json::value CreateAlgorithmVersionToGalleryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIdIsSet_) {
        val[utility::conversions::to_string_t("content_id")] = ModelBase::toJson(contentId_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(versionNumIsSet_) {
        val[utility::conversions::to_string_t("version_num")] = ModelBase::toJson(versionNum_);
    }
    if(contentUriIsSet_) {
        val[utility::conversions::to_string_t("content_uri")] = ModelBase::toJson(contentUri_);
    }

    return val;
}
bool CreateAlgorithmVersionToGalleryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentUri(refVal);
        }
    }
    return ok;
}


std::string CreateAlgorithmVersionToGalleryResponse::getContentId() const
{
    return contentId_;
}

void CreateAlgorithmVersionToGalleryResponse::setContentId(const std::string& value)
{
    contentId_ = value;
    contentIdIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryResponse::contentIdIsSet() const
{
    return contentIdIsSet_;
}

void CreateAlgorithmVersionToGalleryResponse::unsetcontentId()
{
    contentIdIsSet_ = false;
}

std::string CreateAlgorithmVersionToGalleryResponse::getVersionId() const
{
    return versionId_;
}

void CreateAlgorithmVersionToGalleryResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void CreateAlgorithmVersionToGalleryResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string CreateAlgorithmVersionToGalleryResponse::getVersionNum() const
{
    return versionNum_;
}

void CreateAlgorithmVersionToGalleryResponse::setVersionNum(const std::string& value)
{
    versionNum_ = value;
    versionNumIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryResponse::versionNumIsSet() const
{
    return versionNumIsSet_;
}

void CreateAlgorithmVersionToGalleryResponse::unsetversionNum()
{
    versionNumIsSet_ = false;
}

std::string CreateAlgorithmVersionToGalleryResponse::getContentUri() const
{
    return contentUri_;
}

void CreateAlgorithmVersionToGalleryResponse::setContentUri(const std::string& value)
{
    contentUri_ = value;
    contentUriIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryResponse::contentUriIsSet() const
{
    return contentUriIsSet_;
}

void CreateAlgorithmVersionToGalleryResponse::unsetcontentUri()
{
    contentUriIsSet_ = false;
}

}
}
}
}
}


