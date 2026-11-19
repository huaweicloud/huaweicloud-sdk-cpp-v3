

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlPatchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlPatchResponse::ListSqlPatchResponse()
{
    sqlPatchInfosIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListSqlPatchResponse::~ListSqlPatchResponse() = default;

void ListSqlPatchResponse::validate()
{
}

web::json::value ListSqlPatchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlPatchInfosIsSet_) {
        val[utility::conversions::to_string_t("sql_patch_infos")] = ModelBase::toJson(sqlPatchInfos_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListSqlPatchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_patch_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_patch_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlPatchInfosResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlPatchInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SqlPatchInfosResult>& ListSqlPatchResponse::getSqlPatchInfos()
{
    return sqlPatchInfos_;
}

void ListSqlPatchResponse::setSqlPatchInfos(const std::vector<SqlPatchInfosResult>& value)
{
    sqlPatchInfos_ = value;
    sqlPatchInfosIsSet_ = true;
}

bool ListSqlPatchResponse::sqlPatchInfosIsSet() const
{
    return sqlPatchInfosIsSet_;
}

void ListSqlPatchResponse::unsetsqlPatchInfos()
{
    sqlPatchInfosIsSet_ = false;
}

int32_t ListSqlPatchResponse::getTotal() const
{
    return total_;
}

void ListSqlPatchResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSqlPatchResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSqlPatchResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


