

#include "huaweicloud/tics/v1/model/ListAuditInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListAuditInfoResponse::ListAuditInfoResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListAuditInfoResponse::~ListAuditInfoResponse() = default;

void ListAuditInfoResponse::validate()
{
}

web::json::value ListAuditInfoResponse::toJson() const
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
bool ListAuditInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsLeagueAuditLog> refVal;
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


std::vector<TicsLeagueAuditLog>& ListAuditInfoResponse::getLists()
{
    return lists_;
}

void ListAuditInfoResponse::setLists(const std::vector<TicsLeagueAuditLog>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListAuditInfoResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListAuditInfoResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListAuditInfoResponse::getTotal() const
{
    return total_;
}

void ListAuditInfoResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


