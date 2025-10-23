

#include "huaweicloud/rds/v3/model/ListMajorVersionFeatureRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMajorVersionFeatureRequest::ListMajorVersionFeatureRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    single_ = false;
    singleIsSet_ = false;
}

ListMajorVersionFeatureRequest::~ListMajorVersionFeatureRequest() = default;

void ListMajorVersionFeatureRequest::validate()
{
}

web::json::value ListMajorVersionFeatureRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(singleIsSet_) {
        val[utility::conversions::to_string_t("single")] = ModelBase::toJson(single_);
    }

    return val;
}
bool ListMajorVersionFeatureRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("single"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingle(refVal);
        }
    }
    return ok;
}


std::string ListMajorVersionFeatureRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListMajorVersionFeatureRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListMajorVersionFeatureRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListMajorVersionFeatureRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListMajorVersionFeatureRequest::getVersion() const
{
    return version_;
}

void ListMajorVersionFeatureRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListMajorVersionFeatureRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListMajorVersionFeatureRequest::unsetversion()
{
    versionIsSet_ = false;
}

bool ListMajorVersionFeatureRequest::isSingle() const
{
    return single_;
}

void ListMajorVersionFeatureRequest::setSingle(bool value)
{
    single_ = value;
    singleIsSet_ = true;
}

bool ListMajorVersionFeatureRequest::singleIsSet() const
{
    return singleIsSet_;
}

void ListMajorVersionFeatureRequest::unsetsingle()
{
    singleIsSet_ = false;
}

}
}
}
}
}


