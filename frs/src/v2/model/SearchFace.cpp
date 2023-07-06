

#include "huaweicloud/frs/v2/model/SearchFace.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFace::SearchFace()
{
    boundingBoxIsSet_ = false;
    similarity_ = 0.0;
    similarityIsSet_ = false;
    externalFieldsIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
}

SearchFace::~SearchFace() = default;

void SearchFace::validate()
{
}

web::json::value SearchFace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(boundingBoxIsSet_) {
        val[utility::conversions::to_string_t("bounding_box")] = ModelBase::toJson(boundingBox_);
    }
    if(similarityIsSet_) {
        val[utility::conversions::to_string_t("similarity")] = ModelBase::toJson(similarity_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }
    if(faceIdIsSet_) {
        val[utility::conversions::to_string_t("face_id")] = ModelBase::toJson(faceId_);
    }

    return val;
}

bool SearchFace::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bounding_box"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounding_box"));
        if(!fieldValue.is_null())
        {
            BoundingBox refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoundingBox(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("similarity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("similarity"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimilarity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_fields"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceId(refVal);
        }
    }
    return ok;
}

BoundingBox SearchFace::getBoundingBox() const
{
    return boundingBox_;
}

void SearchFace::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool SearchFace::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void SearchFace::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

double SearchFace::getSimilarity() const
{
    return similarity_;
}

void SearchFace::setSimilarity(double value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool SearchFace::similarityIsSet() const
{
    return similarityIsSet_;
}

void SearchFace::unsetsimilarity()
{
    similarityIsSet_ = false;
}

Object SearchFace::getExternalFields() const
{
    return externalFields_;
}

void SearchFace::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool SearchFace::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void SearchFace::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string SearchFace::getExternalImageId() const
{
    return externalImageId_;
}

void SearchFace::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool SearchFace::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void SearchFace::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

std::string SearchFace::getFaceId() const
{
    return faceId_;
}

void SearchFace::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool SearchFace::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void SearchFace::unsetfaceId()
{
    faceIdIsSet_ = false;
}

}
}
}
}
}


