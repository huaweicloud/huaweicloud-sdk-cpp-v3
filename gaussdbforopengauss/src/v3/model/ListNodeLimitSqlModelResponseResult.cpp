

#include "huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelResponseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListNodeLimitSqlModelResponseResult::ListNodeLimitSqlModelResponseResult()
{
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlModel_ = "";
    sqlModelIsSet_ = false;
}

ListNodeLimitSqlModelResponseResult::~ListNodeLimitSqlModelResponseResult() = default;

void ListNodeLimitSqlModelResponseResult::validate()
{
}

web::json::value ListNodeLimitSqlModelResponseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
    }

    return val;
}
bool ListNodeLimitSqlModelResponseResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
        }
    }
    return ok;
}


std::string ListNodeLimitSqlModelResponseResult::getSqlId() const
{
    return sqlId_;
}

void ListNodeLimitSqlModelResponseResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListNodeLimitSqlModelResponseResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListNodeLimitSqlModelResponseResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListNodeLimitSqlModelResponseResult::getSqlModel() const
{
    return sqlModel_;
}

void ListNodeLimitSqlModelResponseResult::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool ListNodeLimitSqlModelResponseResult::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void ListNodeLimitSqlModelResponseResult::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

}
}
}
}
}


