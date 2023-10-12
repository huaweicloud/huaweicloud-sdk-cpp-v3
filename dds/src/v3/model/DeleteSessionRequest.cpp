

#include "huaweicloud/dds/v3/model/DeleteSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteSessionRequest::DeleteSessionRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSessionRequest::~DeleteSessionRequest() = default;

void DeleteSessionRequest::validate()
{
}

web::json::value DeleteSessionRequest::toJson() const
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
bool DeleteSessionRequest::fromJson(const web::json::value& val)
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
            DeleteSessionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSessionRequest::getNodeId() const
{
    return nodeId_;
}

void DeleteSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

DeleteSessionRequestBody DeleteSessionRequest::getBody() const
{
    return body_;
}

void DeleteSessionRequest::setBody(const DeleteSessionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


