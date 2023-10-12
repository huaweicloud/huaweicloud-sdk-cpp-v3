

#include "huaweicloud/drs/v5/model/ListAsyncJobDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListAsyncJobDetailRequest::ListAsyncJobDetailRequest()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAsyncJobDetailRequest::~ListAsyncJobDetailRequest() = default;

void ListAsyncJobDetailRequest::validate()
{
}

web::json::value ListAsyncJobDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAsyncJobDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListAsyncJobDetailRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void ListAsyncJobDetailRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool ListAsyncJobDetailRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void ListAsyncJobDetailRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string ListAsyncJobDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAsyncJobDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAsyncJobDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAsyncJobDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListAsyncJobDetailRequest::getOffset() const
{
    return offset_;
}

void ListAsyncJobDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAsyncJobDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAsyncJobDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAsyncJobDetailRequest::getLimit() const
{
    return limit_;
}

void ListAsyncJobDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAsyncJobDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAsyncJobDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


