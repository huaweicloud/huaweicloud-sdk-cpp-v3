

#include "huaweicloud/gaussdb/v3/model/ReadableNodeInfos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ReadableNodeInfos::ReadableNodeInfos()
{
    dataIp_ = "";
    dataIpIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

ReadableNodeInfos::~ReadableNodeInfos() = default;

void ReadableNodeInfos::validate()
{
}

web::json::value ReadableNodeInfos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIpIsSet_) {
        val[utility::conversions::to_string_t("data_ip")] = ModelBase::toJson(dataIp_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }

    return val;
}
bool ReadableNodeInfos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    return ok;
}


std::string ReadableNodeInfos::getDataIp() const
{
    return dataIp_;
}

void ReadableNodeInfos::setDataIp(const std::string& value)
{
    dataIp_ = value;
    dataIpIsSet_ = true;
}

bool ReadableNodeInfos::dataIpIsSet() const
{
    return dataIpIsSet_;
}

void ReadableNodeInfos::unsetdataIp()
{
    dataIpIsSet_ = false;
}

std::string ReadableNodeInfos::getNodeId() const
{
    return nodeId_;
}

void ReadableNodeInfos::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ReadableNodeInfos::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ReadableNodeInfos::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ReadableNodeInfos::getNodeName() const
{
    return nodeName_;
}

void ReadableNodeInfos::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ReadableNodeInfos::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ReadableNodeInfos::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


