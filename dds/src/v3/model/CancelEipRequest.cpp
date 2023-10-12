

#include "huaweicloud/dds/v3/model/CancelEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CancelEipRequest::CancelEipRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

CancelEipRequest::~CancelEipRequest() = default;

void CancelEipRequest::validate()
{
}

web::json::value CancelEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool CancelEipRequest::fromJson(const web::json::value& val)
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


std::string CancelEipRequest::getNodeId() const
{
    return nodeId_;
}

void CancelEipRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CancelEipRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CancelEipRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


