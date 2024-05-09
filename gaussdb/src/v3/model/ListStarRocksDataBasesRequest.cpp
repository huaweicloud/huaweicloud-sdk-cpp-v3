

#include "huaweicloud/gaussdb/v3/model/ListStarRocksDataBasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarRocksDataBasesRequest::ListStarRocksDataBasesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
}

ListStarRocksDataBasesRequest::~ListStarRocksDataBasesRequest() = default;

void ListStarRocksDataBasesRequest::validate()
{
}

web::json::value ListStarRocksDataBasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }

    return val;
}
bool ListStarRocksDataBasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    return ok;
}


std::string ListStarRocksDataBasesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListStarRocksDataBasesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListStarRocksDataBasesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListStarRocksDataBasesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListStarRocksDataBasesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListStarRocksDataBasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListStarRocksDataBasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListStarRocksDataBasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListStarRocksDataBasesRequest::getLimit() const
{
    return limit_;
}

void ListStarRocksDataBasesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListStarRocksDataBasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListStarRocksDataBasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListStarRocksDataBasesRequest::getOffset() const
{
    return offset_;
}

void ListStarRocksDataBasesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListStarRocksDataBasesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListStarRocksDataBasesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListStarRocksDataBasesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListStarRocksDataBasesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListStarRocksDataBasesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListStarRocksDataBasesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


