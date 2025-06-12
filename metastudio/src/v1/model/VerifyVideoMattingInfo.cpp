

#include "huaweicloud/metastudio/v1/model/VerifyVideoMattingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VerifyVideoMattingInfo::VerifyVideoMattingInfo()
{
    dx_ = 0;
    dxIsSet_ = false;
    dy_ = 0;
    dyIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
}

VerifyVideoMattingInfo::~VerifyVideoMattingInfo() = default;

void VerifyVideoMattingInfo::validate()
{
}

web::json::value VerifyVideoMattingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }

    return val;
}
bool VerifyVideoMattingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethod(refVal);
        }
    }
    return ok;
}


int32_t VerifyVideoMattingInfo::getDx() const
{
    return dx_;
}

void VerifyVideoMattingInfo::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool VerifyVideoMattingInfo::dxIsSet() const
{
    return dxIsSet_;
}

void VerifyVideoMattingInfo::unsetdx()
{
    dxIsSet_ = false;
}

int32_t VerifyVideoMattingInfo::getDy() const
{
    return dy_;
}

void VerifyVideoMattingInfo::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool VerifyVideoMattingInfo::dyIsSet() const
{
    return dyIsSet_;
}

void VerifyVideoMattingInfo::unsetdy()
{
    dyIsSet_ = false;
}

int32_t VerifyVideoMattingInfo::getWidth() const
{
    return width_;
}

void VerifyVideoMattingInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VerifyVideoMattingInfo::widthIsSet() const
{
    return widthIsSet_;
}

void VerifyVideoMattingInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VerifyVideoMattingInfo::getHeight() const
{
    return height_;
}

void VerifyVideoMattingInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VerifyVideoMattingInfo::heightIsSet() const
{
    return heightIsSet_;
}

void VerifyVideoMattingInfo::unsetheight()
{
    heightIsSet_ = false;
}

std::string VerifyVideoMattingInfo::getMethod() const
{
    return method_;
}

void VerifyVideoMattingInfo::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool VerifyVideoMattingInfo::methodIsSet() const
{
    return methodIsSet_;
}

void VerifyVideoMattingInfo::unsetmethod()
{
    methodIsSet_ = false;
}

}
}
}
}
}


