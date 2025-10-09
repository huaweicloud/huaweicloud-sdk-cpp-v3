
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
    /// 节点池期望节点数
    /// </summary>

    int32_t getDesiredNodeCount() const;
    bool desiredNodeCountIsSet() const;
    void unsetdesiredNodeCount();
    void setDesiredNodeCount(int32_t value);

    /// <summary>
    /// **参数解释**： 要扩缩容的节点池中的伸缩组名称[，通过[获取指定的节点池](cce_02_0355.xml)接口获取伸缩组名称](tag:hws) **约束限制**： 如果要伸缩默认伸缩组填\&quot;default\&quot; **取值范围**： 不涉及 **默认取值**： 不涉及
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
