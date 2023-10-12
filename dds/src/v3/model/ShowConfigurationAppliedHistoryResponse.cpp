

#include "huaweicloud/dds/v3/model/ShowConfigurationAppliedHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConfigurationAppliedHistoryResponse::ShowConfigurationAppliedHistoryResponse()
{
    historiesIsSet_ = false;
}

ShowConfigurationAppliedHistoryResponse::~ShowConfigurationAppliedHistoryResponse() = default;

void ShowConfigurationAppliedHistoryResponse::validate()
{
}

web::json::value ShowConfigurationAppliedHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ShowConfigurationAppliedHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyHistoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


std::vector<ApplyHistoryInfo>& ShowConfigurationAppliedHistoryResponse::getHistories()
{
    return histories_;
}

void ShowConfigurationAppliedHistoryResponse::setHistories(const std::vector<ApplyHistoryInfo>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ShowConfigurationAppliedHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ShowConfigurationAppliedHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


