

#include "huaweicloud/tics/v1/model/ListNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListNodesResponse::ListNodesResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListNodesResponse::~ListNodesResponse() = default;

void ListNodesResponse::validate()
{
}

web::json::value ListNodesResponse::toJson() const
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
bool ListNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsTrustInfoVo> refVal;
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


std::vector<TicsTrustInfoVo>& ListNodesResponse::getLists()
{
    return lists_;
}

void ListNodesResponse::setLists(const std::vector<TicsTrustInfoVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListNodesResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListNodesResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListNodesResponse::getTotal() const
{
    return total_;
}

void ListNodesResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListNodesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListNodesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


