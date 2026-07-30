

#include "huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAlgorithmVersionToGalleryBody::CreateAlgorithmVersionToGalleryBody()
{
    contentId_ = "";
    contentIdIsSet_ = false;
    contentInfoIsSet_ = false;
    algorithmIsSet_ = false;
}

CreateAlgorithmVersionToGalleryBody::~CreateAlgorithmVersionToGalleryBody() = default;

void CreateAlgorithmVersionToGalleryBody::validate()
{
}

web::json::value CreateAlgorithmVersionToGalleryBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIdIsSet_) {
        val[utility::conversions::to_string_t("content_id")] = ModelBase::toJson(contentId_);
    }
    if(contentInfoIsSet_) {
        val[utility::conversions::to_string_t("content_info")] = ModelBase::toJson(contentInfo_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }

    return val;
}
bool CreateAlgorithmVersionToGalleryBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("content_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_info"));
        if(!fieldValue.is_null())
        {
            ContentInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            AlgorithmInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    return ok;
}


std::string CreateAlgorithmVersionToGalleryBody::getContentId() const
{
    return contentId_;
}

void CreateAlgorithmVersionToGalleryBody::setContentId(const std::string& value)
{
    contentId_ = value;
    contentIdIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryBody::contentIdIsSet() const
{
    return contentIdIsSet_;
}

void CreateAlgorithmVersionToGalleryBody::unsetcontentId()
{
    contentIdIsSet_ = false;
}

ContentInfo CreateAlgorithmVersionToGalleryBody::getContentInfo() const
{
    return contentInfo_;
}

void CreateAlgorithmVersionToGalleryBody::setContentInfo(const ContentInfo& value)
{
    contentInfo_ = value;
    contentInfoIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryBody::contentInfoIsSet() const
{
    return contentInfoIsSet_;
}

void CreateAlgorithmVersionToGalleryBody::unsetcontentInfo()
{
    contentInfoIsSet_ = false;
}

AlgorithmInfo CreateAlgorithmVersionToGalleryBody::getAlgorithm() const
{
    return algorithm_;
}

void CreateAlgorithmVersionToGalleryBody::setAlgorithm(const AlgorithmInfo& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool CreateAlgorithmVersionToGalleryBody::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void CreateAlgorithmVersionToGalleryBody::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

}
}
}
}
}


