

#include "huaweicloud/cloudtest/v1/model/DeleteMindmapRecycleByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteMindmapRecycleByIdResponse::DeleteMindmapRecycleByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteMindmapRecycleByIdResponse::~DeleteMindmapRecycleByIdResponse() = default;

void DeleteMindmapRecycleByIdResponse::validate()
{
}

web::json::value DeleteMindmapRecycleByIdResponse::toJson() const
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
bool DeleteMindmapRecycleByIdResponse::fromJson(const web::json::value& val)
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


std::string DeleteMindmapRecycleByIdResponse::getCode() const
{
    return code_;
}

void DeleteMindmapRecycleByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteMindmapRecycleByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteMindmapRecycleByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

Object DeleteMindmapRecycleByIdResponse::getData() const
{
    return data_;
}

void DeleteMindmapRecycleByIdResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteMindmapRecycleByIdResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteMindmapRecycleByIdResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string DeleteMindmapRecycleByIdResponse::getMessage() const
{
    return message_;
}

void DeleteMindmapRecycleByIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteMindmapRecycleByIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteMindmapRecycleByIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


