
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchSetBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchSetBackupPolicyResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyFailedRecordResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BatchSetBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchSetBackupPolicyResponse();
    virtual ~BatchSetBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSetBackupPolicyResponse members

    /// <summary>
    /// **参数解释**: 设置成功的实例数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getSucceededNum() const;
    bool succeededNumIsSet() const;
    void unsetsucceededNum();
    void setSucceededNum(int32_t value);

    /// <summary>
    /// **参数解释**: 设置失败的实例数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getFailedNum() const;
    bool failedNumIsSet() const;
    void unsetfailedNum();
    void setFailedNum(int32_t value);

    /// <summary>
    /// **参数解释**: 设置失败的实例记录。
    /// </summary>

    std::vector<BatchSetBackupPolicyFailedRecordResult>& getFailedInstances();
    bool failedInstancesIsSet() const;
    void unsetfailedInstances();
    void setFailedInstances(const std::vector<BatchSetBackupPolicyFailedRecordResult>& value);


protected:
    int32_t succeededNum_;
    bool succeededNumIsSet_;
    int32_t failedNum_;
    bool failedNumIsSet_;
    std::vector<BatchSetBackupPolicyFailedRecordResult> failedInstances_;
    bool failedInstancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchSetBackupPolicyResponse_H_
