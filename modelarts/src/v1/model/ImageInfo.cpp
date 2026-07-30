

#include "huaweicloud/modelarts/v1/model/ImageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageInfo::ImageInfo()
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

ImageInfo::~ImageInfo() = default;

void ImageInfo::validate()
{
}

web::json::value ImageInfo::toJson() const
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
bool ImageInfo::fromJson(const web::json::value& val)
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


std::string ImageInfo::getId() const
{
    return id_;
}

void ImageInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageInfo::idIsSet() const
{
    return idIsSet_;
}

void ImageInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ImageInfo::getSource() const
{
    return source_;
}

void ImageInfo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ImageInfo::sourceIsSet() const
{
    return sourceIsSet_;
}

void ImageInfo::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ImageInfo::getSwrPath() const
{
    return swrPath_;
}

void ImageInfo::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool ImageInfo::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void ImageInfo::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string ImageInfo::getCategory() const
{
    return category_;
}

void ImageInfo::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ImageInfo::categoryIsSet() const
{
    return categoryIsSet_;
}

void ImageInfo::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


