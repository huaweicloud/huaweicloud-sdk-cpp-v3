

#include "huaweicloud/cloudtest/v1/model/ShowMindmapCreatorNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapCreatorNameResponse::ShowMindmapCreatorNameResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowMindmapCreatorNameResponse::~ShowMindmapCreatorNameResponse() = default;

void ShowMindmapCreatorNameResponse::validate()
{
}

web::json::value ShowMindmapCreatorNameResponse::toJson() const
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
bool ShowMindmapCreatorNameResponse::fromJson(const web::json::value& val)
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


std::string ShowMindmapCreatorNameResponse::getCode() const
{
    return code_;
}

void ShowMindmapCreatorNameResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowMindmapCreatorNameResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowMindmapCreatorNameResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object ShowMindmapCreatorNameResponse::getData() const
{
    return data_;
}

void ShowMindmapCreatorNameResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowMindmapCreatorNameResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowMindmapCreatorNameResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowMindmapCreatorNameResponse::getMessage() const
{
    return message_;
}

void ShowMindmapCreatorNameResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowMindmapCreatorNameResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowMindmapCreatorNameResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


