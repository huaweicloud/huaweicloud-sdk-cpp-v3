

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportInstanceInfosRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportInstanceInfosRequestBody::ExportInstanceInfosRequestBody()
{
    instanceListIsSet_ = false;
    userDefinedColumnsIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ExportInstanceInfosRequestBody::~ExportInstanceInfosRequestBody() = default;

void ExportInstanceInfosRequestBody::validate()
{
}

web::json::value ExportInstanceInfosRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceListIsSet_) {
        val[utility::conversions::to_string_t("instance_list")] = ModelBase::toJson(instanceList_);
    }
    if(userDefinedColumnsIsSet_) {
        val[utility::conversions::to_string_t("user_defined_columns")] = ModelBase::toJson(userDefinedColumns_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ExportInstanceInfosRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_defined_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined_columns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefinedColumns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ExportInstanceInfosRequestBody::getInstanceList()
{
    return instanceList_;
}

void ExportInstanceInfosRequestBody::setInstanceList(const std::vector<std::string>& value)
{
    instanceList_ = value;
    instanceListIsSet_ = true;
}

bool ExportInstanceInfosRequestBody::instanceListIsSet() const
{
    return instanceListIsSet_;
}

void ExportInstanceInfosRequestBody::unsetinstanceList()
{
    instanceListIsSet_ = false;
}

std::vector<std::string>& ExportInstanceInfosRequestBody::getUserDefinedColumns()
{
    return userDefinedColumns_;
}

void ExportInstanceInfosRequestBody::setUserDefinedColumns(const std::vector<std::string>& value)
{
    userDefinedColumns_ = value;
    userDefinedColumnsIsSet_ = true;
}

bool ExportInstanceInfosRequestBody::userDefinedColumnsIsSet() const
{
    return userDefinedColumnsIsSet_;
}

void ExportInstanceInfosRequestBody::unsetuserDefinedColumns()
{
    userDefinedColumnsIsSet_ = false;
}

std::string ExportInstanceInfosRequestBody::getTimeZone() const
{
    return timeZone_;
}

void ExportInstanceInfosRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ExportInstanceInfosRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ExportInstanceInfosRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string ExportInstanceInfosRequestBody::getLanguage() const
{
    return language_;
}

void ExportInstanceInfosRequestBody::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ExportInstanceInfosRequestBody::languageIsSet() const
{
    return languageIsSet_;
}

void ExportInstanceInfosRequestBody::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


