

#include "huaweicloud/modelarts/v1/model/LtsConfigurationV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LtsConfigurationV2::LtsConfigurationV2()
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

LtsConfigurationV2::~LtsConfigurationV2() = default;

void LtsConfigurationV2::validate()
{
}

web::json::value LtsConfigurationV2::toJson() const
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
bool LtsConfigurationV2::fromJson(const web::json::value& val)
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


std::string LtsConfigurationV2::getStatus() const
{
    return status_;
}

void LtsConfigurationV2::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LtsConfigurationV2::statusIsSet() const
{
    return statusIsSet_;
}

void LtsConfigurationV2::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LtsConfigurationV2::getType() const
{
    return type_;
}

void LtsConfigurationV2::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LtsConfigurationV2::typeIsSet() const
{
    return typeIsSet_;
}

void LtsConfigurationV2::unsettype()
{
    typeIsSet_ = false;
}

std::string LtsConfigurationV2::getLogGroupId() const
{
    return logGroupId_;
}

void LtsConfigurationV2::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsConfigurationV2::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsConfigurationV2::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsConfigurationV2::getLogStreamId() const
{
    return logStreamId_;
}

void LtsConfigurationV2::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsConfigurationV2::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsConfigurationV2::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::vector<LtsFiles>& LtsConfigurationV2::getFiles()
{
    return files_;
}

void LtsConfigurationV2::setFiles(const std::vector<LtsFiles>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool LtsConfigurationV2::filesIsSet() const
{
    return filesIsSet_;
}

void LtsConfigurationV2::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


