

#include "huaweicloud/gaussdbforopengauss/v3/model/QuerySqlPlanStateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




QuerySqlPlanStateRequest::QuerySqlPlanStateRequest()
{
    sqlId_ = "";
    sqlIdIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
}

QuerySqlPlanStateRequest::~QuerySqlPlanStateRequest() = default;

void QuerySqlPlanStateRequest::validate()
{
}

web::json::value QuerySqlPlanStateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool QuerySqlPlanStateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    return ok;
}


std::string QuerySqlPlanStateRequest::getSqlId() const
{
    return sqlId_;
}

void QuerySqlPlanStateRequest::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool QuerySqlPlanStateRequest::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void QuerySqlPlanStateRequest::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string QuerySqlPlanStateRequest::getPageSize() const
{
    return pageSize_;
}

void QuerySqlPlanStateRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QuerySqlPlanStateRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QuerySqlPlanStateRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string QuerySqlPlanStateRequest::getOffset() const
{
    return offset_;
}

void QuerySqlPlanStateRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QuerySqlPlanStateRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void QuerySqlPlanStateRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


