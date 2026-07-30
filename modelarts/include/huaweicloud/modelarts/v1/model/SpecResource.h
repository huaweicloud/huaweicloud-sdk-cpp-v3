
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResource_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/MainContainerCustomizedFlavor.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业资源规格信息。flavor_id和pool_id+[flavor_id]方式二选一。 - 选择公共资源池时，仅上送flavor_id，选择训练作业需要的卡数、内存等资源规格，当公共资源池空闲资源满足选择的规格需求时，作业可被调度； - 选择专属资源池时，需上送pool_id与flavor_id，选择专属资源池下可选的实际规格，即满足训练作业条件的最小卡数，以便节省专属资源，提高利用率。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SpecResource
    : public ModelBase
{
public:
    SpecResource();
    virtual ~SpecResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecResource members

    /// <summary>
    /// **参数解释**：训练作业资源规格id。 **约束限制**：不涉及。 **取值范围**：CPU规格专属资源池不支持指定flavor_id。GPU/Ascend规格专属资源池可选取值如下： - modelarts.pool.visual.xlarge（1卡） - modelarts.pool.visual.2xlarge（2卡） - modelarts.pool.visual.4xlarge（4卡） - modelarts.pool.visual.8xlarge（8卡） - modelarts.pool.visual.16xlarge（16卡，当前仅限Snt9b23超节点资源池）  **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池创建训练作业使用节点数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：默认单节点。
    /// </summary>

    int32_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetnodeCount();
    void setNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**：专属资源池id。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池联邦id。 **约束限制**：当kind为federated_pool_job时，该字段必填。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolGroupId() const;
    bool poolGroupIdIsSet() const;
    void unsetpoolGroupId();
    void setPoolGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MainContainerCustomizedFlavor getMainContainerCustomizedFlavor() const;
    bool mainContainerCustomizedFlavorIsSet() const;
    void unsetmainContainerCustomizedFlavor();
    void setMainContainerCustomizedFlavor(const MainContainerCustomizedFlavor& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;
    int32_t nodeCount_;
    bool nodeCountIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string poolGroupId_;
    bool poolGroupIdIsSet_;
    MainContainerCustomizedFlavor mainContainerCustomizedFlavor_;
    bool mainContainerCustomizedFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecResource_H_
