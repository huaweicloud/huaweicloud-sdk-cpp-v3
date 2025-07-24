

#include "huaweicloud/cloudtest/v1/model/UpdateMindmapNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateMindmapNameResponse::UpdateMindmapNameResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

UpdateMindmapNameResponse::~UpdateMindmapNameResponse() = default;

void UpdateMindmapNameResponse::validate()
{
}

web::json::value UpdateMindmapNameResponse::toJson() const
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
bool UpdateMindmapNameResponse::fromJson(const web::json::value& val)
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


std::string UpdateMindmapNameResponse::getCode() const
{
    return code_;
}

void UpdateMindmapNameResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool UpdateMindmapNameResponse::codeIsSet() const
{
    return codeIsSet_;
}

void UpdateMindmapNameResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object UpdateMindmapNameResponse::getData() const
{
    return data_;
}

void UpdateMindmapNameResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateMindmapNameResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateMindmapNameResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string UpdateMindmapNameResponse::getMessage() const
{
    return message_;
}

void UpdateMindmapNameResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdateMindmapNameResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdateMindmapNameResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


