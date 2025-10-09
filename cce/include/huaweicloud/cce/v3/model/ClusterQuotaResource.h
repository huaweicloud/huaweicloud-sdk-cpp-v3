
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterQuotaResource_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterQuotaResource_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterQuotaResource
    : public ModelBase
{
public:
    ClusterQuotaResource();
    virtual ~ClusterQuotaResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterQuotaResource members

    /// <summary>
    /// **参数解释**： 资源类型 **约束限制**： 不涉及 **取值范围**： - cluster：Standard/Turbo集群 - autopilot_cluster：Autopilot集群  **默认取值**： 不涉及 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 总配额 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// **参数解释**： 配额已使用数量 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// **参数解释**： 单位 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// **参数解释**： 配额最小值 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);

    /// <summary>
    /// **参数解释**： 配额最大值 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string unit_;
    bool unitIsSet_;
    int32_t min_;
    bool minIsSet_;
    int32_t max_;
    bool maxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterQuotaResource_H_
