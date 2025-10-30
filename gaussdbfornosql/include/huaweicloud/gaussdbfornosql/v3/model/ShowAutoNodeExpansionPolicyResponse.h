
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoNodeExpansionPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoNodeExpansionPolicyResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowAutoNodeExpansionPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoNodeExpansionPolicyResponse();
    virtual ~ShowAutoNodeExpansionPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoNodeExpansionPolicyResponse members

    /// <summary>
    /// **参数解释：** 节点扩容是否开启。 **约束限制：** 不涉及。 **取值范围：**   true为开启。   false为关闭。 **默认取值：** 不涉及。
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// **参数解释：** 超负载节点比例。当大等于overload_node_threshold%的节点，节点内存使用率或cpu使用率满足条件时，触发自动扩容节点。 **约束限制：** 不涉及。 **取值范围：** 1-100的正整数。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getOverloadNodeThreshold() const;
    bool overloadNodeThresholdIsSet() const;
    void unsetoverloadNodeThreshold();
    void setOverloadNodeThreshold(int32_t value);

    /// <summary>
    /// **参数解释：** 触发节点自动扩容的CPU使用率。 **约束限制：** 不涉及。 **取值范围：** 1-100的正整数。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getCpuThreshold() const;
    bool cpuThresholdIsSet() const;
    void unsetcpuThreshold();
    void setCpuThreshold(int32_t value);

    /// <summary>
    /// **参数解释：** 触发节点自动扩容的内存使用率。 **约束限制：** 不涉及。 **取值范围：** 1-100的正整数。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getMemThreshold() const;
    bool memThresholdIsSet() const;
    void unsetmemThreshold();
    void setMemThreshold(int32_t value);

    /// <summary>
    /// **参数解释：** 每次扩容的节点个数。 **约束限制：** 不涉及。 **取值范围：** 大等于1的正整数，最大不超过可扩容的节点上限。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(int32_t value);

    /// <summary>
    /// **参数解释：** 自动扩容所能达到的节点上限。 **约束限制：** 不涉及。 **取值范围：** 大等于1的正整数，最大不超过当前实例可扩容的节点上限。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getNodeLimit() const;
    bool nodeLimitIsSet() const;
    void unsetnodeLimit();
    void setNodeLimit(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t overloadNodeThreshold_;
    bool overloadNodeThresholdIsSet_;
    int32_t cpuThreshold_;
    bool cpuThresholdIsSet_;
    int32_t memThreshold_;
    bool memThresholdIsSet_;
    int32_t step_;
    bool stepIsSet_;
    int32_t nodeLimit_;
    bool nodeLimitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowAutoNodeExpansionPolicyResponse_H_
