

#include "huaweicloud/modelarts/v1/model/ShowInferServiceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferServiceTagsResponse::ShowInferServiceTagsResponse()
{
    tagsIsSet_ = false;
}

ShowInferServiceTagsResponse::~ShowInferServiceTagsResponse() = default;

void ShowInferServiceTagsResponse::validate()
{
}

web::json::value ShowInferServiceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowInferServiceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<InferTmsTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<InferTmsTag>& ShowInferServiceTagsResponse::getTags()
{
    return tags_;
}

void ShowInferServiceTagsResponse::setTags(const std::vector<InferTmsTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowInferServiceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowInferServiceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


