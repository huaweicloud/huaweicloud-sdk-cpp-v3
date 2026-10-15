
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetupSyncPolicyReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetupSyncPolicyReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/SyncPolicyReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量设置同步策略请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchSetupSyncPolicyReq
    : public ModelBase
{
public:
    BatchSetupSyncPolicyReq();
    virtual ~BatchSetupSyncPolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSetupSyncPolicyReq members

    /// <summary>
    /// **参数解释**：  批量设置同步策略请求列表，包含需要设置策略的同步任务信息。详情请参见SyncPolicyReq对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<SyncPolicyReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<SyncPolicyReq>& value);


protected:
    std::vector<SyncPolicyReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchSetupSyncPolicyReq_H_
