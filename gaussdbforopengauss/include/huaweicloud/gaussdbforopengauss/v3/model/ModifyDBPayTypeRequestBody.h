
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyDBPayTypeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyDBPayTypeRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/PeriodChargeInfoOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ModifyDBPayTypeRequestBody
    : public ModelBase
{
public:
    ModifyDBPayTypeRequestBody();
    virtual ~ModifyDBPayTypeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDBPayTypeRequestBody members

    /// <summary>
    /// **参数解释**: 需要转成包周期计费模式的实例ID列表。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getEntityIds();
    bool entityIdsIsSet() const;
    void unsetentityIds();
    void setEntityIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodChargeInfoOption getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const PeriodChargeInfoOption& value);


protected:
    std::vector<std::string> entityIds_;
    bool entityIdsIsSet_;
    PeriodChargeInfoOption chargeInfo_;
    bool chargeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ModifyDBPayTypeRequestBody_H_
