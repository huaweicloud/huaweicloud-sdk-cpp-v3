

#include "huaweicloud/aad/v2/model/InstanceConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




InstanceConfig::InstanceConfig()
{
    tagsIsSet_ = false;
    freezeTypeIsSet_ = false;
}

InstanceConfig::~InstanceConfig() = default;

void InstanceConfig::validate()
{
}

web::json::value InstanceConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(freezeTypeIsSet_) {
        val[utility::conversions::to_string_t("freeze_type")] = ModelBase::toJson(freezeType_);
    }

    return val;
}
bool InstanceConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freeze_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freeze_type"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezeType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& InstanceConfig::getTags()
{
    return tags_;
}

void InstanceConfig::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InstanceConfig::tagsIsSet() const
{
    return tagsIsSet_;
}

void InstanceConfig::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<int32_t>& InstanceConfig::getFreezeType()
{
    return freezeType_;
}

void InstanceConfig::setFreezeType(std::vector<int32_t> value)
{
    freezeType_ = value;
    freezeTypeIsSet_ = true;
}

bool InstanceConfig::freezeTypeIsSet() const
{
    return freezeTypeIsSet_;
}

void InstanceConfig::unsetfreezeType()
{
    freezeTypeIsSet_ = false;
}

}
}
}
}
}


