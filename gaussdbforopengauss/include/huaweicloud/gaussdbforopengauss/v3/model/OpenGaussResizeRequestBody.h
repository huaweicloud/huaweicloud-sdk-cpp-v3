
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussResizeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussResizeRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格变更时必填。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussResizeRequestBody
    : public ModelBase
{
public:
    OpenGaussResizeRequestBody();
    virtual ~OpenGaussResizeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenGaussResizeRequestBody members

    /// <summary>
    /// **参数解释**: 规格变更的新规格的资源规格编码。参考表1中的“规格编码”列内容获取。参考查询数据库规格 - QueryingInstanceSpecifications中“spec_code”字段获取。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// **参数解释**: 包周期实例时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 **约束限制**: 不涉及。 **取值范围**: - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。  **默认取值**: false
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// **参数解释**: 指定CN节点的规格变更并行数。 调整CN节点并行变更数可以加快规格变更的过程，建议使用系统默认配置的规格。如需调整，请根据当前系统负载评估剩余CN节点业务负载变化情况，确保业务稳定性和中断时长在可接受范围内。 **约束限制**: 仅对独立部署形态实例生效。 **取值范围**: [1, floor(总协调节点数/2)]，单批次最多变更20个协调节点。 **默认取值**: 1
    /// </summary>

    int32_t getCnConcurrentResizeNum() const;
    bool cnConcurrentResizeNumIsSet() const;
    void unsetcnConcurrentResizeNum();
    void setCnConcurrentResizeNum(int32_t value);

    /// <summary>
    /// **参数解释**: 指定DN节点的规格变更并行数。 调整DN节点并行变更数可以加快规格变更的过程，建议使用系统默认配置的规格。如需调整，建议根据当前系统负载评估短时间内倒换DN节点数量情况，确保业务稳定性和中断时长在可接受范围内。 **约束限制**: 不涉及。 **取值范围**: - 当总分片数&lt;&#x3D;5时，取值范围为[1, 总分片数]。 - 当总分片数＞5时，取值范围为[1, max(floor(分片数/2),5)]，单批次最多变更20个分片。  **默认取值**: 不指定分片并发数时，分为以下两种情况： - 当总分片数&lt;&#x3D;5时，默认一起变更。 - 当总分片数＞5时，默认每次变更5个，最后一批可不足5个。
    /// </summary>

    int32_t getDnConcurrentResizeNum() const;
    bool dnConcurrentResizeNumIsSet() const;
    void unsetdnConcurrentResizeNum();
    void setDnConcurrentResizeNum(int32_t value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    int32_t cnConcurrentResizeNum_;
    bool cnConcurrentResizeNumIsSet_;
    int32_t dnConcurrentResizeNum_;
    bool dnConcurrentResizeNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussResizeRequestBody_H_
