

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFlavorsRequest::ListFlavorsRequest()
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

ListFlavorsRequest::~ListFlavorsRequest() = default;

void ListFlavorsRequest::validate()
{
}

web::json::value ListFlavorsRequest::toJson() const
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
bool ListFlavorsRequest::fromJson(const web::json::value& val)
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


std::string ListFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListFlavorsRequest::getVersion() const
{
    return version_;
}

void ListFlavorsRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListFlavorsRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListFlavorsRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListFlavorsRequest::getSpecCode() const
{
    return specCode_;
}

void ListFlavorsRequest::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ListFlavorsRequest::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ListFlavorsRequest::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string ListFlavorsRequest::getHaMode() const
{
    return haMode_;
}

void ListFlavorsRequest::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ListFlavorsRequest::haModeIsSet() const
{
    return haModeIsSet_;
}

void ListFlavorsRequest::unsethaMode()
{
    haModeIsSet_ = false;
}

int32_t ListFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


