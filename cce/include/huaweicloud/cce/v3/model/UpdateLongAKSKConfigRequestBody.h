
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAKSKConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAKSKConfigRequestBody_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateLongAKSKConfigRequestBody
    : public ModelBase
{
public:
    UpdateLongAKSKConfigRequestBody();
    virtual ~UpdateLongAKSKConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLongAKSKConfigRequestBody members

    /// <summary>
    /// **参数解释：** 新建集群是否启用LongAKSK。 **约束限制：** 不涉及 **取值范围：** - false: 新建集群不启用LongAKSK - true: 新建集群启用LongAKSK  **默认取值：** 不涉及 
    /// </summary>

    bool isEnableLongAKSKInNewCluster() const;
    bool enableLongAKSKInNewClusterIsSet() const;
    void unsetenableLongAKSKInNewCluster();
    void setEnableLongAKSKInNewCluster(bool value);


protected:
    bool enableLongAKSKInNewCluster_;
    bool enableLongAKSKInNewClusterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAKSKConfigRequestBody_H_
