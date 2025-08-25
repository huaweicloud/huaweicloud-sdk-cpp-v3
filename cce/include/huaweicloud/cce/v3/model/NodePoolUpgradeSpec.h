
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplate.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodePoolUpgradeSpec
    : public ModelBase
{
public:
    NodePoolUpgradeSpec();
    virtual ~NodePoolUpgradeSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolUpgradeSpec members

    /// <summary>
    /// 节点池id。
    /// </summary>

    std::string getNodePoolID() const;
    bool nodePoolIDIsSet() const;
    void unsetnodePoolID();
    void setNodePoolID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getNodeIDs();
    bool nodeIDsIsSet() const;
    void unsetnodeIDs();
    void setNodeIDs(const std::vector<std::string>& value);

    /// <summary>
    /// Pod无法驱逐时，是否强制重置。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate getNodeTemplate() const;
    bool nodeTemplateIsSet() const;
    void unsetnodeTemplate();
    void setNodeTemplate(const NodeTemplate& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getMaxUnavailable() const;
    bool maxUnavailableIsSet() const;
    void unsetmaxUnavailable();
    void setMaxUnavailable(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getRetryTimes() const;
    bool retryTimesIsSet() const;
    void unsetretryTimes();
    void setRetryTimes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getSkippedNodes();
    bool skippedNodesIsSet() const;
    void unsetskippedNodes();
    void setSkippedNodes(const std::vector<std::string>& value);


protected:
    std::string nodePoolID_;
    bool nodePoolIDIsSet_;
    std::vector<std::string> nodeIDs_;
    bool nodeIDsIsSet_;
    bool force_;
    bool forceIsSet_;
    NodeTemplate nodeTemplate_;
    bool nodeTemplateIsSet_;
    int32_t maxUnavailable_;
    bool maxUnavailableIsSet_;
    int32_t retryTimes_;
    bool retryTimesIsSet_;
    std::vector<std::string> skippedNodes_;
    bool skippedNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePoolUpgradeSpec_H_
