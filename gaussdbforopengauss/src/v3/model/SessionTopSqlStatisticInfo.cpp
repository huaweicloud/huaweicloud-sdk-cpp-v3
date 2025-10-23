

#include "huaweicloud/gaussdbforopengauss/v3/model/SessionTopSqlStatisticInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SessionTopSqlStatisticInfo::SessionTopSqlStatisticInfo()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    uniqueSqlId_ = "";
    uniqueSqlIdIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

SessionTopSqlStatisticInfo::~SessionTopSqlStatisticInfo() = default;

void SessionTopSqlStatisticInfo::validate()
{
}

web::json::value SessionTopSqlStatisticInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool SessionTopSqlStatisticInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unique_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string SessionTopSqlStatisticInfo::getNodeName() const
{
    return nodeName_;
}

void SessionTopSqlStatisticInfo::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SessionTopSqlStatisticInfo::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SessionTopSqlStatisticInfo::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string SessionTopSqlStatisticInfo::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void SessionTopSqlStatisticInfo::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool SessionTopSqlStatisticInfo::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void SessionTopSqlStatisticInfo::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string SessionTopSqlStatisticInfo::getQuery() const
{
    return query_;
}

void SessionTopSqlStatisticInfo::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool SessionTopSqlStatisticInfo::queryIsSet() const
{
    return queryIsSet_;
}

void SessionTopSqlStatisticInfo::unsetquery()
{
    queryIsSet_ = false;
}

int32_t SessionTopSqlStatisticInfo::getCount() const
{
    return count_;
}

void SessionTopSqlStatisticInfo::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SessionTopSqlStatisticInfo::countIsSet() const
{
    return countIsSet_;
}

void SessionTopSqlStatisticInfo::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


