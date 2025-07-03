

#include "huaweicloud/ecs/v2/model/TemplateTagOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateTagOptions::TemplateTagOptions()
{
    tagsIsSet_ = false;
}

TemplateTagOptions::~TemplateTagOptions() = default;

void TemplateTagOptions::validate()
{
}

web::json::value TemplateTagOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool TemplateTagOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TemplateTag>& TemplateTagOptions::getTags()
{
    return tags_;
}

void TemplateTagOptions::setTags(const std::vector<TemplateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TemplateTagOptions::tagsIsSet() const
{
    return tagsIsSet_;
}

void TemplateTagOptions::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


