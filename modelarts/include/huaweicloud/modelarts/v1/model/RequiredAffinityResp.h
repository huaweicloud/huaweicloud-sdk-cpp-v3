
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinityResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinityResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RequiredAffinityResp
    : public ModelBase
{
public:
    RequiredAffinityResp();
    virtual ~RequiredAffinityResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequiredAffinityResp members

    /// <summary>
    /// **参数解释**：亲和调度策略。 **取值范围**： - cabinet：强整柜调度 - hyperinstance：超节点亲和调度
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
    /// **参数解释**：亲和组大小。 **取值范围**：不涉及。
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


protected:
    std::string affinityType_;
    bool affinityTypeIsSet_;
    std::string jobLevel_;
    bool jobLevelIsSet_;
    int32_t affinityGroupSize_;
    bool affinityGroupSizeIsSet_;
    std::string affinityGroupLevel_;
    bool affinityGroupLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RequiredAffinityResp_H_
