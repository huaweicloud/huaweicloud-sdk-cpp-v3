

#include "huaweicloud/cfw/v1/model/CreateTagsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateTagsDto::CreateTagsDto()
{
    tagsIsSet_ = false;
}

CreateTagsDto::~CreateTagsDto() = default;

void CreateTagsDto::validate()
{
}

web::json::value CreateTagsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateTagsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<CreateTag>& CreateTagsDto::getTags()
{
    return tags_;
}

void CreateTagsDto::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTagsDto::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTagsDto::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


