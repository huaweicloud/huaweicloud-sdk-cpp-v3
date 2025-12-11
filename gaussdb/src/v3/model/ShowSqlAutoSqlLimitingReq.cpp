

#include "huaweicloud/gaussdb/v3/model/ShowSqlAutoSqlLimitingReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlAutoSqlLimitingReq::ShowSqlAutoSqlLimitingReq()
{
    nodeIdsIsSet_ = false;
}

ShowSqlAutoSqlLimitingReq::~ShowSqlAutoSqlLimitingReq() = default;

void ShowSqlAutoSqlLimitingReq::validate()
{
}

web::json::value ShowSqlAutoSqlLimitingReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool ShowSqlAutoSqlLimitingReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowSqlAutoSqlLimitingReq::getNodeIds()
{
    return nodeIds_;
}

void ShowSqlAutoSqlLimitingReq::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingReq::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void ShowSqlAutoSqlLimitingReq::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


