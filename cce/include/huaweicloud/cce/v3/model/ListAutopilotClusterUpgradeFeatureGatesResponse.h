
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClusterUpgradeFeatureGatesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClusterUpgradeFeatureGatesResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Metadata.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotClusterUpgradeFeatureGatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotClusterUpgradeFeatureGatesResponse();
    virtual ~ListAutopilotClusterUpgradeFeatureGatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotClusterUpgradeFeatureGatesResponse members

    /// <summary>
    /// API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 特性开关信息,格式为key/value键值对。 - Key: 目前有下列值：DisplayPreCheckDetail(展示所有集群升级前检查项详情),EvsSnapshot(使用EVS快照备份集群), LabelForSkippedNode(支持为集群升级过程中跳过的节点打标签), UpgradeStrategy(集群升级策略) - Value: Support 支持,Disable 关闭,Default 使用CCE服务默认规则判断
    /// </summary>

    std::map<std::string, std::string>& getUpgradeFeatureGates();
    bool upgradeFeatureGatesIsSet() const;
    void unsetupgradeFeatureGates();
    void setUpgradeFeatureGates(const std::map<std::string, std::string>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    Metadata metadata_;
    bool metadataIsSet_;
    std::map<std::string, std::string> upgradeFeatureGates_;
    bool upgradeFeatureGatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClusterUpgradeFeatureGatesResponse_H_
