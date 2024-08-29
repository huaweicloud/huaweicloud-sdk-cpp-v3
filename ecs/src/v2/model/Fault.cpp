

#include "huaweicloud/ecs/v2/model/Fault.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Fault::Fault()
{
    code_ = 0;
    codeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    details_ = "";
    detailsIsSet_ = false;
}

Fault::~Fault() = default;

void Fault::validate()
{
}

web::json::value Fault::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }

    return val;
}
bool Fault::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    return ok;
}


int32_t Fault::getCode() const
{
    return code_;
}

void Fault::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool Fault::codeIsSet() const
{
    return codeIsSet_;
}

void Fault::unsetcode()
{
    codeIsSet_ = false;
}

std::string Fault::getCreated() const
{
    return created_;
}

void Fault::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool Fault::createdIsSet() const
{
    return createdIsSet_;
}

void Fault::unsetcreated()
{
    createdIsSet_ = false;
}

std::string Fault::getMessage() const
{
    return message_;
}

void Fault::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Fault::messageIsSet() const
{
    return messageIsSet_;
}

void Fault::unsetmessage()
{
    messageIsSet_ = false;
}

std::string Fault::getDetails() const
{
    return details_;
}

void Fault::setDetails(const std::string& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool Fault::detailsIsSet() const
{
    return detailsIsSet_;
}

void Fault::unsetdetails()
{
    detailsIsSet_ = false;
}

}
}
}
}
}


