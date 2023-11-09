

#include "huaweicloud/tics/v1/model/ListLeaguesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListLeaguesResponse::ListLeaguesResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListLeaguesResponse::~ListLeaguesResponse() = default;

void ListLeaguesResponse::validate()
{
}

web::json::value ListLeaguesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listsIsSet_) {
        val[utility::conversions::to_string_t("lists")] = ModelBase::toJson(lists_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListLeaguesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsLeagueListVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLists(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TicsLeagueListVo>& ListLeaguesResponse::getLists()
{
    return lists_;
}

void ListLeaguesResponse::setLists(const std::vector<TicsLeagueListVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListLeaguesResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListLeaguesResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListLeaguesResponse::getTotal() const
{
    return total_;
}

void ListLeaguesResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListLeaguesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListLeaguesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


