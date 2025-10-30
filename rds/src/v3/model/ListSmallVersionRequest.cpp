

#include "huaweicloud/rds/v3/model/ListSmallVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSmallVersionRequest::ListSmallVersionRequest()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSmallVersionRequest::~ListSmallVersionRequest() = default;

void ListSmallVersionRequest::validate()
{
}

web::json::value ListSmallVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSmallVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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


std::string ListSmallVersionRequest::getDatabaseName() const
{
    return databaseName_;
}

void ListSmallVersionRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool ListSmallVersionRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void ListSmallVersionRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string ListSmallVersionRequest::getVersion() const
{
    return version_;
}

void ListSmallVersionRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListSmallVersionRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListSmallVersionRequest::unsetversion()
{
    versionIsSet_ = false;
}

int32_t ListSmallVersionRequest::getOffset() const
{
    return offset_;
}

void ListSmallVersionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmallVersionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmallVersionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmallVersionRequest::getLimit() const
{
    return limit_;
}

void ListSmallVersionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmallVersionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmallVersionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


