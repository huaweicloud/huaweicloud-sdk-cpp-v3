
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupAutoscaling_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupAutoscaling_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩展伸缩组弹性伸缩配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleGroupAutoscaling
    : public ModelBase
{
public:
    ScaleGroupAutoscaling();
    virtual ~ScaleGroupAutoscaling();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleGroupAutoscaling members

    /// <summary>
    /// 伸缩组弹性扩缩容启用开关，默认不开启
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 伸缩组优先级，未设置则默认为0，数值越大优先级越高
    /// </summary>

    int32_t getExtensionPriority() const;
    bool extensionPriorityIsSet() const;
    void unsetextensionPriority();
    void setExtensionPriority(int32_t value);

    /// <summary>
    /// 弹性伸缩时，伸缩组最少应保持的节点数量，必须大于0
    /// </summary>

    int32_t getMinNodeCount() const;
    bool minNodeCountIsSet() const;
    void unsetminNodeCount();
    void setMinNodeCount(int32_t value);

    /// <summary>
    /// 弹性伸缩时，伸缩组最多可保持的节点数量，应大于等于 **minNodeCount**, 不可大于集群规格所允许的节点上限，不可大于节点池节点数量上限
    /// </summary>

    int32_t getMaxNodeCount() const;
    bool maxNodeCountIsSet() const;
    void unsetmaxNodeCount();
    void setMaxNodeCount(int32_t value);


protected:
    bool enable_;
    bool enableIsSet_;
    int32_t extensionPriority_;
    bool extensionPriorityIsSet_;
    int32_t minNodeCount_;
    bool minNodeCountIsSet_;
    int32_t maxNodeCount_;
    bool maxNodeCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupAutoscaling_H_
