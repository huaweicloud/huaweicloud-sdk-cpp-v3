

#include "huaweicloud/ims/v2/model/GlanceListImagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImagesResponse::GlanceListImagesResponse()
{
    first_ = "";
    firstIsSet_ = false;
    imagesIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    next_ = "";
    nextIsSet_ = false;
}

GlanceListImagesResponse::~GlanceListImagesResponse() = default;

void GlanceListImagesResponse::validate()
{
}

web::json::value GlanceListImagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firstIsSet_) {
        val[utility::conversions::to_string_t("first")] = ModelBase::toJson(first_);
    }
    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(nextIsSet_) {
        val[utility::conversions::to_string_t("next")] = ModelBase::toJson(next_);
    }

    return val;
}
bool GlanceListImagesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("first"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirst(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<GlanceShowImageListResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNext(refVal);
        }
    }
    return ok;
}


std::string GlanceListImagesResponse::getFirst() const
{
    return first_;
}

void GlanceListImagesResponse::setFirst(const std::string& value)
{
    first_ = value;
    firstIsSet_ = true;
}

bool GlanceListImagesResponse::firstIsSet() const
{
    return firstIsSet_;
}

void GlanceListImagesResponse::unsetfirst()
{
    firstIsSet_ = false;
}

std::vector<GlanceShowImageListResponseBody>& GlanceListImagesResponse::getImages()
{
    return images_;
}

void GlanceListImagesResponse::setImages(const std::vector<GlanceShowImageListResponseBody>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool GlanceListImagesResponse::imagesIsSet() const
{
    return imagesIsSet_;
}

void GlanceListImagesResponse::unsetimages()
{
    imagesIsSet_ = false;
}

std::string GlanceListImagesResponse::getSchema() const
{
    return schema_;
}

void GlanceListImagesResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceListImagesResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceListImagesResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::string GlanceListImagesResponse::getNext() const
{
    return next_;
}

void GlanceListImagesResponse::setNext(const std::string& value)
{
    next_ = value;
    nextIsSet_ = true;
}

bool GlanceListImagesResponse::nextIsSet() const
{
    return nextIsSet_;
}

void GlanceListImagesResponse::unsetnext()
{
    nextIsSet_ = false;
}

}
}
}
}
}


