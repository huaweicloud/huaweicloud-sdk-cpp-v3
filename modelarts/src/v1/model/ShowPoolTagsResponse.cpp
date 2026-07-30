

#include "huaweicloud/modelarts/v1/model/ShowPoolTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolTagsResponse::ShowPoolTagsResponse()
{
    tagsIsSet_ = false;
}

ShowPoolTagsResponse::~ShowPoolTagsResponse() = default;

void ShowPoolTagsResponse::validate()
{
}

web::json::value ShowPoolTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowPoolTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<PoolTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<PoolTag>& ShowPoolTagsResponse::getTags()
{
    return tags_;
}

void ShowPoolTagsResponse::setTags(const std::vector<PoolTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowPoolTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowPoolTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


