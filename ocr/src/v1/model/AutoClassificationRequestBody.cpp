

#include "huaweicloud/ocr/v1/model/AutoClassificationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoClassificationRequestBody::AutoClassificationRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    typeListIsSet_ = false;
    extendedParametersIsSet_ = false;
}

AutoClassificationRequestBody::~AutoClassificationRequestBody() = default;

void AutoClassificationRequestBody::validate()
{
}

web::json::value AutoClassificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(typeListIsSet_) {
        val[utility::conversions::to_string_t("type_list")] = ModelBase::toJson(typeList_);
    }
    if(extendedParametersIsSet_) {
        val[utility::conversions::to_string_t("extended_parameters")] = ModelBase::toJson(extendedParameters_);
    }

    return val;
}

bool AutoClassificationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extended_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extended_parameters"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendedParameters(refVal);
        }
    }
    return ok;
}


std::string AutoClassificationRequestBody::getImage() const
{
    return image_;
}

void AutoClassificationRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool AutoClassificationRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void AutoClassificationRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string AutoClassificationRequestBody::getUrl() const
{
    return url_;
}

void AutoClassificationRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AutoClassificationRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void AutoClassificationRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::vector<std::string>& AutoClassificationRequestBody::getTypeList()
{
    return typeList_;
}

void AutoClassificationRequestBody::setTypeList(const std::vector<std::string>& value)
{
    typeList_ = value;
    typeListIsSet_ = true;
}

bool AutoClassificationRequestBody::typeListIsSet() const
{
    return typeListIsSet_;
}

void AutoClassificationRequestBody::unsettypeList()
{
    typeListIsSet_ = false;
}

Object AutoClassificationRequestBody::getExtendedParameters() const
{
    return extendedParameters_;
}

void AutoClassificationRequestBody::setExtendedParameters(const Object& value)
{
    extendedParameters_ = value;
    extendedParametersIsSet_ = true;
}

bool AutoClassificationRequestBody::extendedParametersIsSet() const
{
    return extendedParametersIsSet_;
}

void AutoClassificationRequestBody::unsetextendedParameters()
{
    extendedParametersIsSet_ = false;
}

}
}
}
}
}


