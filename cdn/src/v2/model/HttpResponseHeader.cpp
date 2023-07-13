

#include "huaweicloud/cdn/v2/model/HttpResponseHeader.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HttpResponseHeader::HttpResponseHeader()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

HttpResponseHeader::~HttpResponseHeader() = default;

void HttpResponseHeader::validate()
{
}

web::json::value HttpResponseHeader::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool HttpResponseHeader::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::string HttpResponseHeader::getName() const
{
    return name_;
}

void HttpResponseHeader::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HttpResponseHeader::nameIsSet() const
{
    return nameIsSet_;
}

void HttpResponseHeader::unsetname()
{
    nameIsSet_ = false;
}

std::string HttpResponseHeader::getValue() const
{
    return value_;
}

void HttpResponseHeader::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool HttpResponseHeader::valueIsSet() const
{
    return valueIsSet_;
}

void HttpResponseHeader::unsetvalue()
{
    valueIsSet_ = false;
}

std::string HttpResponseHeader::getAction() const
{
    return action_;
}

void HttpResponseHeader::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool HttpResponseHeader::actionIsSet() const
{
    return actionIsSet_;
}

void HttpResponseHeader::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


