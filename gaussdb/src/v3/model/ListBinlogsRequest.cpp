

#include "huaweicloud/gaussdb/v3/model/ListBinlogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListBinlogsRequest::ListBinlogsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListBinlogsRequest::~ListBinlogsRequest() = default;

void ListBinlogsRequest::validate()
{
}

web::json::value ListBinlogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListBinlogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListBinlogsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListBinlogsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListBinlogsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListBinlogsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListBinlogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBinlogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBinlogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBinlogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListBinlogsRequest::getOffset() const
{
    return offset_;
}

void ListBinlogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBinlogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBinlogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBinlogsRequest::getLimit() const
{
    return limit_;
}

void ListBinlogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBinlogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBinlogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBinlogsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListBinlogsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListBinlogsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListBinlogsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListBinlogsRequest::getEndTime() const
{
    return endTime_;
}

void ListBinlogsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBinlogsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBinlogsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


