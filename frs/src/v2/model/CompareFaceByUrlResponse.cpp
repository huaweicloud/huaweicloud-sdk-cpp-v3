

#include "huaweicloud/frs/v2/model/CompareFaceByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByUrlResponse::CompareFaceByUrlResponse()
{
    image1FaceIsSet_ = false;
    image2FaceIsSet_ = false;
    similarity_ = 0.0;
    similarityIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CompareFaceByUrlResponse::~CompareFaceByUrlResponse() = default;

void CompareFaceByUrlResponse::validate()
{
}

web::json::value CompareFaceByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(image1FaceIsSet_) {
        val[utility::conversions::to_string_t("image1_face")] = ModelBase::toJson(image1Face_);
    }
    if(image2FaceIsSet_) {
        val[utility::conversions::to_string_t("image2_face")] = ModelBase::toJson(image2Face_);
    }
    if(similarityIsSet_) {
        val[utility::conversions::to_string_t("similarity")] = ModelBase::toJson(similarity_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CompareFaceByUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image1_face"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image1_face"));
        if(!fieldValue.is_null())
        {
            CompareFace refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage1Face(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image2_face"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image2_face"));
        if(!fieldValue.is_null())
        {
            CompareFace refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage2Face(refVal);
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


CompareFace CompareFaceByUrlResponse::getImage1Face() const
{
    return image1Face_;
}

void CompareFaceByUrlResponse::setImage1Face(const CompareFace& value)
{
    image1Face_ = value;
    image1FaceIsSet_ = true;
}

bool CompareFaceByUrlResponse::image1FaceIsSet() const
{
    return image1FaceIsSet_;
}

void CompareFaceByUrlResponse::unsetimage1Face()
{
    image1FaceIsSet_ = false;
}

CompareFace CompareFaceByUrlResponse::getImage2Face() const
{
    return image2Face_;
}

void CompareFaceByUrlResponse::setImage2Face(const CompareFace& value)
{
    image2Face_ = value;
    image2FaceIsSet_ = true;
}

bool CompareFaceByUrlResponse::image2FaceIsSet() const
{
    return image2FaceIsSet_;
}

void CompareFaceByUrlResponse::unsetimage2Face()
{
    image2FaceIsSet_ = false;
}

double CompareFaceByUrlResponse::getSimilarity() const
{
    return similarity_;
}

void CompareFaceByUrlResponse::setSimilarity(double value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool CompareFaceByUrlResponse::similarityIsSet() const
{
    return similarityIsSet_;
}

void CompareFaceByUrlResponse::unsetsimilarity()
{
    similarityIsSet_ = false;
}

std::string CompareFaceByUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void CompareFaceByUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CompareFaceByUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CompareFaceByUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


