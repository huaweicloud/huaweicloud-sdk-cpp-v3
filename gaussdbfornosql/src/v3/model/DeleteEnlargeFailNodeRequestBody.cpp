

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteEnlargeFailNodeRequestBody::DeleteEnlargeFailNodeRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

DeleteEnlargeFailNodeRequestBody::~DeleteEnlargeFailNodeRequestBody() = default;

void DeleteEnlargeFailNodeRequestBody::validate()
{
}

web::json::value DeleteEnlargeFailNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool DeleteEnlargeFailNodeRequestBody::fromJson(const web::json::value& val)
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


std::string DeleteEnlargeFailNodeRequestBody::getNodeId() const
{
    return nodeId_;
}

void DeleteEnlargeFailNodeRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteEnlargeFailNodeRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteEnlargeFailNodeRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


