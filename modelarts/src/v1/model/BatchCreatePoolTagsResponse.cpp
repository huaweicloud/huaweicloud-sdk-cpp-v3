

#include "huaweicloud/modelarts/v1/model/BatchCreatePoolTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchCreatePoolTagsResponse::BatchCreatePoolTagsResponse()
{
    tagsIsSet_ = false;
}

BatchCreatePoolTagsResponse::~BatchCreatePoolTagsResponse() = default;

void BatchCreatePoolTagsResponse::validate()
{
}

web::json::value BatchCreatePoolTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchCreatePoolTagsResponse::fromJson(const web::json::value& val)
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


std::vector<PoolTag>& BatchCreatePoolTagsResponse::getTags()
{
    return tags_;
}

void BatchCreatePoolTagsResponse::setTags(const std::vector<PoolTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreatePoolTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreatePoolTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


