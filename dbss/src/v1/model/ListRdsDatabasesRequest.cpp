

#include "huaweicloud/dbss/v1/model/ListRdsDatabasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListRdsDatabasesRequest::ListRdsDatabasesRequest()
{
    dbType_ = "";
    dbTypeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListRdsDatabasesRequest::~ListRdsDatabasesRequest() = default;

void ListRdsDatabasesRequest::validate()
{
}

web::json::value ListRdsDatabasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRdsDatabasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListRdsDatabasesRequest::getDbType() const
{
    return dbType_;
}

void ListRdsDatabasesRequest::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ListRdsDatabasesRequest::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ListRdsDatabasesRequest::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string ListRdsDatabasesRequest::getOffset() const
{
    return offset_;
}

void ListRdsDatabasesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRdsDatabasesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRdsDatabasesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListRdsDatabasesRequest::getLimit() const
{
    return limit_;
}

void ListRdsDatabasesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRdsDatabasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRdsDatabasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


