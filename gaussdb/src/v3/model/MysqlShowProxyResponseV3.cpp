

#include "huaweicloud/gaussdb/v3/model/MysqlShowProxyResponseV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlShowProxyResponseV3::MysqlShowProxyResponseV3()
{
    proxyIsSet_ = false;
    masterNodeIsSet_ = false;
    readonlyNodesIsSet_ = false;
}

MysqlShowProxyResponseV3::~MysqlShowProxyResponseV3() = default;

void MysqlShowProxyResponseV3::validate()
{
}

web::json::value MysqlShowProxyResponseV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyIsSet_) {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(proxy_);
    }
    if(masterNodeIsSet_) {
        val[utility::conversions::to_string_t("master_node")] = ModelBase::toJson(masterNode_);
    }
    if(readonlyNodesIsSet_) {
        val[utility::conversions::to_string_t("readonly_nodes")] = ModelBase::toJson(readonlyNodes_);
    }

    return val;
}
bool MysqlShowProxyResponseV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            MysqlProxyV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_node"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_node"));
        if(!fieldValue.is_null())
        {
            MysqlProxyNodeV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyNodeV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyNodes(refVal);
        }
    }
    return ok;
}


MysqlProxyV3 MysqlShowProxyResponseV3::getProxy() const
{
    return proxy_;
}

void MysqlShowProxyResponseV3::setProxy(const MysqlProxyV3& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool MysqlShowProxyResponseV3::proxyIsSet() const
{
    return proxyIsSet_;
}

void MysqlShowProxyResponseV3::unsetproxy()
{
    proxyIsSet_ = false;
}

MysqlProxyNodeV3 MysqlShowProxyResponseV3::getMasterNode() const
{
    return masterNode_;
}

void MysqlShowProxyResponseV3::setMasterNode(const MysqlProxyNodeV3& value)
{
    masterNode_ = value;
    masterNodeIsSet_ = true;
}

bool MysqlShowProxyResponseV3::masterNodeIsSet() const
{
    return masterNodeIsSet_;
}

void MysqlShowProxyResponseV3::unsetmasterNode()
{
    masterNodeIsSet_ = false;
}

std::vector<MysqlProxyNodeV3>& MysqlShowProxyResponseV3::getReadonlyNodes()
{
    return readonlyNodes_;
}

void MysqlShowProxyResponseV3::setReadonlyNodes(const std::vector<MysqlProxyNodeV3>& value)
{
    readonlyNodes_ = value;
    readonlyNodesIsSet_ = true;
}

bool MysqlShowProxyResponseV3::readonlyNodesIsSet() const
{
    return readonlyNodesIsSet_;
}

void MysqlShowProxyResponseV3::unsetreadonlyNodes()
{
    readonlyNodesIsSet_ = false;
}

}
}
}
}
}


