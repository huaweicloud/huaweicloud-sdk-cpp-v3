

#include "huaweicloud/tics/v1/model/ListInstanceHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListInstanceHistoryResponse::ListInstanceHistoryResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListInstanceHistoryResponse::~ListInstanceHistoryResponse() = default;

void ListInstanceHistoryResponse::validate()
{
}

web::json::value ListInstanceHistoryResponse::toJson() const
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
bool ListInstanceHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsJobInstanceVo> refVal;
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


std::vector<TicsJobInstanceVo>& ListInstanceHistoryResponse::getLists()
{
    return lists_;
}

void ListInstanceHistoryResponse::setLists(const std::vector<TicsJobInstanceVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListInstanceHistoryResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListInstanceHistoryResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListInstanceHistoryResponse::getTotal() const
{
    return total_;
}

void ListInstanceHistoryResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInstanceHistoryResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInstanceHistoryResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


