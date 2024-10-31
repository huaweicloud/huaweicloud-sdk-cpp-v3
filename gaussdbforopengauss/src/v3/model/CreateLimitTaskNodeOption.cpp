

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskNodeOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateLimitTaskNodeOption::CreateLimitTaskNodeOption()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
}

CreateLimitTaskNodeOption::~CreateLimitTaskNodeOption() = default;

void CreateLimitTaskNodeOption::validate()
{
}

web::json::value CreateLimitTaskNodeOption::toJson() const
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
bool CreateLimitTaskNodeOption::fromJson(const web::json::value& val)
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


std::string CreateLimitTaskNodeOption::getNodeId() const
{
    return nodeId_;
}

void CreateLimitTaskNodeOption::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CreateLimitTaskNodeOption::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CreateLimitTaskNodeOption::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CreateLimitTaskNodeOption::getSqlId() const
{
    return sqlId_;
}

void CreateLimitTaskNodeOption::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool CreateLimitTaskNodeOption::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void CreateLimitTaskNodeOption::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

}
}
}
}
}


