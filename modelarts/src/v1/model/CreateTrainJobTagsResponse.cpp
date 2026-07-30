

#include "huaweicloud/modelarts/v1/model/CreateTrainJobTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainJobTagsResponse::CreateTrainJobTagsResponse()
{
    tagsIsSet_ = false;
}

CreateTrainJobTagsResponse::~CreateTrainJobTagsResponse() = default;

void CreateTrainJobTagsResponse::validate()
{
}

web::json::value CreateTrainJobTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateTrainJobTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTagResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TmsTagResp>& CreateTrainJobTagsResponse::getTags()
{
    return tags_;
}

void CreateTrainJobTagsResponse::setTags(const std::vector<TmsTagResp>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTrainJobTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTrainJobTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


