

#include "huaweicloud/cfw/v1/model/AccessTopMemberVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessTopMemberVO::AccessTopMemberVO()
{
    count_ = "";
    countIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AccessTopMemberVO::~AccessTopMemberVO() = default;

void AccessTopMemberVO::validate()
{
}

web::json::value AccessTopMemberVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AccessTopMemberVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string AccessTopMemberVO::getCount() const
{
    return count_;
}

void AccessTopMemberVO::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AccessTopMemberVO::countIsSet() const
{
    return countIsSet_;
}

void AccessTopMemberVO::unsetcount()
{
    countIsSet_ = false;
}

std::string AccessTopMemberVO::getItem() const
{
    return item_;
}

void AccessTopMemberVO::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool AccessTopMemberVO::itemIsSet() const
{
    return itemIsSet_;
}

void AccessTopMemberVO::unsetitem()
{
    itemIsSet_ = false;
}

std::string AccessTopMemberVO::getName() const
{
    return name_;
}

void AccessTopMemberVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AccessTopMemberVO::nameIsSet() const
{
    return nameIsSet_;
}

void AccessTopMemberVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


