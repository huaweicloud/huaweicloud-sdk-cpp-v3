

#include "huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowMindmapRecycleByPageResponse::ShowMindmapRecycleByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowMindmapRecycleByPageResponse::~ShowMindmapRecycleByPageResponse() = default;

void ShowMindmapRecycleByPageResponse::validate()
{
}

web::json::value ShowMindmapRecycleByPageResponse::toJson() const
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
bool ShowMindmapRecycleByPageResponse::fromJson(const web::json::value& val)
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
            BasePageInfoMindmapRecycle refVal;
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


std::string ShowMindmapRecycleByPageResponse::getCode() const
{
    return code_;
}

void ShowMindmapRecycleByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowMindmapRecycleByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowMindmapRecycleByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoMindmapRecycle ShowMindmapRecycleByPageResponse::getData() const
{
    return data_;
}

void ShowMindmapRecycleByPageResponse::setData(const BasePageInfoMindmapRecycle& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowMindmapRecycleByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowMindmapRecycleByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowMindmapRecycleByPageResponse::getMessage() const
{
    return message_;
}

void ShowMindmapRecycleByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowMindmapRecycleByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowMindmapRecycleByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


