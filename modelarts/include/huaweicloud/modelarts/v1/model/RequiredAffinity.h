
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinity_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinity_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeSelector.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业亲和要求
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RequiredAffinity
    : public ModelBase
{
public:
    RequiredAffinity();
    virtual ~RequiredAffinity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequiredAffinity members

    /// <summary>
    /// **参数解释**：亲和调度策略。 **约束限制**：不涉及。 **取值范围**： - cabinet：强整柜调度 - hyperinstance：超节点亲和调度 - networkTopology: 网络拓扑亲和调度  **默认取值**：不涉及。
    /// </summary>

    std::string getAffinityType() const;
    bool affinityTypeIsSet() const;
    void unsetaffinityType();
    void setAffinityType(const std::string& value);

    /// <summary>
    /// **参数解释**：作业整体的网络拓扑约束。 **约束限制**：affinity_type为networkTopology时有效，系统会将作业的所有task调度至不高于job_level层的节点组中。 用户向超节点资源池投递训练作业，如果未设置作业整体的网络拓扑约束，系统会默认赋值为cluster。 **取值范围**： - cluster：资源池级 - hyperinstanceGroup: 超节点级  **默认取值**：默认值cluster。
    /// </summary>

    std::string getJobLevel() const;
    bool jobLevelIsSet() const;
    void unsetjobLevel();
    void setJobLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：亲和组大小。 **约束限制**：affinity_type为hyperinstance或networkTopology时必填，系统会将affinity_group_size个task调度到一个超节点内组成亲和组。affinity_group_size的大小不能超过超节点的步长。 用户向超节点资源池投递训练作业，如果未设置亲和组大小，系统会默认赋值为1。 **取值范围**：不涉及。 **默认取值**：默认值1。
    /// </summary>

    int32_t getAffinityGroupSize() const;
    bool affinityGroupSizeIsSet() const;
    void unsetaffinityGroupSize();
    void setAffinityGroupSize(int32_t value);

    /// <summary>
    /// **参数解释**：亲和组的网络拓扑约束。 **约束限制**：affinity_type为networkTopology时有效，系统会将affinity_group_size个task组成的亲和组调度至不高于affinity_group_level层的节点组中。 用户向超节点资源池投递训练作业，如果未设置亲和组的网络拓扑约束，系统会默认赋值为hyperinstanceGroup。 **取值范围**： - hyperinstance：超节点级 - slice: 柜级  **默认取值**：默认值hyperinstanceGroup。
    /// </summary>

    std::string getAffinityGroupLevel() const;
    bool affinityGroupLevelIsSet() const;
    void unsetaffinityGroupLevel();
    void setAffinityGroupLevel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeSelector getNodeAffinity() const;
    bool nodeAffinityIsSet() const;
    void unsetnodeAffinity();
    void setNodeAffinity(const NodeSelector& value);


protected:
    std::string affinityType_;
    bool affinityTypeIsSet_;
    std::string jobLevel_;
    bool jobLevelIsSet_;
    int32_t affinityGroupSize_;
    bool affinityGroupSizeIsSet_;
    std::string affinityGroupLevel_;
    bool affinityGroupLevelIsSet_;
    NodeSelector nodeAffinity_;
    bool nodeAffinityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinity_H_
