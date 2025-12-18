
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductRequestDetail_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductRequestDetail_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订购套餐包的套餐包请求详情。
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  PackageProductRequestDetail
    : public ModelBase
{
public:
    PackageProductRequestDetail();
    virtual ~PackageProductRequestDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageProductRequestDetail members

    /// <summary>
    /// **参数解释：** 套餐包规格，通过套餐包列表接口获取。 **约束限制：** 不涉及 **取值范围：** 只支持通过套餐包列表接口获取的套餐包规格。 **默认取值：** 不涉及 
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释：** 套餐包订购数量。 **约束限制：** 不涉及 **取值范围：** [1-10] **默认取值：** 0 
    /// </summary>

    int32_t getSubscriptionNum() const;
    bool subscriptionNumIsSet() const;
    void unsetsubscriptionNum();
    void setSubscriptionNum(int32_t value);


protected:
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    int32_t subscriptionNum_;
    bool subscriptionNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_PackageProductRequestDetail_H_
