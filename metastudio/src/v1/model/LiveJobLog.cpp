

#include "huaweicloud/metastudio/v1/model/LiveJobLog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveJobLog::LiveJobLog()
{
    interactionRecordsUrl_ = "";
    interactionRecordsUrlIsSet_ = false;
    jobConfigRecordsUrl_ = "";
    jobConfigRecordsUrlIsSet_ = false;
    scriptsRecordsUrl_ = "";
    scriptsRecordsUrlIsSet_ = false;
    commandRevicedRecordsUrl_ = "";
    commandRevicedRecordsUrlIsSet_ = false;
    commandExecRecordsUrl_ = "";
    commandExecRecordsUrlIsSet_ = false;
}

LiveJobLog::~LiveJobLog() = default;

void LiveJobLog::validate()
{
}

web::json::value LiveJobLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interactionRecordsUrlIsSet_) {
        val[utility::conversions::to_string_t("interaction_records_url")] = ModelBase::toJson(interactionRecordsUrl_);
    }
    if(jobConfigRecordsUrlIsSet_) {
        val[utility::conversions::to_string_t("job_config_records_url")] = ModelBase::toJson(jobConfigRecordsUrl_);
    }
    if(scriptsRecordsUrlIsSet_) {
        val[utility::conversions::to_string_t("scripts_records_url")] = ModelBase::toJson(scriptsRecordsUrl_);
    }
    if(commandRevicedRecordsUrlIsSet_) {
        val[utility::conversions::to_string_t("command_reviced_records_url")] = ModelBase::toJson(commandRevicedRecordsUrl_);
    }
    if(commandExecRecordsUrlIsSet_) {
        val[utility::conversions::to_string_t("command_exec_records_url")] = ModelBase::toJson(commandExecRecordsUrl_);
    }

    return val;
}
bool LiveJobLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interaction_records_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_records_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionRecordsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_config_records_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_config_records_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobConfigRecordsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scripts_records_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scripts_records_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptsRecordsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_reviced_records_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_reviced_records_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandRevicedRecordsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_exec_records_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_exec_records_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandExecRecordsUrl(refVal);
        }
    }
    return ok;
}


std::string LiveJobLog::getInteractionRecordsUrl() const
{
    return interactionRecordsUrl_;
}

void LiveJobLog::setInteractionRecordsUrl(const std::string& value)
{
    interactionRecordsUrl_ = value;
    interactionRecordsUrlIsSet_ = true;
}

bool LiveJobLog::interactionRecordsUrlIsSet() const
{
    return interactionRecordsUrlIsSet_;
}

void LiveJobLog::unsetinteractionRecordsUrl()
{
    interactionRecordsUrlIsSet_ = false;
}

std::string LiveJobLog::getJobConfigRecordsUrl() const
{
    return jobConfigRecordsUrl_;
}

void LiveJobLog::setJobConfigRecordsUrl(const std::string& value)
{
    jobConfigRecordsUrl_ = value;
    jobConfigRecordsUrlIsSet_ = true;
}

bool LiveJobLog::jobConfigRecordsUrlIsSet() const
{
    return jobConfigRecordsUrlIsSet_;
}

void LiveJobLog::unsetjobConfigRecordsUrl()
{
    jobConfigRecordsUrlIsSet_ = false;
}

std::string LiveJobLog::getScriptsRecordsUrl() const
{
    return scriptsRecordsUrl_;
}

void LiveJobLog::setScriptsRecordsUrl(const std::string& value)
{
    scriptsRecordsUrl_ = value;
    scriptsRecordsUrlIsSet_ = true;
}

bool LiveJobLog::scriptsRecordsUrlIsSet() const
{
    return scriptsRecordsUrlIsSet_;
}

void LiveJobLog::unsetscriptsRecordsUrl()
{
    scriptsRecordsUrlIsSet_ = false;
}

std::string LiveJobLog::getCommandRevicedRecordsUrl() const
{
    return commandRevicedRecordsUrl_;
}

void LiveJobLog::setCommandRevicedRecordsUrl(const std::string& value)
{
    commandRevicedRecordsUrl_ = value;
    commandRevicedRecordsUrlIsSet_ = true;
}

bool LiveJobLog::commandRevicedRecordsUrlIsSet() const
{
    return commandRevicedRecordsUrlIsSet_;
}

void LiveJobLog::unsetcommandRevicedRecordsUrl()
{
    commandRevicedRecordsUrlIsSet_ = false;
}

std::string LiveJobLog::getCommandExecRecordsUrl() const
{
    return commandExecRecordsUrl_;
}

void LiveJobLog::setCommandExecRecordsUrl(const std::string& value)
{
    commandExecRecordsUrl_ = value;
    commandExecRecordsUrlIsSet_ = true;
}

bool LiveJobLog::commandExecRecordsUrlIsSet() const
{
    return commandExecRecordsUrlIsSet_;
}

void LiveJobLog::unsetcommandExecRecordsUrl()
{
    commandExecRecordsUrlIsSet_ = false;
}

}
}
}
}
}


