
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeploy_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeploy_H_


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
/// 可信节点部署情况
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsAgentDeploy
    : public ModelBase
{
public:
    TicsAgentDeploy();
    virtual ~TicsAgentDeploy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsAgentDeploy members

    /// <summary>
    /// 可信节点Id
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
    /// 是否开启aom监控
    /// </summary>

    std::string getAomFlag() const;
    bool aomFlagIsSet() const;
    void unsetaomFlag();
    void setAomFlag(const std::string& value);

    /// <summary>
    /// 是否使用区块链存证
    /// </summary>

    std::string getBcsFlag() const;
    bool bcsFlagIsSet() const;
    void unsetbcsFlag();
    void setBcsFlag(const std::string& value);

    /// <summary>
    /// 可信节点使用cce集群的版本
    /// </summary>

    std::string getCceVersion() const;
    bool cceVersionIsSet() const;
    void unsetcceVersion();
    void setCceVersion(const std::string& value);

    /// <summary>
    /// 可信节点创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 可信节点创建者的租户Id
    /// </summary>

    std::string getCreatorDomainId() const;
    bool creatorDomainIdIsSet() const;
    void unsetcreatorDomainId();
    void setCreatorDomainId(const std::string& value);

    /// <summary>
    /// 可信节点创建者的Id
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 可信节点创建者的名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建可信节点所在项目Id
    /// </summary>

    std::string getCreatorProjectId() const;
    bool creatorProjectIdIsSet() const;
    void unsetcreatorProjectId();
    void setCreatorProjectId(const std::string& value);

    /// <summary>
    /// 可信节点部署状态，ABNORMAL.正常,RESTARTING.重启中,RESTART_FAILED.重启失败，ROLLBACKING.回滚中，STARTING.启动中，DEPLOYING.创建中,DEPLOY_FAILED.创建失败,DEPLOY_SUCCESS.创建成功,RUNNING.运行中,DELETING.删除中,DELETE_FAILED.删除失败,DELETE_SUCCESS.删除成功,UPGRADING.升级中,UPGRADE_FAILED.升级失败,ROLLBACK.回退中,ROLLBACK_FAILED.回退失败,SUCCESS.成功,FAILED.失败,TO_START.待开始,IN_PROGRESS.进行中
    /// </summary>

    std::string getDeployStatus() const;
    bool deployStatusIsSet() const;
    void unsetdeployStatus();
    void setDeployStatus(const std::string& value);

    /// <summary>
    /// 可信节点部署类型，CCE.云容器集群，IEF.边缘容器
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);

    /// <summary>
    /// 可信节点部署类型
    /// </summary>

    std::string getDeploymentEventInformation() const;
    bool deploymentEventInformationIsSet() const;
    void unsetdeploymentEventInformation();
    void setDeploymentEventInformation(const std::string& value);

    /// <summary>
    /// 可信节点是否高可用部署
    /// </summary>

    std::string getHighAvail() const;
    bool highAvailIsSet() const;
    void unsethighAvail();
    void setHighAvail(const std::string& value);

    /// <summary>
    /// 可信节点部署使用的镜像Id
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 可信节点部署使用的镜像版本
    /// </summary>

    std::string getImageVersion() const;
    bool imageVersionIsSet() const;
    void unsetimageVersion();
    void setImageVersion(const std::string& value);

    /// <summary>
    /// 可信节点所在联盟的Id
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 可信节点所在联盟的名称
    /// </summary>

    std::string getLeagueName() const;
    bool leagueNameIsSet() const;
    void unsetleagueName();
    void setLeagueName(const std::string& value);

    /// <summary>
    /// 可信节点所在联盟的区域
    /// </summary>

    std::string getLeagueRegionName() const;
    bool leagueRegionNameIsSet() const;
    void unsetleagueRegionName();
    void setLeagueRegionName(const std::string& value);

    /// <summary>
    /// 可信节点所在联盟的版本
    /// </summary>

    std::string getLeagueVersion() const;
    bool leagueVersionIsSet() const;
    void unsetleagueVersion();
    void setLeagueVersion(const std::string& value);

    /// <summary>
    /// 可信节点使用的网关的Id
    /// </summary>

    std::string getNatId() const;
    bool natIdIsSet() const;
    void unsetnatId();
    void setNatId(const std::string& value);

    /// <summary>
    /// 可信节点使用的存储方式，HOST_PATH.本地存储，OBS.对象云存储，SFS_TURBO.极速文件存储
    /// </summary>

    std::string getStorageMountType() const;
    bool storageMountTypeIsSet() const;
    void unsetstorageMountType();
    void setStorageMountType(const std::string& value);


protected:
    std::string agentId_;
    bool agentIdIsSet_;
    std::string agentName_;
    bool agentNameIsSet_;
    std::string aomFlag_;
    bool aomFlagIsSet_;
    std::string bcsFlag_;
    bool bcsFlagIsSet_;
    std::string cceVersion_;
    bool cceVersionIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string creatorDomainId_;
    bool creatorDomainIdIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorProjectId_;
    bool creatorProjectIdIsSet_;
    std::string deployStatus_;
    bool deployStatusIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;
    std::string deploymentEventInformation_;
    bool deploymentEventInformationIsSet_;
    std::string highAvail_;
    bool highAvailIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string imageVersion_;
    bool imageVersionIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string leagueName_;
    bool leagueNameIsSet_;
    std::string leagueRegionName_;
    bool leagueRegionNameIsSet_;
    std::string leagueVersion_;
    bool leagueVersionIsSet_;
    std::string natId_;
    bool natIdIsSet_;
    std::string storageMountType_;
    bool storageMountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentDeploy_H_
