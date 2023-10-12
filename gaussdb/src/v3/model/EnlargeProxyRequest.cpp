

#include "huaweicloud/gaussdb/v3/model/EnlargeProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




EnlargeProxyRequest::EnlargeProxyRequest()
{
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

EnlargeProxyRequest::~EnlargeProxyRequest() = default;

void EnlargeProxyRequest::validate()
{
}

web::json::value EnlargeProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }

    return val;
}
bool EnlargeProxyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    return ok;
}


int32_t EnlargeProxyRequest::getNodeNum() const
{
    return nodeNum_;
}

void EnlargeProxyRequest::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool EnlargeProxyRequest::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void EnlargeProxyRequest::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string EnlargeProxyRequest::getProxyId() const
{
    return proxyId_;
}

void EnlargeProxyRequest::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool EnlargeProxyRequest::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void EnlargeProxyRequest::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


