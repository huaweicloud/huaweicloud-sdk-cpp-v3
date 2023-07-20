

#include "huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowModifyHistoryResponse::ShowModifyHistoryResponse()
{
    historiesIsSet_ = false;
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

}
}
}
}
}


