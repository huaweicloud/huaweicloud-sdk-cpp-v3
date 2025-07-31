

#include "huaweicloud/cfw/v1/model/TopInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TopInfo::TopInfo()
{
    count_ = 0L;
    countIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
    itemId_ = "";
    itemIdIsSet_ = false;
}

TopInfo::~TopInfo() = default;

void TopInfo::validate()
{
}

web::json::value TopInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }

    return val;
}
bool TopInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
        }
    }
    return ok;
}


int64_t TopInfo::getCount() const
{
    return count_;
}

void TopInfo::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool TopInfo::countIsSet() const
{
    return countIsSet_;
}

void TopInfo::unsetcount()
{
    countIsSet_ = false;
}

std::string TopInfo::getItem() const
{
    return item_;
}

void TopInfo::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool TopInfo::itemIsSet() const
{
    return itemIsSet_;
}

void TopInfo::unsetitem()
{
    itemIsSet_ = false;
}

std::string TopInfo::getItemId() const
{
    return itemId_;
}

void TopInfo::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool TopInfo::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void TopInfo::unsetitemId()
{
    itemIdIsSet_ = false;
}

}
}
}
}
}


