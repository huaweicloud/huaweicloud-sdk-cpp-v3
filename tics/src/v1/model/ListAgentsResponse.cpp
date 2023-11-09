

#include "huaweicloud/tics/v1/model/ListAgentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListAgentsResponse::ListAgentsResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListAgentsResponse::~ListAgentsResponse() = default;

void ListAgentsResponse::validate()
{
}

web::json::value ListAgentsResponse::toJson() const
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
bool ListAgentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<AgentListVo> refVal;
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


std::vector<AgentListVo>& ListAgentsResponse::getLists()
{
    return lists_;
}

void ListAgentsResponse::setLists(const std::vector<AgentListVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListAgentsResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListAgentsResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListAgentsResponse::getTotal() const
{
    return total_;
}

void ListAgentsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAgentsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAgentsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


