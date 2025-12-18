

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSchemaVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSchemaVolumesRequest::ListSchemaVolumesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSchemaVolumesRequest::~ListSchemaVolumesRequest() = default;

void ListSchemaVolumesRequest::validate()
{
}

web::json::value ListSchemaVolumesRequest::toJson() const
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
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSchemaVolumesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
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


std::string ListSchemaVolumesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSchemaVolumesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSchemaVolumesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSchemaVolumesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSchemaVolumesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSchemaVolumesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSchemaVolumesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSchemaVolumesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSchemaVolumesRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListSchemaVolumesRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListSchemaVolumesRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListSchemaVolumesRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListSchemaVolumesRequest::getSchemaName() const
{
    return schemaName_;
}

void ListSchemaVolumesRequest::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListSchemaVolumesRequest::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListSchemaVolumesRequest::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

int32_t ListSchemaVolumesRequest::getOffset() const
{
    return offset_;
}

void ListSchemaVolumesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSchemaVolumesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSchemaVolumesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSchemaVolumesRequest::getLimit() const
{
    return limit_;
}

void ListSchemaVolumesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSchemaVolumesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSchemaVolumesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


