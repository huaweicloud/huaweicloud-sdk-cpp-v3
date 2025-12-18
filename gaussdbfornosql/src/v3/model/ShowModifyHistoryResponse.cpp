

#include "huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowModifyHistoryResponse::ShowModifyHistoryResponse()
{
    historiesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowModifyHistoryResponse::~ShowModifyHistoryResponse() = default;

void ShowModifyHistoryResponse::validate()
{
}

web::json::value ShowModifyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowModifyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationHistoryRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ConfigurationHistoryRsp>& ShowModifyHistoryResponse::getHistories()
{
    return histories_;
}

void ShowModifyHistoryResponse::setHistories(const std::vector<ConfigurationHistoryRsp>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ShowModifyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ShowModifyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

int32_t ShowModifyHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowModifyHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowModifyHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowModifyHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


