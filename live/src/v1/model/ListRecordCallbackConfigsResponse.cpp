

#include "huaweicloud/live/v1/model/ListRecordCallbackConfigsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordCallbackConfigsResponse::ListRecordCallbackConfigsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    callbackConfigIsSet_ = false;
}

ListRecordCallbackConfigsResponse::~ListRecordCallbackConfigsResponse() = default;

void ListRecordCallbackConfigsResponse::validate()
{
}

web::json::value ListRecordCallbackConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }

    return val;
}

bool ListRecordCallbackConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordCallbackConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    return ok;
}

int32_t ListRecordCallbackConfigsResponse::getTotal() const
{
    return total_;
}

void ListRecordCallbackConfigsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRecordCallbackConfigsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRecordCallbackConfigsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RecordCallbackConfig>& ListRecordCallbackConfigsResponse::getCallbackConfig()
{
    return callbackConfig_;
}

void ListRecordCallbackConfigsResponse::setCallbackConfig(const std::vector<RecordCallbackConfig>& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool ListRecordCallbackConfigsResponse::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void ListRecordCallbackConfigsResponse::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}


