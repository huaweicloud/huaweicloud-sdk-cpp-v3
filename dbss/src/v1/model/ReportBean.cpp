

#include "huaweicloud/dbss/v1/model/ReportBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ReportBean::ReportBean()
{
    dbIds_ = "";
    dbIdsIsSet_ = false;
    dbNames_ = "";
    dbNamesIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    percentum_ = 0;
    percentumIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ReportBean::~ReportBean() = default;

void ReportBean::validate()
{
}

web::json::value ReportBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(percentumIsSet_) {
        val[utility::conversions::to_string_t("percentum")] = ModelBase::toJson(percentum_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ReportBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}


std::string ReportBean::getDbIds() const
{
    return dbIds_;
}

void ReportBean::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool ReportBean::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void ReportBean::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string ReportBean::getDbNames() const
{
    return dbNames_;
}

void ReportBean::setDbNames(const std::string& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool ReportBean::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void ReportBean::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

std::string ReportBean::getEndTime() const
{
    return endTime_;
}

void ReportBean::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ReportBean::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ReportBean::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ReportBean::getFinishTime() const
{
    return finishTime_;
}

void ReportBean::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool ReportBean::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void ReportBean::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::string ReportBean::getFormat() const
{
    return format_;
}

void ReportBean::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ReportBean::formatIsSet() const
{
    return formatIsSet_;
}

void ReportBean::unsetformat()
{
    formatIsSet_ = false;
}

std::string ReportBean::getId() const
{
    return id_;
}

void ReportBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReportBean::idIsSet() const
{
    return idIsSet_;
}

void ReportBean::unsetid()
{
    idIsSet_ = false;
}

std::string ReportBean::getName() const
{
    return name_;
}

void ReportBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportBean::nameIsSet() const
{
    return nameIsSet_;
}

void ReportBean::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReportBean::getPercentum() const
{
    return percentum_;
}

void ReportBean::setPercentum(int32_t value)
{
    percentum_ = value;
    percentumIsSet_ = true;
}

bool ReportBean::percentumIsSet() const
{
    return percentumIsSet_;
}

void ReportBean::unsetpercentum()
{
    percentumIsSet_ = false;
}

std::string ReportBean::getStartTime() const
{
    return startTime_;
}

void ReportBean::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ReportBean::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ReportBean::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ReportBean::getTemplateType() const
{
    return templateType_;
}

void ReportBean::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool ReportBean::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void ReportBean::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string ReportBean::getType() const
{
    return type_;
}

void ReportBean::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ReportBean::typeIsSet() const
{
    return typeIsSet_;
}

void ReportBean::unsettype()
{
    typeIsSet_ = false;
}

std::string ReportBean::getUrl() const
{
    return url_;
}

void ReportBean::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ReportBean::urlIsSet() const
{
    return urlIsSet_;
}

void ReportBean::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


