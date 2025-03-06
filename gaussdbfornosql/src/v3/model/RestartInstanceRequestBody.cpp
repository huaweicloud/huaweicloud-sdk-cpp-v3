

#include "huaweicloud/gaussdbfornosql/v3/model/RestartInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestartInstanceRequestBody::RestartInstanceRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

RestartInstanceRequestBody::~RestartInstanceRequestBody() = default;

void RestartInstanceRequestBody::validate()
{
}

web::json::value RestartInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool RestartInstanceRequestBody::fromJson(const web::json::value& val)
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


std::string RestartInstanceRequestBody::getNodeId() const
{
    return nodeId_;
}

void RestartInstanceRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool RestartInstanceRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void RestartInstanceRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


