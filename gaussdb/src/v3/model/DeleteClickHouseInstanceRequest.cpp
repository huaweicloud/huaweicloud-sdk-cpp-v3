

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseInstanceRequest::DeleteClickHouseInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    clickhouseInstanceId_ = "";
    clickhouseInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteClickHouseInstanceRequest::~DeleteClickHouseInstanceRequest() = default;

void DeleteClickHouseInstanceRequest::validate()
{
}

web::json::value DeleteClickHouseInstanceRequest::toJson() const
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
bool DeleteClickHouseInstanceRequest::fromJson(const web::json::value& val)
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


std::string DeleteClickHouseInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteClickHouseInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteClickHouseInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteClickHouseInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteClickHouseInstanceRequest::getClickhouseInstanceId() const
{
    return clickhouseInstanceId_;
}

void DeleteClickHouseInstanceRequest::setClickhouseInstanceId(const std::string& value)
{
    clickhouseInstanceId_ = value;
    clickhouseInstanceIdIsSet_ = true;
}

bool DeleteClickHouseInstanceRequest::clickhouseInstanceIdIsSet() const
{
    return clickhouseInstanceIdIsSet_;
}

void DeleteClickHouseInstanceRequest::unsetclickhouseInstanceId()
{
    clickhouseInstanceIdIsSet_ = false;
}

std::string DeleteClickHouseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClickHouseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClickHouseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClickHouseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


