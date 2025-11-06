

#include "huaweicloud/codeartsrepo/v3/model/TagList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




TagList::TagList()
{
    tagsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

TagList::~TagList() = default;

void TagList::validate()
{
}

web::json::value TagList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool TagList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& TagList::getTags()
{
    return tags_;
}

void TagList::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TagList::tagsIsSet() const
{
    return tagsIsSet_;
}

void TagList::unsettags()
{
    tagsIsSet_ = false;
}

int32_t TagList::getTotal() const
{
    return total_;
}

void TagList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TagList::totalIsSet() const
{
    return totalIsSet_;
}

void TagList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


