

#include "huaweicloud/dbss/v1/model/ListAuditTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditTagsResponse::ListAuditTagsResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ListAuditTagsResponse::~ListAuditTagsResponse() = default;

void ListAuditTagsResponse::validate()
{
}

web::json::value ListAuditTagsResponse::toJson() const
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
bool ListAuditTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagInfoBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagInfoBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTagInfoBean>& ListAuditTagsResponse::getTags()
{
    return tags_;
}

void ListAuditTagsResponse::setTags(const std::vector<ResourceTagInfoBean>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListAuditTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListAuditTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTagInfoBean>& ListAuditTagsResponse::getSysTags()
{
    return sysTags_;
}

void ListAuditTagsResponse::setSysTags(const std::vector<ResourceTagInfoBean>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListAuditTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListAuditTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


