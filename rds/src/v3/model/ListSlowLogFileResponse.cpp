

#include "huaweicloud/rds/v3/model/ListSlowLogFileResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogFileResponse::ListSlowLogFileResponse()
{
    listIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListSlowLogFileResponse::~ListSlowLogFileResponse() = default;

void ListSlowLogFileResponse::validate()
{
}

web::json::value ListSlowLogFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListSlowLogFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowLogFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<SlowLogFile>& ListSlowLogFileResponse::getList()
{
    return list_;
}

void ListSlowLogFileResponse::setList(const std::vector<SlowLogFile>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListSlowLogFileResponse::listIsSet() const
{
    return listIsSet_;
}

void ListSlowLogFileResponse::unsetlist()
{
    listIsSet_ = false;
}

int64_t ListSlowLogFileResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSlowLogFileResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSlowLogFileResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSlowLogFileResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


