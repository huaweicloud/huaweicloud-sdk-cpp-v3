

#include "huaweicloud/cloudtest/v1/model/ShowMindmapBackupByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapBackupByPageResponse::ShowMindmapBackupByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowMindmapBackupByPageResponse::~ShowMindmapBackupByPageResponse() = default;

void ShowMindmapBackupByPageResponse::validate()
{
}

web::json::value ShowMindmapBackupByPageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowMindmapBackupByPageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            BasePageInfoMindmapBackup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ShowMindmapBackupByPageResponse::getCode() const
{
    return code_;
}

void ShowMindmapBackupByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowMindmapBackupByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowMindmapBackupByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoMindmapBackup ShowMindmapBackupByPageResponse::getData() const
{
    return data_;
}

void ShowMindmapBackupByPageResponse::setData(const BasePageInfoMindmapBackup& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowMindmapBackupByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowMindmapBackupByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowMindmapBackupByPageResponse::getMessage() const
{
    return message_;
}

void ShowMindmapBackupByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowMindmapBackupByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowMindmapBackupByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


