

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPredefinedTagsResponse::ListPredefinedTagsResponse()
{
    tagsIsSet_ = false;
}

ListPredefinedTagsResponse::~ListPredefinedTagsResponse() = default;

void ListPredefinedTagsResponse::validate()
{
}

web::json::value ListPredefinedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListPredefinedTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<std::vector<Object>>& ListPredefinedTagsResponse::getTags()
{
    return tags_;
}

void ListPredefinedTagsResponse::setTags(const std::vector<std::vector<Object>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPredefinedTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPredefinedTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


