

#include "huaweicloud/dds/v3/model/AttachEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachEipRequest::AttachEipRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachEipRequest::~AttachEipRequest() = default;

void AttachEipRequest::validate()
{
}

web::json::value AttachEipRequest::toJson() const
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
bool AttachEipRequest::fromJson(const web::json::value& val)
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
            AttachEipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachEipRequest::getNodeId() const
{
    return nodeId_;
}

void AttachEipRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AttachEipRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AttachEipRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

AttachEipRequestBody AttachEipRequest::getBody() const
{
    return body_;
}

void AttachEipRequest::setBody(const AttachEipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


