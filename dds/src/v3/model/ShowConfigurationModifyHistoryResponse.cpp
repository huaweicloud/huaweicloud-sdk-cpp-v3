

#include "huaweicloud/dds/v3/model/ShowConfigurationModifyHistoryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConfigurationModifyHistoryResponse::ShowConfigurationModifyHistoryResponse()
{
    historiesIsSet_ = false;
}

ShowConfigurationModifyHistoryResponse::~ShowConfigurationModifyHistoryResponse() = default;

void ShowConfigurationModifyHistoryResponse::validate()
{
}

web::json::value ShowConfigurationModifyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}

bool ShowConfigurationModifyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}

std::vector<HistoryInfo>& ShowConfigurationModifyHistoryResponse::getHistories()
{
    return histories_;
}

void ShowConfigurationModifyHistoryResponse::setHistories(const std::vector<HistoryInfo>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ShowConfigurationModifyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ShowConfigurationModifyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


