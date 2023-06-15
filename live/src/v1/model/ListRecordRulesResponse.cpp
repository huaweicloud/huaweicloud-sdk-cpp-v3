

#include "huaweicloud/live/v1/model/ListRecordRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordRulesResponse::ListRecordRulesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    recordConfigIsSet_ = false;
}

ListRecordRulesResponse::~ListRecordRulesResponse() = default;

void ListRecordRulesResponse::validate()
{
}

web::json::value ListRecordRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordConfigIsSet_) {
        val[utility::conversions::to_string_t("record_config")] = ModelBase::toJson(recordConfig_);
    }

    return val;
}

bool ListRecordRulesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_config"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordConfig(refVal);
        }
    }
    return ok;
}


int32_t ListRecordRulesResponse::getTotal() const
{
    return total_;
}

void ListRecordRulesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRecordRulesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRecordRulesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RecordRule>& ListRecordRulesResponse::getRecordConfig()
{
    return recordConfig_;
}

void ListRecordRulesResponse::setRecordConfig(const std::vector<RecordRule>& value)
{
    recordConfig_ = value;
    recordConfigIsSet_ = true;
}

bool ListRecordRulesResponse::recordConfigIsSet() const
{
    return recordConfigIsSet_;
}

void ListRecordRulesResponse::unsetrecordConfig()
{
    recordConfigIsSet_ = false;
}

}
}
}
}
}


