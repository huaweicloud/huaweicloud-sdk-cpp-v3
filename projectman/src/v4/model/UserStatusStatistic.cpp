

#include "huaweicloud/projectman/v4/model/UserStatusStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UserStatusStatistic::UserStatusStatistic()
{
    userIsSet_ = false;
    itemCount_ = 0;
    itemCountIsSet_ = false;
    dataIsSet_ = false;
}

UserStatusStatistic::~UserStatusStatistic() = default;

void UserStatusStatistic::validate()
{
}

web::json::value UserStatusStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(itemCountIsSet_) {
        val[utility::conversions::to_string_t("item_count")] = ModelBase::toJson(itemCount_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool UserStatusStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IssueUser UserStatusStatistic::getUser() const
{
    return user_;
}

void UserStatusStatistic::setUser(const IssueUser& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool UserStatusStatistic::userIsSet() const
{
    return userIsSet_;
}

void UserStatusStatistic::unsetuser()
{
    userIsSet_ = false;
}

int32_t UserStatusStatistic::getItemCount() const
{
    return itemCount_;
}

void UserStatusStatistic::setItemCount(int32_t value)
{
    itemCount_ = value;
    itemCountIsSet_ = true;
}

bool UserStatusStatistic::itemCountIsSet() const
{
    return itemCountIsSet_;
}

void UserStatusStatistic::unsetitemCount()
{
    itemCountIsSet_ = false;
}

std::map<std::string, int32_t>& UserStatusStatistic::getData()
{
    return data_;
}

void UserStatusStatistic::setData(std::map<std::string, int32_t> value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UserStatusStatistic::dataIsSet() const
{
    return dataIsSet_;
}

void UserStatusStatistic::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


