

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskNodeResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateLimitTaskNodeResult::CreateLimitTaskNodeResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
}

CreateLimitTaskNodeResult::~CreateLimitTaskNodeResult() = default;

void CreateLimitTaskNodeResult::validate()
{
}

web::json::value CreateLimitTaskNodeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }

    return val;
}
bool CreateLimitTaskNodeResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    return ok;
}


std::string CreateLimitTaskNodeResult::getNodeId() const
{
    return nodeId_;
}

void CreateLimitTaskNodeResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CreateLimitTaskNodeResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CreateLimitTaskNodeResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CreateLimitTaskNodeResult::getSqlId() const
{
    return sqlId_;
}

void CreateLimitTaskNodeResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool CreateLimitTaskNodeResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void CreateLimitTaskNodeResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

}
}
}
}
}


