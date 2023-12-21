
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
    /// 无eip场景下,agent的eps id
    /// </summary>

    std::string getAgentVpcepEpsId() const;
    bool agentVpcepEpsIdIsSet() const;
    void unsetagentVpcepEpsId();
    void setAgentVpcepEpsId(const std::string& value);

    /// <summary>
    /// 弹性云服务器Id，IEF部署同node_id
    /// </summary>

    std::string getEcsServerId() const;
    bool ecsServerIdIsSet() const;
    void unsetecsServerId();
    void setEcsServerId(const std::string& value);

    /// <summary>
    /// 入方向安全组规则ID
    /// </summary>

    std::string getLeagueServerIpSecurityGroupRule() const;
    bool leagueServerIpSecurityGroupRuleIsSet() const;
    void unsetleagueServerIpSecurityGroupRule();
    void setLeagueServerIpSecurityGroupRule(const std::string& value);

    /// <summary>
    /// 联盟server组件的ip，为server的snatip，设置代理节点的入方向安全组规则
    /// </summary>

    std::string getLeagueServerSnatIp() const;
    bool leagueServerSnatIpIsSet() const;
    void unsetleagueServerSnatIp();
    void setLeagueServerSnatIp(const std::string& value);

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

    /// <summary>
    /// 无eip场景下,server访问agent的epi id
    /// </summary>

    std::string getServerToAgentVpcepEpiId() const;
    bool serverToAgentVpcepEpiIdIsSet() const;
    void unsetserverToAgentVpcepEpiId();
    void setServerToAgentVpcepEpiId(const std::string& value);

    /// <summary>
    /// 无eip场景下,server访问agent的ip
    /// </summary>

    std::string getServerToAgentVpcepEpiIp() const;
    bool serverToAgentVpcepEpiIpIsSet() const;
    void unsetserverToAgentVpcepEpiIp();
    void setServerToAgentVpcepEpiIp(const std::string& value);

    /// <summary>
    /// 节点绑定的snat id
    /// </summary>

    std::string getSnatRuleId() const;
    bool snatRuleIdIsSet() const;
    void unsetsnatRuleId();
    void setSnatRuleId(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentVpcepEpsId_;
    bool agentVpcepEpsIdIsSet_;
    std::string ecsServerId_;
    bool ecsServerIdIsSet_;
    std::string leagueServerIpSecurityGroupRule_;
    bool leagueServerIpSecurityGroupRuleIsSet_;
    std::string leagueServerSnatIp_;
    bool leagueServerSnatIpIsSet_;
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
    std::string serverToAgentVpcepEpiId_;
    bool serverToAgentVpcepEpiIdIsSet_;
    std::string serverToAgentVpcepEpiIp_;
    bool serverToAgentVpcepEpiIpIsSet_;
    std::string snatRuleId_;
    bool snatRuleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNodeInfo_H_
