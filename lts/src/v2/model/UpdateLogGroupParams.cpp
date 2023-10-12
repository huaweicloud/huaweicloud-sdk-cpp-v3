

#include "huaweicloud/lts/v2/model/UpdateLogGroupParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateLogGroupParams::UpdateLogGroupParams()
{
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    tagsIsSet_ = false;
}

UpdateLogGroupParams::~UpdateLogGroupParams() = default;

void UpdateLogGroupParams::validate()
{
}

web::json::value UpdateLogGroupParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool UpdateLogGroupParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


int32_t UpdateLogGroupParams::getTtlInDays() const
{
    return ttlInDays_;
}

void UpdateLogGroupParams::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool UpdateLogGroupParams::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void UpdateLogGroupParams::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::vector<TagsBody>& UpdateLogGroupParams::getTags()
{
    return tags_;
}

void UpdateLogGroupParams::setTags(const std::vector<TagsBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateLogGroupParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateLogGroupParams::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


