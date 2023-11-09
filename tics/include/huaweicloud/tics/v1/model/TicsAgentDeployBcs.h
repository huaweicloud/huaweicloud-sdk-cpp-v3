
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployBcs_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployBcs_H_


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
/// 区块链相关信息
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsAgentDeployBcs
    : public ModelBase
{
public:
    TicsAgentDeployBcs();
    virtual ~TicsAgentDeployBcs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsAgentDeployBcs members

    /// <summary>
    /// 可信节点Id
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 区块链ip
    /// </summary>

    std::string getBcsIp() const;
    bool bcsIpIsSet() const;
    void unsetbcsIp();
    void setBcsIp(const std::string& value);

    /// <summary>
    /// 区块链Id
    /// </summary>

    std::string getBlockChainId() const;
    bool blockChainIdIsSet() const;
    void unsetblockChainId();
    void setBlockChainId(const std::string& value);

    /// <summary>
    /// 区块链名称
    /// </summary>

    std::string getBlockChainName() const;
    bool blockChainNameIsSet() const;
    void unsetblockChainName();
    void setBlockChainName(const std::string& value);

    /// <summary>
    /// 通道名称
    /// </summary>

    std::string getChannelName() const;
    bool channelNameIsSet() const;
    void unsetchannelName();
    void setChannelName(const std::string& value);

    /// <summary>
    /// 组织名称
    /// </summary>

    std::string getOrgName() const;
    bool orgNameIsSet() const;
    void unsetorgName();
    void setOrgName(const std::string& value);

    /// <summary>
    /// 组织名称的hash
    /// </summary>

    std::string getOrgNameHash() const;
    bool orgNameHashIsSet() const;
    void unsetorgNameHash();
    void setOrgNameHash(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string bcsIp_;
    bool bcsIpIsSet_;
    std::string blockChainId_;
    bool blockChainIdIsSet_;
    std::string blockChainName_;
    bool blockChainNameIsSet_;
    std::string channelName_;
    bool channelNameIsSet_;
    std::string orgName_;
    bool orgNameIsSet_;
    std::string orgNameHash_;
    bool orgNameHashIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeployBcs_H_
