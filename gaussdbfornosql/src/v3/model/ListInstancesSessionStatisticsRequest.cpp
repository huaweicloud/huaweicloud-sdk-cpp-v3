

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesSessionStatisticsRequest::ListInstancesSessionStatisticsRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ListInstancesSessionStatisticsRequest::~ListInstancesSessionStatisticsRequest() = default;

void ListInstancesSessionStatisticsRequest::validate()
{
}

web::json::value ListInstancesSessionStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool ListInstancesSessionStatisticsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInstancesSessionStatisticsRequest::getNodeId() const
{
    return nodeId_;
}

void ListInstancesSessionStatisticsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListInstancesSessionStatisticsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListInstancesSessionStatisticsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


