

#include "huaweicloud/iotdm/v5/model/UnbindInstanceTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UnbindInstanceTags::UnbindInstanceTags()
{
    tagsIsSet_ = false;
}

UnbindInstanceTags::~UnbindInstanceTags() = default;

void UnbindInstanceTags::validate()
{
}

web::json::value UnbindInstanceTags::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool UnbindInstanceTags::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& UnbindInstanceTags::getTags()
{
    return tags_;
}

void UnbindInstanceTags::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UnbindInstanceTags::tagsIsSet() const
{
    return tagsIsSet_;
}

void UnbindInstanceTags::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


