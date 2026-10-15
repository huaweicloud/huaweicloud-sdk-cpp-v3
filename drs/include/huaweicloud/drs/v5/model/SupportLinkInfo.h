
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 支持的链路信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SupportLinkInfo
    : public ModelBase
{
public:
    SupportLinkInfo();
    virtual ~SupportLinkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportLinkInfo members

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型，标识数据复制任务所使用的数据库引擎。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  灾备场景不支持选择VPC网络。  **取值范围**：  - eip：公网网络 - vpc：VPC网络 - vpn：VPN、专线网络  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  可用链路支持的迁移模式列表，表示该链路支持的数据迁移执行方式。  **约束限制**：  不涉及。  **取值范围**：  - FULL_TRANS：全量迁移 - FULL_INCR_TRANS：全量+增量迁移 - INCR_TRANS：增量迁移  **默认取值**：  不涉及
    /// </summary>

    std::vector<std::string>& getTaskModes();
    bool taskModesIsSet() const;
    void unsettaskModes();
    void setTaskModes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  云上数据库实例的部署模式，标识目标或源数据库实例在云上的集群架构类型。  **约束限制**：  不涉及。  **取值范围**：  - Single：单机模式 - Ha：主备模式 - Cluster：集群模式 - Sharding：分片模式 - Independent：GaussDB独立部署模式  **默认取值**：  不涉及
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS迁移实例的部署类型，决定迁移任务所使用的实例架构。  **约束限制**：  不涉及。  **取值范围**：  - Single：单机 - Ha：主备  **默认取值**：  不涉及
    /// </summary>

    std::string getJobInstanceType() const;
    bool jobInstanceTypeIsSet() const;
    void unsetjobInstanceType();
    void setJobInstanceType(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否支持绑定弹性公网IP（EIP），标识当前链路是否允许为迁移实例绑定弹性公网IP以实现公网通信。  **约束限制**：  不涉及。  **取值范围**：  - true：支持绑定EIP - false：不支持绑定EIP  **默认取值**：  不涉及
    /// </summary>

    bool isIsSupportBindEip() const;
    bool isSupportBindEipIsSet() const;
    void unsetisSupportBindEip();
    void setIsSupportBindEip(bool value);


protected:
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::vector<std::string> taskModes_;
    bool taskModesIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string clusterMode_;
    bool clusterModeIsSet_;
    std::string jobInstanceType_;
    bool jobInstanceTypeIsSet_;
    bool isSupportBindEip_;
    bool isSupportBindEipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_
