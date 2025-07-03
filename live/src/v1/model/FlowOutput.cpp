

#include "huaweicloud/live/v1/model/FlowOutput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FlowOutput::FlowOutput()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

FlowOutput::~FlowOutput() = default;

void FlowOutput::validate()
{
}

web::json::value FlowOutput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool FlowOutput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string FlowOutput::getName() const
{
    return name_;
}

void FlowOutput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowOutput::nameIsSet() const
{
    return nameIsSet_;
}

void FlowOutput::unsetname()
{
    nameIsSet_ = false;
}

std::string FlowOutput::getType() const
{
    return type_;
}

void FlowOutput::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FlowOutput::typeIsSet() const
{
    return typeIsSet_;
}

void FlowOutput::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


