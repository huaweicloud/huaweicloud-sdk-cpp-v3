

#include "huaweicloud/csms/v1/model/ListProjectSecretsTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListProjectSecretsTagsResponse::ListProjectSecretsTagsResponse()
{
    tagsIsSet_ = false;
}

ListProjectSecretsTagsResponse::~ListProjectSecretsTagsResponse() = default;

void ListProjectSecretsTagsResponse::validate()
{
}

web::json::value ListProjectSecretsTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListProjectSecretsTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& ListProjectSecretsTagsResponse::getTags()
{
    return tags_;
}

void ListProjectSecretsTagsResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProjectSecretsTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProjectSecretsTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


