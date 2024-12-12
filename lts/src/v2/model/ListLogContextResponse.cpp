

#include "huaweicloud/lts/v2/model/ListLogContextResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogContextResponse::ListLogContextResponse()
{
    logsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    backwardsCount_ = 0;
    backwardsCountIsSet_ = false;
    forwardsCount_ = 0;
    forwardsCountIsSet_ = false;
    isQueryComplete_ = false;
    isQueryCompleteIsSet_ = false;
}

ListLogContextResponse::~ListLogContextResponse() = default;

void ListLogContextResponse::validate()
{
}

web::json::value ListLogContextResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(backwardsCountIsSet_) {
        val[utility::conversions::to_string_t("backwards_count")] = ModelBase::toJson(backwardsCount_);
    }
    if(forwardsCountIsSet_) {
        val[utility::conversions::to_string_t("forwards_count")] = ModelBase::toJson(forwardsCount_);
    }
    if(isQueryCompleteIsSet_) {
        val[utility::conversions::to_string_t("isQueryComplete")] = ModelBase::toJson(isQueryComplete_);
    }

    return val;
}
bool ListLogContextResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<LogContents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backwards_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backwards_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackwardsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forwards_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forwards_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForwardsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isQueryComplete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isQueryComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryComplete(refVal);
        }
    }
    return ok;
}


std::vector<LogContents>& ListLogContextResponse::getLogs()
{
    return logs_;
}

void ListLogContextResponse::setLogs(const std::vector<LogContents>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ListLogContextResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ListLogContextResponse::unsetlogs()
{
    logsIsSet_ = false;
}

int32_t ListLogContextResponse::getTotalCount() const
{
    return totalCount_;
}

void ListLogContextResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListLogContextResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListLogContextResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListLogContextResponse::getBackwardsCount() const
{
    return backwardsCount_;
}

void ListLogContextResponse::setBackwardsCount(int32_t value)
{
    backwardsCount_ = value;
    backwardsCountIsSet_ = true;
}

bool ListLogContextResponse::backwardsCountIsSet() const
{
    return backwardsCountIsSet_;
}

void ListLogContextResponse::unsetbackwardsCount()
{
    backwardsCountIsSet_ = false;
}

int32_t ListLogContextResponse::getForwardsCount() const
{
    return forwardsCount_;
}

void ListLogContextResponse::setForwardsCount(int32_t value)
{
    forwardsCount_ = value;
    forwardsCountIsSet_ = true;
}

bool ListLogContextResponse::forwardsCountIsSet() const
{
    return forwardsCountIsSet_;
}

void ListLogContextResponse::unsetforwardsCount()
{
    forwardsCountIsSet_ = false;
}

bool ListLogContextResponse::isIsQueryComplete() const
{
    return isQueryComplete_;
}

void ListLogContextResponse::setIsQueryComplete(bool value)
{
    isQueryComplete_ = value;
    isQueryCompleteIsSet_ = true;
}

bool ListLogContextResponse::isQueryCompleteIsSet() const
{
    return isQueryCompleteIsSet_;
}

void ListLogContextResponse::unsetisQueryComplete()
{
    isQueryCompleteIsSet_ = false;
}

}
}
}
}
}


