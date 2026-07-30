

#include "huaweicloud/modelarts/v1/model/ListPoolTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolTagsResponse::ListPoolTagsResponse()
{
    tagsIsSet_ = false;
}

ListPoolTagsResponse::~ListPoolTagsResponse() = default;

void ListPoolTagsResponse::validate()
{
}

web::json::value ListPoolTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListPoolTagsResponse::fromJson(const web::json::value& val)
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


std::vector<PoolTag>& ListPoolTagsResponse::getTags()
{
    return tags_;
}

void ListPoolTagsResponse::setTags(const std::vector<PoolTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPoolTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPoolTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


