

#include "huaweicloud/codeartspipeline/v2/model/CodeEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CodeEvent::CodeEvent()
{
    type_ = "";
    typeIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

CodeEvent::~CodeEvent() = default;

void CodeEvent::validate()
{
}

web::json::value CodeEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool CodeEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::string CodeEvent::getType() const
{
    return type_;
}

void CodeEvent::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CodeEvent::typeIsSet() const
{
    return typeIsSet_;
}

void CodeEvent::unsettype()
{
    typeIsSet_ = false;
}

bool CodeEvent::isEnable() const
{
    return enable_;
}

void CodeEvent::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CodeEvent::enableIsSet() const
{
    return enableIsSet_;
}

void CodeEvent::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


