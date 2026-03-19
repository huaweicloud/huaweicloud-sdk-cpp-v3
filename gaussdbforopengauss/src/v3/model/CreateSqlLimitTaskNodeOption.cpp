

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskNodeOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateSqlLimitTaskNodeOption::CreateSqlLimitTaskNodeOption()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlIdsIsSet_ = false;
}

CreateSqlLimitTaskNodeOption::~CreateSqlLimitTaskNodeOption() = default;

void CreateSqlLimitTaskNodeOption::validate()
{
}

web::json::value CreateSqlLimitTaskNodeOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlIdsIsSet_) {
        val[utility::conversions::to_string_t("sql_ids")] = ModelBase::toJson(sqlIds_);
    }

    return val;
}
bool CreateSqlLimitTaskNodeOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlIds(refVal);
        }
    }
    return ok;
}


std::string CreateSqlLimitTaskNodeOption::getNodeId() const
{
    return nodeId_;
}

void CreateSqlLimitTaskNodeOption::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CreateSqlLimitTaskNodeOption::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CreateSqlLimitTaskNodeOption::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& CreateSqlLimitTaskNodeOption::getSqlIds()
{
    return sqlIds_;
}

void CreateSqlLimitTaskNodeOption::setSqlIds(const std::vector<std::string>& value)
{
    sqlIds_ = value;
    sqlIdsIsSet_ = true;
}

bool CreateSqlLimitTaskNodeOption::sqlIdsIsSet() const
{
    return sqlIdsIsSet_;
}

void CreateSqlLimitTaskNodeOption::unsetsqlIds()
{
    sqlIdsIsSet_ = false;
}

}
}
}
}
}


