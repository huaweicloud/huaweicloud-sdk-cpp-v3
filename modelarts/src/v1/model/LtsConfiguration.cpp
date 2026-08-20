

#include "huaweicloud/modelarts/v1/model/LtsConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LtsConfiguration::LtsConfiguration()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    filesIsSet_ = false;
}

LtsConfiguration::~LtsConfiguration() = default;

void LtsConfiguration::validate()
{
}

web::json::value LtsConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool LtsConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsFiles> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string LtsConfiguration::getStatus() const
{
    return status_;
}

void LtsConfiguration::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LtsConfiguration::statusIsSet() const
{
    return statusIsSet_;
}

void LtsConfiguration::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LtsConfiguration::getType() const
{
    return type_;
}

void LtsConfiguration::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LtsConfiguration::typeIsSet() const
{
    return typeIsSet_;
}

void LtsConfiguration::unsettype()
{
    typeIsSet_ = false;
}

std::string LtsConfiguration::getLogGroupId() const
{
    return logGroupId_;
}

void LtsConfiguration::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsConfiguration::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsConfiguration::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsConfiguration::getLogStreamId() const
{
    return logStreamId_;
}

void LtsConfiguration::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsConfiguration::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsConfiguration::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::vector<LtsFiles>& LtsConfiguration::getFiles()
{
    return files_;
}

void LtsConfiguration::setFiles(const std::vector<LtsFiles>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool LtsConfiguration::filesIsSet() const
{
    return filesIsSet_;
}

void LtsConfiguration::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


