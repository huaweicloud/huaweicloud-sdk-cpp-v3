
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackTotalResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackTotalResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 攻击统计信息 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowAttackTotalResp_data
    : public ModelBase
{
public:
    ShowAttackTotalResp_data();
    virtual ~ShowAttackTotalResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAttackTotalResp_data members

    /// <summary>
    /// **参数解释**： 攻击次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getAttackCount() const;
    bool attackCountIsSet() const;
    void unsetattackCount();
    void setAttackCount(int64_t value);

    /// <summary>
    /// **参数解释**： 阻断次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDenyCount() const;
    bool denyCountIsSet() const;
    void unsetdenyCount();
    void setDenyCount(int64_t value);

    /// <summary>
    /// **参数解释**： 放行次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getPermitCount() const;
    bool permitCountIsSet() const;
    void unsetpermitCount();
    void setPermitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 风险端口 **取值范围**： 不涉及
    /// </summary>

    int64_t getRiskPorts() const;
    bool riskPortsIsSet() const;
    void unsetriskPorts();
    void setRiskPorts(int64_t value);


protected:
    int64_t attackCount_;
    bool attackCountIsSet_;
    int64_t denyCount_;
    bool denyCountIsSet_;
    int64_t permitCount_;
    bool permitCountIsSet_;
    int64_t riskPorts_;
    bool riskPortsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowAttackTotalResp_data_H_
