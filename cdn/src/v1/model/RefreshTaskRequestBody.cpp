

#include "huaweicloud/cdn/v1/model/RefreshTaskRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RefreshTaskRequestBody::RefreshTaskRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    urlsIsSet_ = false;
}

RefreshTaskRequestBody::~RefreshTaskRequestBody() = default;

void RefreshTaskRequestBody::validate()
{
}

web::json::value RefreshTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}

bool RefreshTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    return ok;
}

std::string RefreshTaskRequestBody::getType() const
{
    return type_;
}

void RefreshTaskRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RefreshTaskRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void RefreshTaskRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string RefreshTaskRequestBody::getMode() const
{
    return mode_;
}

void RefreshTaskRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RefreshTaskRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void RefreshTaskRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<std::string>& RefreshTaskRequestBody::getUrls()
{
    return urls_;
}

void RefreshTaskRequestBody::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool RefreshTaskRequestBody::urlsIsSet() const
{
    return urlsIsSet_;
}

void RefreshTaskRequestBody::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


