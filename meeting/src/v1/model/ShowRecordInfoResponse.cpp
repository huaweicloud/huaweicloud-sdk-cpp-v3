

#include "huaweicloud/meeting/v1/model/ShowRecordInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordInfoResponse::ShowRecordInfoResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    dataIsSet_ = false;
}

ShowRecordInfoResponse::~ShowRecordInfoResponse() = default;

void ShowRecordInfoResponse::validate()
{
}

web::json::value ShowRecordInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowRecordInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RecordInfoDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string ShowRecordInfoResponse::getCode() const
{
    return code_;
}

void ShowRecordInfoResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowRecordInfoResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowRecordInfoResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ShowRecordInfoResponse::getMessage() const
{
    return message_;
}

void ShowRecordInfoResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowRecordInfoResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowRecordInfoResponse::unsetmessage()
{
    messageIsSet_ = false;
}

RecordInfoDO ShowRecordInfoResponse::getData() const
{
    return data_;
}

void ShowRecordInfoResponse::setData(const RecordInfoDO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowRecordInfoResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowRecordInfoResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


