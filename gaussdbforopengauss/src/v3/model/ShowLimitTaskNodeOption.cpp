

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskNodeOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowLimitTaskNodeOption::ShowLimitTaskNodeOption()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
}

ShowLimitTaskNodeOption::~ShowLimitTaskNodeOption() = default;

void ShowLimitTaskNodeOption::validate()
{
}

web::json::value ShowLimitTaskNodeOption::toJson() const
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
bool ShowLimitTaskNodeOption::fromJson(const web::json::value& val)
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


std::string ShowLimitTaskNodeOption::getNodeId() const
{
    return nodeId_;
}

void ShowLimitTaskNodeOption::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowLimitTaskNodeOption::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowLimitTaskNodeOption::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowLimitTaskNodeOption::getSqlId() const
{
    return sqlId_;
}

void ShowLimitTaskNodeOption::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ShowLimitTaskNodeOption::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ShowLimitTaskNodeOption::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

}
}
}
}
}


