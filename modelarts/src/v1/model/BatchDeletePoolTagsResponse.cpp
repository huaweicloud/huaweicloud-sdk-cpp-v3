

#include "huaweicloud/modelarts/v1/model/BatchDeletePoolTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeletePoolTagsResponse::BatchDeletePoolTagsResponse()
{
    tagsIsSet_ = false;
}

BatchDeletePoolTagsResponse::~BatchDeletePoolTagsResponse() = default;

void BatchDeletePoolTagsResponse::validate()
{
}

web::json::value BatchDeletePoolTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDeletePoolTagsResponse::fromJson(const web::json::value& val)
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


std::vector<PoolTag>& BatchDeletePoolTagsResponse::getTags()
{
    return tags_;
}

void BatchDeletePoolTagsResponse::setTags(const std::vector<PoolTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeletePoolTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeletePoolTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


