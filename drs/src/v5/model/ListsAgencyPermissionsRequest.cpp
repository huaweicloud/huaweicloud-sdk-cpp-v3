

#include "huaweicloud/drs/v5/model/ListsAgencyPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListsAgencyPermissionsRequest::ListsAgencyPermissionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    isNonDbs_ = false;
    isNonDbsIsSet_ = false;
}

ListsAgencyPermissionsRequest::~ListsAgencyPermissionsRequest() = default;

void ListsAgencyPermissionsRequest::validate()
{
}

web::json::value ListsAgencyPermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(isNonDbsIsSet_) {
        val[utility::conversions::to_string_t("is_non_dbs")] = ModelBase::toJson(isNonDbs_);
    }

    return val;
}
bool ListsAgencyPermissionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_non_dbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_non_dbs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNonDbs(refVal);
        }
    }
    return ok;
}


std::string ListsAgencyPermissionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListsAgencyPermissionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListsAgencyPermissionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListsAgencyPermissionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListsAgencyPermissionsRequest::getSourceType() const
{
    return sourceType_;
}

void ListsAgencyPermissionsRequest::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ListsAgencyPermissionsRequest::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ListsAgencyPermissionsRequest::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string ListsAgencyPermissionsRequest::getTargetType() const
{
    return targetType_;
}

void ListsAgencyPermissionsRequest::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ListsAgencyPermissionsRequest::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ListsAgencyPermissionsRequest::unsettargetType()
{
    targetTypeIsSet_ = false;
}

bool ListsAgencyPermissionsRequest::isIsNonDbs() const
{
    return isNonDbs_;
}

void ListsAgencyPermissionsRequest::setIsNonDbs(bool value)
{
    isNonDbs_ = value;
    isNonDbsIsSet_ = true;
}

bool ListsAgencyPermissionsRequest::isNonDbsIsSet() const
{
    return isNonDbsIsSet_;
}

void ListsAgencyPermissionsRequest::unsetisNonDbs()
{
    isNonDbsIsSet_ = false;
}

}
}
}
}
}


