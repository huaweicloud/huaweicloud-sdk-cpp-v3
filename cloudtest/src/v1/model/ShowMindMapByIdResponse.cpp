

#include "huaweicloud/cloudtest/v1/model/ShowMindMapByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindMapByIdResponse::ShowMindMapByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowMindMapByIdResponse::~ShowMindMapByIdResponse() = default;

void ShowMindMapByIdResponse::validate()
{
}

web::json::value ShowMindMapByIdResponse::toJson() const
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
bool ShowMindMapByIdResponse::fromJson(const web::json::value& val)
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
            MindmapObject refVal;
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


std::string ShowMindMapByIdResponse::getCode() const
{
    return code_;
}

void ShowMindMapByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowMindMapByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowMindMapByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

MindmapObject ShowMindMapByIdResponse::getData() const
{
    return data_;
}

void ShowMindMapByIdResponse::setData(const MindmapObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowMindMapByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowMindMapByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowMindMapByIdResponse::getMessage() const
{
    return message_;
}

void ShowMindMapByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowMindMapByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowMindMapByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


