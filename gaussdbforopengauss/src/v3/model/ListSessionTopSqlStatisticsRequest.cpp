

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionTopSqlStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionTopSqlStatisticsRequest::ListSessionTopSqlStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSessionTopSqlStatisticsRequest::~ListSessionTopSqlStatisticsRequest() = default;

void ListSessionTopSqlStatisticsRequest::validate()
{
}

web::json::value ListSessionTopSqlStatisticsRequest::toJson() const
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

    return val;
}
bool ListSessionTopSqlStatisticsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListSessionTopSqlStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSessionTopSqlStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSessionTopSqlStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSessionTopSqlStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSessionTopSqlStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSessionTopSqlStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSessionTopSqlStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSessionTopSqlStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSessionTopSqlStatisticsRequest::getOffset() const
{
    return offset_;
}

void ListSessionTopSqlStatisticsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSessionTopSqlStatisticsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSessionTopSqlStatisticsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSessionTopSqlStatisticsRequest::getLimit() const
{
    return limit_;
}

void ListSessionTopSqlStatisticsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSessionTopSqlStatisticsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSessionTopSqlStatisticsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


