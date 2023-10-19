

#include "huaweicloud/gaussdb/v3/model/ListModifyHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListModifyHistoryResponse::ListModifyHistoryResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListModifyHistoryResponse::~ListModifyHistoryResponse() = default;

void ListModifyHistoryResponse::validate()
{
}

web::json::value ListModifyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ListModifyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamGroupHistoryResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


int32_t ListModifyHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListModifyHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListModifyHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListModifyHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ParamGroupHistoryResponse>& ListModifyHistoryResponse::getHistories()
{
    return histories_;
}

void ListModifyHistoryResponse::setHistories(const std::vector<ParamGroupHistoryResponse>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListModifyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListModifyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


