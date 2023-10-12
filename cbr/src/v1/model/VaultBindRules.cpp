

#include "huaweicloud/cbr/v1/model/VaultBindRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultBindRules::VaultBindRules()
{
    tagsIsSet_ = false;
}

VaultBindRules::~VaultBindRules() = default;

void VaultBindRules::validate()
{
}

web::json::value VaultBindRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool VaultBindRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BindRulesTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<BindRulesTags>& VaultBindRules::getTags()
{
    return tags_;
}

void VaultBindRules::setTags(const std::vector<BindRulesTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VaultBindRules::tagsIsSet() const
{
    return tagsIsSet_;
}

void VaultBindRules::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


