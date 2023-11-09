
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_AgentListVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_AgentListVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  AgentListVo
    : public ModelBase
{
public:
    AgentListVo();
    virtual ~AgentListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgentListVo members

    /// <summary>
    /// 可信节点id
    /// </summary>

    std::string getAgentId() const;
    bool agentIdIsSet() const;
    void unsetagentId();
    void setAgentId(const std::string& value);

    /// <summary>
    /// 可信节点名称
    /// </summary>

    std::string getAgentName() const;
    bool agentNameIsSet() const;
    void unsetagentName();
    void setAgentName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建者租户id
    /// </summary>

    std::string getCreatorDomainId() const;
    bool creatorDomainIdIsSet() const;
    void unsetcreatorDomainId();
    void setCreatorDomainId(const std::string& value);

    /// <summary>
    /// 创建者名称
    /// </summary>

    std::string getCreatorUserName() const;
    bool creatorUserNameIsSet() const;
    void unsetcreatorUserName();
    void setCreatorUserName(const std::string& value);

    /// <summary>
    /// 部署状态 ABNORMAL.正常,RESTARTING.重启中,RESTART_FAILED.重启失败，ROLLBACKING.回滚中，STARTING.启动中，DEPLOYING.创建中,DEPLOY_FAILED.创建失败,DEPLOY_SUCCESS.创建成功,RUNNING.运行中,DELETING.删除中,DELETE_FAILED.删除失败,DELETE_SUCCESS.删除成功,UPGRADING.升级中,UPGRADE_FAILED.升级失败,ROLLBACK.回退中,ROLLBACK_FAILED.回退失败,SUCCESS.成功,FAILED.失败,TO_START.待开始,IN_PROGRESS.进行中
    /// </summary>

    std::string getDeployStatus() const;
    bool deployStatusIsSet() const;
    void unsetdeployStatus();
    void setDeployStatus(const std::string& value);

    /// <summary>
    /// 部署类型 CCE,IEF,EXTERNAL
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// 部署事件状态
    /// </summary>

    std::string getDeploymentEventInformation() const;
    bool deploymentEventInformationIsSet() const;
    void unsetdeploymentEventInformation();
    void setDeploymentEventInformation(const std::string& value);

    /// <summary>
    /// 是否可删除
    /// </summary>

    bool isEnableDelete() const;
    bool enableDeleteIsSet() const;
    void unsetenableDelete();
    void setEnableDelete(bool value);

    /// <summary>
    /// 是否可升级
    /// </summary>

    bool isEnableUpgrade() const;
    bool enableUpgradeIsSet() const;
    void unsetenableUpgrade();
    void setEnableUpgrade(bool value);

    /// <summary>
    /// 节点镜像版本
    /// </summary>

    std::string getImageVersion() const;
    bool imageVersionIsSet() const;
    void unsetimageVersion();
    void setImageVersion(const std::string& value);

    /// <summary>
    /// 节点是否高可用
    /// </summary>

    bool isIsHighAvail() const;
    bool isHighAvailIsSet() const;
    void unsetisHighAvail();
    void setIsHighAvail(bool value);

    /// <summary>
    /// 联盟ID
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 联盟名称
    /// </summary>

    std::string getLeagueName() const;
    bool leagueNameIsSet() const;
    void unsetleagueName();
    void setLeagueName(const std::string& value);

    /// <summary>
    /// 联盟版本
    /// </summary>

    std::string getLeagueVersion() const;
    bool leagueVersionIsSet() const;
    void unsetleagueVersion();
    void setLeagueVersion(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentName_;
    bool agentNameIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorDomainId_;
    bool creatorDomainIdIsSet_;
    std::string creatorUserName_;
    bool creatorUserNameIsSet_;
    std::string deployStatus_;
    bool deployStatusIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    std::string deploymentEventInformation_;
    bool deploymentEventInformationIsSet_;
    bool enableDelete_;
    bool enableDeleteIsSet_;
    bool enableUpgrade_;
    bool enableUpgradeIsSet_;
    std::string imageVersion_;
    bool imageVersionIsSet_;
    bool isHighAvail_;
    bool isHighAvailIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string leagueName_;
    bool leagueNameIsSet_;
    std::string leagueVersion_;
    bool leagueVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_AgentListVo_H_
