

#include "huaweicloud/gaussdb/v3/model/ListClickHouseDataBaseReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseDataBaseReplicationRequest::ListClickHouseDataBaseReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseDataBaseReplicationRequest::~ListClickHouseDataBaseReplicationRequest() = default;

void ListClickHouseDataBaseReplicationRequest::validate()
{
}

web::json::value ListClickHouseDataBaseReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListClickHouseDataBaseReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


std::string ListClickHouseDataBaseReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseDataBaseReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseDataBaseReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListClickHouseDataBaseReplicationRequest::getLimit() const
{
    return limit_;
}

void ListClickHouseDataBaseReplicationRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListClickHouseDataBaseReplicationRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListClickHouseDataBaseReplicationRequest::getOffset() const
{
    return offset_;
}

void ListClickHouseDataBaseReplicationRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListClickHouseDataBaseReplicationRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListClickHouseDataBaseReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseDataBaseReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseDataBaseReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseDataBaseReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


