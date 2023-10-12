

#include "huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListStorageTypesRequest::ListStorageTypesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
}

ListStorageTypesRequest::~ListStorageTypesRequest() = default;

void ListStorageTypesRequest::validate()
{
}

web::json::value ListStorageTypesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }

    return val;
}
bool ListStorageTypesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    return ok;
}


std::string ListStorageTypesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStorageTypesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStorageTypesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStorageTypesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStorageTypesRequest::getVersion() const
{
    return version_;
}

void ListStorageTypesRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListStorageTypesRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListStorageTypesRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListStorageTypesRequest::getHaMode() const
{
    return haMode_;
}

void ListStorageTypesRequest::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ListStorageTypesRequest::haModeIsSet() const
{
    return haModeIsSet_;
}

void ListStorageTypesRequest::unsethaMode()
{
    haModeIsSet_ = false;
}

}
}
}
}
}


