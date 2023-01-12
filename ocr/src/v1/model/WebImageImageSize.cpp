

#include "huaweicloud/ocr/v1/model/WebImageImageSize.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageImageSize::WebImageImageSize()
{
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
}

WebImageImageSize::~WebImageImageSize() = default;

void WebImageImageSize::validate()
{
}

web::json::value WebImageImageSize::toJson() const
{
    web::json::value val = web::json::value::object();

    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }

    return val;
}

bool WebImageImageSize::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    return ok;
}


int32_t WebImageImageSize::getHeight() const
{
    return height_;
}

void WebImageImageSize::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool WebImageImageSize::heightIsSet() const
{
    return heightIsSet_;
}

void WebImageImageSize::unsetheight()
{
    heightIsSet_ = false;
}

int32_t WebImageImageSize::getWidth() const
{
    return width_;
}

void WebImageImageSize::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool WebImageImageSize::widthIsSet() const
{
    return widthIsSet_;
}

void WebImageImageSize::unsetwidth()
{
    widthIsSet_ = false;
}

}
}
}
}
}


