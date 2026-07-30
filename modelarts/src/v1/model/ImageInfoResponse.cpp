

#include "huaweicloud/modelarts/v1/model/ImageInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageInfoResponse::ImageInfoResponse()
{
    id_ = "";
    idIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    swrPath_ = "";
    swrPathIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

ImageInfoResponse::~ImageInfoResponse() = default;

void ImageInfoResponse::validate()
{
}

web::json::value ImageInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(swrPathIsSet_) {
        val[utility::conversions::to_string_t("swr_path")] = ModelBase::toJson(swrPath_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool ImageInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string ImageInfoResponse::getId() const
{
    return id_;
}

void ImageInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void ImageInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ImageInfoResponse::getSource() const
{
    return source_;
}

void ImageInfoResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ImageInfoResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ImageInfoResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ImageInfoResponse::getSwrPath() const
{
    return swrPath_;
}

void ImageInfoResponse::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool ImageInfoResponse::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void ImageInfoResponse::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string ImageInfoResponse::getCategory() const
{
    return category_;
}

void ImageInfoResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ImageInfoResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ImageInfoResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


