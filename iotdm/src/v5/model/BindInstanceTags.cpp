

#include "huaweicloud/iotdm/v5/model/BindInstanceTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




BindInstanceTags::BindInstanceTags()
{
    tagsIsSet_ = false;
}

BindInstanceTags::~BindInstanceTags() = default;

void BindInstanceTags::validate()
{
}

web::json::value BindInstanceTags::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BindInstanceTags::fromJson(const web::json::value& val)
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


std::vector<Tag>& BindInstanceTags::getTags()
{
    return tags_;
}

void BindInstanceTags::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BindInstanceTags::tagsIsSet() const
{
    return tagsIsSet_;
}

void BindInstanceTags::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


