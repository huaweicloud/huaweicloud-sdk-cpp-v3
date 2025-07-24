

#include "huaweicloud/cloudtest/v1/model/ErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ErrorInfo::ErrorInfo()
{
    errorContent_ = "";
    errorContentIsSet_ = false;
    errorIndex_ = "";
    errorIndexIsSet_ = false;
    errorPoint_ = "";
    errorPointIsSet_ = false;
    highLight_ = false;
    highLightIsSet_ = false;
}

ErrorInfo::~ErrorInfo() = default;

void ErrorInfo::validate()
{
}

web::json::value ErrorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorContentIsSet_) {
        val[utility::conversions::to_string_t("error_content")] = ModelBase::toJson(errorContent_);
    }
    if(errorIndexIsSet_) {
        val[utility::conversions::to_string_t("error_index")] = ModelBase::toJson(errorIndex_);
    }
    if(errorPointIsSet_) {
        val[utility::conversions::to_string_t("error_point")] = ModelBase::toJson(errorPoint_);
    }
    if(highLightIsSet_) {
        val[utility::conversions::to_string_t("high_light")] = ModelBase::toJson(highLight_);
    }

    return val;
}
bool ErrorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_light"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_light"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighLight(refVal);
        }
    }
    return ok;
}


std::string ErrorInfo::getErrorContent() const
{
    return errorContent_;
}

void ErrorInfo::setErrorContent(const std::string& value)
{
    errorContent_ = value;
    errorContentIsSet_ = true;
}

bool ErrorInfo::errorContentIsSet() const
{
    return errorContentIsSet_;
}

void ErrorInfo::unseterrorContent()
{
    errorContentIsSet_ = false;
}

std::string ErrorInfo::getErrorIndex() const
{
    return errorIndex_;
}

void ErrorInfo::setErrorIndex(const std::string& value)
{
    errorIndex_ = value;
    errorIndexIsSet_ = true;
}

bool ErrorInfo::errorIndexIsSet() const
{
    return errorIndexIsSet_;
}

void ErrorInfo::unseterrorIndex()
{
    errorIndexIsSet_ = false;
}

std::string ErrorInfo::getErrorPoint() const
{
    return errorPoint_;
}

void ErrorInfo::setErrorPoint(const std::string& value)
{
    errorPoint_ = value;
    errorPointIsSet_ = true;
}

bool ErrorInfo::errorPointIsSet() const
{
    return errorPointIsSet_;
}

void ErrorInfo::unseterrorPoint()
{
    errorPointIsSet_ = false;
}

bool ErrorInfo::isHighLight() const
{
    return highLight_;
}

void ErrorInfo::setHighLight(bool value)
{
    highLight_ = value;
    highLightIsSet_ = true;
}

bool ErrorInfo::highLightIsSet() const
{
    return highLightIsSet_;
}

void ErrorInfo::unsethighLight()
{
    highLightIsSet_ = false;
}

}
}
}
}
}


