

#include "huaweicloud/tics/v1/model/ListSqlJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListSqlJobResponse::ListSqlJobResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListSqlJobResponse::~ListSqlJobResponse() = default;

void ListSqlJobResponse::validate()
{
}

web::json::value ListSqlJobResponse::toJson() const
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
bool ListSqlJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsSqlJobVo> refVal;
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


std::vector<TicsSqlJobVo>& ListSqlJobResponse::getLists()
{
    return lists_;
}

void ListSqlJobResponse::setLists(const std::vector<TicsSqlJobVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListSqlJobResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListSqlJobResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListSqlJobResponse::getTotal() const
{
    return total_;
}

void ListSqlJobResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSqlJobResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSqlJobResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


