

#include "huaweicloud/gaussdbfornosql/v3/model/CommandInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CommandInfo::CommandInfo()
{
    originName_ = "";
    originNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CommandInfo::~CommandInfo() = default;

void CommandInfo::validate()
{
}

web::json::value CommandInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originNameIsSet_) {
        val[utility::conversions::to_string_t("origin_name")] = ModelBase::toJson(originName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CommandInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string CommandInfo::getOriginName() const
{
    return originName_;
}

void CommandInfo::setOriginName(const std::string& value)
{
    originName_ = value;
    originNameIsSet_ = true;
}

bool CommandInfo::originNameIsSet() const
{
    return originNameIsSet_;
}

void CommandInfo::unsetoriginName()
{
    originNameIsSet_ = false;
}

std::string CommandInfo::getName() const
{
    return name_;
}

void CommandInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CommandInfo::nameIsSet() const
{
    return nameIsSet_;
}

void CommandInfo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


