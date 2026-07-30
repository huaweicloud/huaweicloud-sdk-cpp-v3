
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ResetNodesRequest_nodeConfig.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ResetNodesRequest_rollingConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResetNodesRequest
    : public ModelBase
{
public:
    ResetNodesRequest();
    virtual ~ResetNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNodesRequest members

    /// <summary>
    /// **参数解释**：需要重置的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getNodeNames();
    bool nodeNamesIsSet() const;
    void unsetnodeNames();
    void setNodeNames(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ResetNodesRequest_rollingConfig getRollingConfig() const;
    bool rollingConfigIsSet() const;
    void unsetrollingConfig();
    void setRollingConfig(const ResetNodesRequest_rollingConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ResetNodesRequest_nodeConfig getNodeConfig() const;
    bool nodeConfigIsSet() const;
    void unsetnodeConfig();
    void setNodeConfig(const ResetNodesRequest_nodeConfig& value);


protected:
    std::vector<std::string> nodeNames_;
    bool nodeNamesIsSet_;
    ResetNodesRequest_rollingConfig rollingConfig_;
    bool rollingConfigIsSet_;
    ResetNodesRequest_nodeConfig nodeConfig_;
    bool nodeConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_H_
