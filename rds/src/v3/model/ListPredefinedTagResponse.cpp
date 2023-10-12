

#include "huaweicloud/rds/v3/model/ListPredefinedTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPredefinedTagResponse::ListPredefinedTagResponse()
{
    tagsIsSet_ = false;
}

ListPredefinedTagResponse::~ListPredefinedTagResponse() = default;

void ListPredefinedTagResponse::validate()
{
}

web::json::value ListPredefinedTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListPredefinedTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagResp>& ListPredefinedTagResponse::getTags()
{
    return tags_;
}

void ListPredefinedTagResponse::setTags(const std::vector<TagResp>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPredefinedTagResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPredefinedTagResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


