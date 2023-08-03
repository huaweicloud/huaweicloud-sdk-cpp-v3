

#include "huaweicloud/rds/v3/model/OpenProxyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OpenProxyRequest::OpenProxyRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
}

OpenProxyRequest::~OpenProxyRequest() = default;

void OpenProxyRequest::validate()
{
}

web::json::value OpenProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }

    return val;
}

bool OpenProxyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    return ok;
}

std::string OpenProxyRequest::getFlavorId() const
{
    return flavorId_;
}

void OpenProxyRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool OpenProxyRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void OpenProxyRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

int32_t OpenProxyRequest::getNodeNum() const
{
    return nodeNum_;
}

void OpenProxyRequest::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool OpenProxyRequest::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void OpenProxyRequest::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

}
}
}
}
}


