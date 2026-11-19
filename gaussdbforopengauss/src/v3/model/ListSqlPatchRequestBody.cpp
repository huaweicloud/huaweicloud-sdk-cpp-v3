

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlPatchRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlPatchRequestBody::ListSqlPatchRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    queryInfoIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSqlPatchRequestBody::~ListSqlPatchRequestBody() = default;

void ListSqlPatchRequestBody::validate()
{
}

web::json::value ListSqlPatchRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(queryInfoIsSet_) {
        val[utility::conversions::to_string_t("query_info")] = ModelBase::toJson(queryInfo_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSqlPatchRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_info"));
        if(!fieldValue.is_null())
        {
            SqlPatchQueryInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryInfo(refVal);
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


std::string ListSqlPatchRequestBody::getInstanceId() const
{
    return instanceId_;
}

void ListSqlPatchRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlPatchRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlPatchRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlPatchQueryInfoOption ListSqlPatchRequestBody::getQueryInfo() const
{
    return queryInfo_;
}

void ListSqlPatchRequestBody::setQueryInfo(const SqlPatchQueryInfoOption& value)
{
    queryInfo_ = value;
    queryInfoIsSet_ = true;
}

bool ListSqlPatchRequestBody::queryInfoIsSet() const
{
    return queryInfoIsSet_;
}

void ListSqlPatchRequestBody::unsetqueryInfo()
{
    queryInfoIsSet_ = false;
}

int32_t ListSqlPatchRequestBody::getOffset() const
{
    return offset_;
}

void ListSqlPatchRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlPatchRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlPatchRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSqlPatchRequestBody::getLimit() const
{
    return limit_;
}

void ListSqlPatchRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlPatchRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlPatchRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


