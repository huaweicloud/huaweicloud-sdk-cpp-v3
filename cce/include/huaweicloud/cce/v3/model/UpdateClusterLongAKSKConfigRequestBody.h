
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterLongAKSKConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterLongAKSKConfigRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateClusterLongAKSKConfigRequestBody
    : public ModelBase
{
public:
    UpdateClusterLongAKSKConfigRequestBody();
    virtual ~UpdateClusterLongAKSKConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateClusterLongAKSKConfigRequestBody members

    /// <summary>
    /// **参数解释：** 是否启用LongAKSK，启用后在集群kube-system命名空间下会创建名称为paas.longaksk的密钥，关闭则会删除该密钥。 **约束限制：** 不涉及 **取值范围：** - false: 禁用LongAKSK - true: 启用LongAKSK  **默认取值：** 不涉及
    /// </summary>

    bool isEnableLongAKSK() const;
    bool enableLongAKSKIsSet() const;
    void unsetenableLongAKSK();
    void setEnableLongAKSK(bool value);


protected:
    bool enableLongAKSK_;
    bool enableLongAKSKIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateClusterLongAKSKConfigRequestBody_H_
