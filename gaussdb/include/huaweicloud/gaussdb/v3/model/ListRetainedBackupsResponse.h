
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRetainedBackupsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRetainedBackupsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RetainedBackupInfo.h>
#include <huaweicloud/gaussdb/v3/model/RetainedBackupPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListRetainedBackupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRetainedBackupsResponse();
    virtual ~ListRetainedBackupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRetainedBackupsResponse members

    /// <summary>
    /// **参数解释**：  保留备份信息列表。
    /// </summary>

    std::vector<RetainedBackupInfo>& getRecycleBackupInfos();
    bool recycleBackupInfosIsSet() const;
    void unsetrecycleBackupInfos();
    void setRecycleBackupInfos(const std::vector<RetainedBackupInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    RetainedBackupPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const RetainedBackupPolicy& value);

    /// <summary>
    /// **参数解释**：  保留备份总数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<RetainedBackupInfo> recycleBackupInfos_;
    bool recycleBackupInfosIsSet_;
    RetainedBackupPolicy policy_;
    bool policyIsSet_;
    int64_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListRetainedBackupsResponse_H_
