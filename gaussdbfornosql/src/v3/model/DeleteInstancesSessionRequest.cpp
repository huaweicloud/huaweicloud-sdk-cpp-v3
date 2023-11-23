

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteInstancesSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteInstancesSessionRequest::DeleteInstancesSessionRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteInstancesSessionRequest::~DeleteInstancesSessionRequest() = default;

void DeleteInstancesSessionRequest::validate()
{
}

web::json::value DeleteInstancesSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteInstancesSessionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteInstancesSessionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteInstancesSessionRequest::getNodeId() const
{
    return nodeId_;
}

void DeleteInstancesSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteInstancesSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteInstancesSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

DeleteInstancesSessionRequestBody DeleteInstancesSessionRequest::getBody() const
{
    return body_;
}

void DeleteInstancesSessionRequest::setBody(const DeleteInstancesSessionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteInstancesSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteInstancesSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


