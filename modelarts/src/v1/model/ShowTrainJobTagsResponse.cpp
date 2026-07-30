

#include "huaweicloud/modelarts/v1/model/ShowTrainJobTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainJobTagsResponse::ShowTrainJobTagsResponse()
{
    tagsIsSet_ = false;
}

ShowTrainJobTagsResponse::~ShowTrainJobTagsResponse() = default;

void ShowTrainJobTagsResponse::validate()
{
}

web::json::value ShowTrainJobTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowTrainJobTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TmsTag>& ShowTrainJobTagsResponse::getTags()
{
    return tags_;
}

void ShowTrainJobTagsResponse::setTags(const std::vector<TmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowTrainJobTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowTrainJobTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


