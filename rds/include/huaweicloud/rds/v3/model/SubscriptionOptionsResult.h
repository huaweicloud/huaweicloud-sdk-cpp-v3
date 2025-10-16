
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SubscriptionOptionsResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SubscriptionOptionsResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 订阅选项。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SubscriptionOptionsResult
    : public ModelBase
{
public:
    SubscriptionOptionsResult();
    virtual ~SubscriptionOptionsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionOptionsResult members

    /// <summary>
    /// 独立的分发代理。  true：使用。 false：不使用。
    /// </summary>

    bool isIndependentAgent() const;
    bool independentAgentIsSet() const;
    void unsetindependentAgent();
    void setIndependentAgent(bool value);

    /// <summary>
    /// 复制架构更改。  true：可更改。 false：不可更改。
    /// </summary>

    bool isReplicateDdl() const;
    bool replicateDdlIsSet() const;
    void unsetreplicateDdl();
    void setReplicateDdl(bool value);

    /// <summary>
    /// 快照始终可用。  true：可用。 false：不可用。
    /// </summary>

    bool isSnapshotAlwaysAvailable() const;
    bool snapshotAlwaysAvailableIsSet() const;
    void unsetsnapshotAlwaysAvailable();
    void setSnapshotAlwaysAvailable(bool value);

    /// <summary>
    /// 允许使用备份文件初始化。  true：允许。 false：不允许。
    /// </summary>

    bool isAllowInitializeFromBackup() const;
    bool allowInitializeFromBackupIsSet() const;
    void unsetallowInitializeFromBackup();
    void setAllowInitializeFromBackup(bool value);


protected:
    bool independentAgent_;
    bool independentAgentIsSet_;
    bool replicateDdl_;
    bool replicateDdlIsSet_;
    bool snapshotAlwaysAvailable_;
    bool snapshotAlwaysAvailableIsSet_;
    bool allowInitializeFromBackup_;
    bool allowInitializeFromBackupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SubscriptionOptionsResult_H_
