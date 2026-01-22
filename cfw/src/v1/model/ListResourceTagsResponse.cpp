

#include "huaweicloud/cfw/v1/model/ListResourceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListResourceTagsResponse::ListResourceTagsResponse()
{
    data_ = "";
    dataIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ListResourceTagsResponse::~ListResourceTagsResponse() = default;

void ListResourceTagsResponse::validate()
{
}

web::json::value ListResourceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ListResourceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::string ListResourceTagsResponse::getData() const
{
    return data_;
}

void ListResourceTagsResponse::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListResourceTagsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListResourceTagsResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::vector<ResourceTag>& ListResourceTagsResponse::getTags()
{
    return tags_;
}

void ListResourceTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTag>& ListResourceTagsResponse::getSysTags()
{
    return sysTags_;
}

void ListResourceTagsResponse::setSysTags(const std::vector<ResourceTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListResourceTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListResourceTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


