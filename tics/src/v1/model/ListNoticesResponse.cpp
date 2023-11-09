

#include "huaweicloud/tics/v1/model/ListNoticesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListNoticesResponse::ListNoticesResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListNoticesResponse::~ListNoticesResponse() = default;

void ListNoticesResponse::validate()
{
}

web::json::value ListNoticesResponse::toJson() const
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
bool ListNoticesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsApproveLogVo> refVal;
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


std::vector<TicsApproveLogVo>& ListNoticesResponse::getLists()
{
    return lists_;
}

void ListNoticesResponse::setLists(const std::vector<TicsApproveLogVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListNoticesResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListNoticesResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListNoticesResponse::getTotal() const
{
    return total_;
}

void ListNoticesResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListNoticesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListNoticesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


