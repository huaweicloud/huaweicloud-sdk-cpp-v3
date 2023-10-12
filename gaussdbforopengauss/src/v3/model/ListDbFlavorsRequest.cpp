

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDbFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDbFlavorsRequest::ListDbFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDbFlavorsRequest::~ListDbFlavorsRequest() = default;

void ListDbFlavorsRequest::validate()
{
}

web::json::value ListDbFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDbFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListDbFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDbFlavorsRequest::getVersion() const
{
    return version_;
}

void ListDbFlavorsRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListDbFlavorsRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListDbFlavorsRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListDbFlavorsRequest::getSpecCode() const
{
    return specCode_;
}

void ListDbFlavorsRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListDbFlavorsRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListDbFlavorsRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ListDbFlavorsRequest::getHaMode() const
{
    return haMode_;
}

void ListDbFlavorsRequest::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ListDbFlavorsRequest::haModeIsSet() const
{
    return haModeIsSet_;
}

void ListDbFlavorsRequest::unsethaMode()
{
    haModeIsSet_ = false;
}

int32_t ListDbFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListDbFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDbFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListDbFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


