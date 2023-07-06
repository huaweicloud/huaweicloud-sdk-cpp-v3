

#include "huaweicloud/frs/v2/model/CompareFaceByBase64Response.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByBase64Response::CompareFaceByBase64Response()
{
    image1FaceIsSet_ = false;
    image2FaceIsSet_ = false;
    similarity_ = 0.0;
    similarityIsSet_ = false;
}

CompareFaceByBase64Response::~CompareFaceByBase64Response() = default;

void CompareFaceByBase64Response::validate()
{
}

web::json::value CompareFaceByBase64Response::toJson() const
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

    return val;
}

bool CompareFaceByBase64Response::fromJson(const web::json::value& val)
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
    return ok;
}

CompareFace CompareFaceByBase64Response::getImage1Face() const
{
    return image1Face_;
}

void CompareFaceByBase64Response::setImage1Face(const CompareFace& value)
{
    image1Face_ = value;
    image1FaceIsSet_ = true;
}

bool CompareFaceByBase64Response::image1FaceIsSet() const
{
    return image1FaceIsSet_;
}

void CompareFaceByBase64Response::unsetimage1Face()
{
    image1FaceIsSet_ = false;
}

CompareFace CompareFaceByBase64Response::getImage2Face() const
{
    return image2Face_;
}

void CompareFaceByBase64Response::setImage2Face(const CompareFace& value)
{
    image2Face_ = value;
    image2FaceIsSet_ = true;
}

bool CompareFaceByBase64Response::image2FaceIsSet() const
{
    return image2FaceIsSet_;
}

void CompareFaceByBase64Response::unsetimage2Face()
{
    image2FaceIsSet_ = false;
}

double CompareFaceByBase64Response::getSimilarity() const
{
    return similarity_;
}

void CompareFaceByBase64Response::setSimilarity(double value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool CompareFaceByBase64Response::similarityIsSet() const
{
    return similarityIsSet_;
}

void CompareFaceByBase64Response::unsetsimilarity()
{
    similarityIsSet_ = false;
}

}
}
}
}
}


