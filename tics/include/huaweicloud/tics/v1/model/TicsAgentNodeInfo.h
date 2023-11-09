
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNodeInfo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNodeInfo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可信节点信息表
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsAgentNodeInfo
    : public ModelBase
{
public:
    TicsAgentNodeInfo();
    virtual ~TicsAgentNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsAgentNodeInfo members

    /// <summary>
    /// 可信节点Id
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 弹性云服务器Id，IEF部署同node_id
    /// </summary>

    std::string getEcsServerId() const;
    bool ecsServerIdIsSet() const;
    void unsetecsServerId();
    void setEcsServerId(const std::string& value);

    /// <summary>
    /// 可信节点绑定的网关的ip，CCE部署时会返回该值
    /// </summary>

    std::string getNatEip() const;
    bool natEipIsSet() const;
    void unsetnatEip();
    void setNatEip(const std::string& value);

    /// <summary>
    /// 可信节点绑定的网关的ip的Id，CCE部署时会返回该值
    /// </summary>

    std::string getNatEipId() const;
    bool natEipIdIsSet() const;
    void unsetnatEipId();
    void setNatEipId(const std::string& value);

    /// <summary>
    /// 弹性云服务器所在可用区，CCE部署时会返回该值
    /// </summary>

    std::string getNodeAz() const;
    bool nodeAzIsSet() const;
    void unsetnodeAz();
    void setNodeAz(const std::string& value);

    /// <summary>
    /// 可信节点部署的虚机id，CCE部署情况返回CCE节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 弹性云服务器的私网ip
    /// </summary>

    std::string getNodeIp() const;
    bool nodeIpIsSet() const;
    void unsetnodeIp();
    void setNodeIp(const std::string& value);

    /// <summary>
    /// 弹性云服务器的名称
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string ecsServerId_;
    bool ecsServerIdIsSet_;
    std::string natEip_;
    bool natEipIsSet_;
    std::string natEipId_;
    bool natEipIdIsSet_;
    std::string nodeAz_;
    bool nodeAzIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeIp_;
    bool nodeIpIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNodeInfo_H_
