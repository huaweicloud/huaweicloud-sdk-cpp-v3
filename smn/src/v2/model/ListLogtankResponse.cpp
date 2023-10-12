

#include "huaweicloud/smn/v2/model/ListLogtankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListLogtankResponse::ListLogtankResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    logtanksIsSet_ = false;
}

ListLogtankResponse::~ListLogtankResponse() = default;

void ListLogtankResponse::validate()
{
}

web::json::value ListLogtankResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(logtanksIsSet_) {
        val[utility::conversions::to_string_t("logtanks")] = ModelBase::toJson(logtanks_);
    }

    return val;
}
bool ListLogtankResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logtanks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtanks"));
        if(!fieldValue.is_null())
        {
            std::vector<LogtankItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtanks(refVal);
        }
    }
    return ok;
}


std::string ListLogtankResponse::getRequestId() const
{
    return requestId_;
}

void ListLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListLogtankResponse::getCount() const
{
    return count_;
}

void ListLogtankResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListLogtankResponse::countIsSet() const
{
    return countIsSet_;
}

void ListLogtankResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<LogtankItem>& ListLogtankResponse::getLogtanks()
{
    return logtanks_;
}

void ListLogtankResponse::setLogtanks(const std::vector<LogtankItem>& value)
{
    logtanks_ = value;
    logtanksIsSet_ = true;
}

bool ListLogtankResponse::logtanksIsSet() const
{
    return logtanksIsSet_;
}

void ListLogtankResponse::unsetlogtanks()
{
    logtanksIsSet_ = false;
}

}
}
}
}
}


