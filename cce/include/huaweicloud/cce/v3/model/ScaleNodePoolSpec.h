
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/ScaleNodePoolOptions.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 伸缩节点池请求详细参数
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleNodePoolSpec
    : public ModelBase
{
public:
    ScaleNodePoolSpec();
    virtual ~ScaleNodePoolSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleNodePoolSpec members

    /// <summary>
    /// **参数解释**： 节点池的预期总数量。执行扩容操作时，需将当前节点数与扩容数量相加；执行缩容操作时，需从当前节点数中减去缩容数量。 **约束限制**： 必填参数，如果省略则默认值为0，会导致删除节点池伸缩组下的所有节点 **取值范围**： 0或正整数 **默认取值**： 0
    /// </summary>

    int32_t getDesiredNodeCount() const;
    bool desiredNodeCountIsSet() const;
    void unsetdesiredNodeCount();
    void setDesiredNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**： 要扩缩容的节点池中的伸缩组名称，通过[获取指定的节点池](cce_02_0355.xml)接口获取伸缩组名称。扩容时可选择多个伸缩组，系统将按照尽量均分或随机策略在所选伸缩组间分配扩容节点数，缩容时则仅能指定单个伸缩组进行操作。 **约束限制**： 如果要伸缩默认伸缩组填\&quot;default\&quot; **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getScaleGroups();
    bool scaleGroupsIsSet() const;
    void unsetscaleGroups();
    void setScaleGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ScaleNodePoolOptions getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const ScaleNodePoolOptions& value);


protected:
    int32_t desiredNodeCount_;
    bool desiredNodeCountIsSet_;
    std::vector<std::string> scaleGroups_;
    bool scaleGroupsIsSet_;
    ScaleNodePoolOptions options_;
    bool optionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleNodePoolSpec_H_
