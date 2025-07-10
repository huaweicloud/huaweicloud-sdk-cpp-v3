

#include "huaweicloud/metastudio/v1/model/ListSmartChatJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartChatJobResponse::ListSmartChatJobResponse()
{
    count_ = 0;
    countIsSet_ = false;
    smartChatJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartChatJobResponse::~ListSmartChatJobResponse() = default;

void ListSmartChatJobResponse::validate()
{
}

web::json::value ListSmartChatJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(smartChatJobsIsSet_) {
        val[utility::conversions::to_string_t("smart_chat_jobs")] = ModelBase::toJson(smartChatJobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartChatJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smart_chat_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smart_chat_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartChatJobBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmartChatJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListSmartChatJobResponse::getCount() const
{
    return count_;
}

void ListSmartChatJobResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartChatJobResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartChatJobResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SmartChatJobBaseInfo>& ListSmartChatJobResponse::getSmartChatJobs()
{
    return smartChatJobs_;
}

void ListSmartChatJobResponse::setSmartChatJobs(const std::vector<SmartChatJobBaseInfo>& value)
{
    smartChatJobs_ = value;
    smartChatJobsIsSet_ = true;
}

bool ListSmartChatJobResponse::smartChatJobsIsSet() const
{
    return smartChatJobsIsSet_;
}

void ListSmartChatJobResponse::unsetsmartChatJobs()
{
    smartChatJobsIsSet_ = false;
}

std::string ListSmartChatJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartChatJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartChatJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartChatJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


