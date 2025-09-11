

#include "huaweicloud/functiongraph/v2/model/ListFunctionTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTagsResponse::ListFunctionTagsResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ListFunctionTagsResponse::~ListFunctionTagsResponse() = default;

void ListFunctionTagsResponse::validate()
{
}

web::json::value ListFunctionTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ListFunctionTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<KvItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<KvItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<KvItem>& ListFunctionTagsResponse::getTags()
{
    return tags_;
}

void ListFunctionTagsResponse::setTags(const std::vector<KvItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListFunctionTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListFunctionTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<KvItem>& ListFunctionTagsResponse::getSysTags()
{
    return sysTags_;
}

void ListFunctionTagsResponse::setSysTags(const std::vector<KvItem>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListFunctionTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListFunctionTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


