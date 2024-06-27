

#include "huaweicloud/cfw/v1/model/DeleteTagsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteTagsDto::DeleteTagsDto()
{
    tagsIsSet_ = false;
}

DeleteTagsDto::~DeleteTagsDto() = default;

void DeleteTagsDto::validate()
{
}

web::json::value DeleteTagsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool DeleteTagsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTag>& DeleteTagsDto::getTags()
{
    return tags_;
}

void DeleteTagsDto::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteTagsDto::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteTagsDto::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


