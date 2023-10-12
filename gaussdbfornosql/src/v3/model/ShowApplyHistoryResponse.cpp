

#include "huaweicloud/gaussdbfornosql/v3/model/ShowApplyHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApplyHistoryResponse::ShowApplyHistoryResponse()
{
    historiesIsSet_ = false;
}

ShowApplyHistoryResponse::~ShowApplyHistoryResponse() = default;

void ShowApplyHistoryResponse::validate()
{
}

web::json::value ShowApplyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ShowApplyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyHistoryRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


std::vector<ApplyHistoryRsp>& ShowApplyHistoryResponse::getHistories()
{
    return histories_;
}

void ShowApplyHistoryResponse::setHistories(const std::vector<ApplyHistoryRsp>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ShowApplyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ShowApplyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


