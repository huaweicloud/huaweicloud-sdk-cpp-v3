

#include "huaweicloud/cloudtest/v1/model/DeleteMindmapBackupByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteMindmapBackupByIdResponse::DeleteMindmapBackupByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteMindmapBackupByIdResponse::~DeleteMindmapBackupByIdResponse() = default;

void DeleteMindmapBackupByIdResponse::validate()
{
}

web::json::value DeleteMindmapBackupByIdResponse::toJson() const
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
bool DeleteMindmapBackupByIdResponse::fromJson(const web::json::value& val)
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
            Object refVal;
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


std::string DeleteMindmapBackupByIdResponse::getCode() const
{
    return code_;
}

void DeleteMindmapBackupByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteMindmapBackupByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteMindmapBackupByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object DeleteMindmapBackupByIdResponse::getData() const
{
    return data_;
}

void DeleteMindmapBackupByIdResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteMindmapBackupByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteMindmapBackupByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string DeleteMindmapBackupByIdResponse::getMessage() const
{
    return message_;
}

void DeleteMindmapBackupByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteMindmapBackupByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteMindmapBackupByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


