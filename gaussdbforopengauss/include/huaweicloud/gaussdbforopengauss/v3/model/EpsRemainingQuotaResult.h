
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsRemainingQuotaResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsRemainingQuotaResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  EpsRemainingQuotaResult
    : public ModelBase
{
public:
    EpsRemainingQuotaResult();
    virtual ~EpsRemainingQuotaResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EpsRemainingQuotaResult members

    /// <summary>
    /// **参数解释**: 企业项目ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getEpsTag() const;
    bool epsTagIsSet() const;
    void unsetepsTag();
    void setEpsTag(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getInstanceEpsQuota() const;
    bool instanceEpsQuotaIsSet() const;
    void unsetinstanceEpsQuota();
    void setInstanceEpsQuota(int32_t value);

    /// <summary>
    /// **参数解释**: CPU配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCpuEpsQuota() const;
    bool cpuEpsQuotaIsSet() const;
    void unsetcpuEpsQuota();
    void setCpuEpsQuota(int32_t value);

    /// <summary>
    /// **参数解释**: 内存配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMemEpsQuota() const;
    bool memEpsQuotaIsSet() const;
    void unsetmemEpsQuota();
    void setMemEpsQuota(int32_t value);

    /// <summary>
    /// **参数解释**: 存储空间配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getVolumeEpsQuota() const;
    bool volumeEpsQuotaIsSet() const;
    void unsetvolumeEpsQuota();
    void setVolumeEpsQuota(int32_t value);

    /// <summary>
    /// **参数解释**: 实例剩余配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getInstanceEpsRemainingQuota() const;
    bool instanceEpsRemainingQuotaIsSet() const;
    void unsetinstanceEpsRemainingQuota();
    void setInstanceEpsRemainingQuota(int32_t value);

    /// <summary>
    /// **参数解释**: CPU剩余配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCpuEpsRemainingQuota() const;
    bool cpuEpsRemainingQuotaIsSet() const;
    void unsetcpuEpsRemainingQuota();
    void setCpuEpsRemainingQuota(int32_t value);

    /// <summary>
    /// **参数解释**: 内存剩余配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMemEpsRemainingQuota() const;
    bool memEpsRemainingQuotaIsSet() const;
    void unsetmemEpsRemainingQuota();
    void setMemEpsRemainingQuota(int32_t value);

    /// <summary>
    /// **参数解释**: 存储空间剩余配额。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getVolumeEpsRemainingQuota() const;
    bool volumeEpsRemainingQuotaIsSet() const;
    void unsetvolumeEpsRemainingQuota();
    void setVolumeEpsRemainingQuota(int32_t value);


protected:
    std::string epsTag_;
    bool epsTagIsSet_;
    int32_t instanceEpsQuota_;
    bool instanceEpsQuotaIsSet_;
    int32_t cpuEpsQuota_;
    bool cpuEpsQuotaIsSet_;
    int32_t memEpsQuota_;
    bool memEpsQuotaIsSet_;
    int32_t volumeEpsQuota_;
    bool volumeEpsQuotaIsSet_;
    int32_t instanceEpsRemainingQuota_;
    bool instanceEpsRemainingQuotaIsSet_;
    int32_t cpuEpsRemainingQuota_;
    bool cpuEpsRemainingQuotaIsSet_;
    int32_t memEpsRemainingQuota_;
    bool memEpsRemainingQuotaIsSet_;
    int32_t volumeEpsRemainingQuota_;
    bool volumeEpsRemainingQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_EpsRemainingQuotaResult_H_
