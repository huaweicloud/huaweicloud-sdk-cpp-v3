

#include "huaweicloud/rds/v3/model/ListPostgresqlExtensionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlExtensionRequest::ListPostgresqlExtensionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPostgresqlExtensionRequest::~ListPostgresqlExtensionRequest() = default;

void ListPostgresqlExtensionRequest::validate()
{
}

web::json::value ListPostgresqlExtensionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPostgresqlExtensionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
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


std::string ListPostgresqlExtensionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPostgresqlExtensionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPostgresqlExtensionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPostgresqlExtensionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPostgresqlExtensionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPostgresqlExtensionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPostgresqlExtensionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPostgresqlExtensionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPostgresqlExtensionRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListPostgresqlExtensionRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListPostgresqlExtensionRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListPostgresqlExtensionRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

int32_t ListPostgresqlExtensionRequest::getOffset() const
{
    return offset_;
}

void ListPostgresqlExtensionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPostgresqlExtensionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPostgresqlExtensionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPostgresqlExtensionRequest::getLimit() const
{
    return limit_;
}

void ListPostgresqlExtensionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPostgresqlExtensionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPostgresqlExtensionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


