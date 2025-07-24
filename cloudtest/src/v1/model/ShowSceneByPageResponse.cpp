

#include "huaweicloud/cloudtest/v1/model/ShowSceneByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowSceneByPageResponse::ShowSceneByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowSceneByPageResponse::~ShowSceneByPageResponse() = default;

void ShowSceneByPageResponse::validate()
{
}

web::json::value ShowSceneByPageResponse::toJson() const
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
bool ShowSceneByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoScene refVal;
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


std::string ShowSceneByPageResponse::getCode() const
{
    return code_;
}

void ShowSceneByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowSceneByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowSceneByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoScene ShowSceneByPageResponse::getData() const
{
    return data_;
}

void ShowSceneByPageResponse::setData(const BasePageInfoScene& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowSceneByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowSceneByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowSceneByPageResponse::getMessage() const
{
    return message_;
}

void ShowSceneByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowSceneByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowSceneByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


