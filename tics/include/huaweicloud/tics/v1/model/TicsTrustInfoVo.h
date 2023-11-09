
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsTrustInfoVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsTrustInfoVo_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  TicsTrustInfoVo
    : public ModelBase
{
public:
    TicsTrustInfoVo();
    virtual ~TicsTrustInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsTrustInfoVo members

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 主备模式，ACTIVE.主，STANDBY.备
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// 网元部署类型，CCE.容器集群部署，IEF.边缘部署
    /// </summary>

    std::string getNeDeployType() const;
    bool neDeployTypeIsSet() const;
    void unsetneDeployType();
    void setNeDeployType(const std::string& value);

    /// <summary>
    /// 节点类型,AGENT.计算节点，AGG.聚合节点，AGG_MANAGER.聚合器管理节点,SERVER.控制节点
    /// </summary>

    std::string getNeNodeType() const;
    bool neNodeTypeIsSet() const;
    void unsetneNodeType();
    void setNeNodeType(const std::string& value);

    /// <summary>
    /// 网元状态，INIT.初始化,UNKNOWN.未知,OFFLINE.离线,ONLINE.在线,FAULT.故障,TRUSTING.互信中,TRUST.已互信
    /// </summary>

    std::string getNeStatus() const;
    bool neStatusIsSet() const;
    void unsetneStatus();
    void setNeStatus(const std::string& value);

    /// <summary>
    /// 节点id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 合作方别名
    /// </summary>

    std::string getPartnerAlias() const;
    bool partnerAliasIsSet() const;
    void unsetpartnerAlias();
    void setPartnerAlias(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);


protected:
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    std::string neDeployType_;
    bool neDeployTypeIsSet_;
    std::string neNodeType_;
    bool neNodeTypeIsSet_;
    std::string neStatus_;
    bool neStatusIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string partnerAlias_;
    bool partnerAliasIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsTrustInfoVo_H_
