

#include "huaweicloud/gaussdb/v3/model/ListClickHouseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseInstanceRequest::ListClickHouseInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    clickhouseInstanceId_ = "";
    clickhouseInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListClickHouseInstanceRequest::~ListClickHouseInstanceRequest() = default;

void ListClickHouseInstanceRequest::validate()
{
}

web::json::value ListClickHouseInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(clickhouseInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("clickhouse_instance_id")] = ModelBase::toJson(clickhouseInstanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListClickHouseInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("clickhouse_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clickhouse_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClickhouseInstanceId(refVal);
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


std::string ListClickHouseInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void ListClickHouseInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListClickHouseInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListClickHouseInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListClickHouseInstanceRequest::getClickhouseInstanceId() const
{
    return clickhouseInstanceId_;
}

void ListClickHouseInstanceRequest::setClickhouseInstanceId(const std::string& value)
{
    clickhouseInstanceId_ = value;
    clickhouseInstanceIdIsSet_ = true;
}

bool ListClickHouseInstanceRequest::clickhouseInstanceIdIsSet() const
{
    return clickhouseInstanceIdIsSet_;
}

void ListClickHouseInstanceRequest::unsetclickhouseInstanceId()
{
    clickhouseInstanceIdIsSet_ = false;
}

std::string ListClickHouseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListClickHouseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListClickHouseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListClickHouseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


