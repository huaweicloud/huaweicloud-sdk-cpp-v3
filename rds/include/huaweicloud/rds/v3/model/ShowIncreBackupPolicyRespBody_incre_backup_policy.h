
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicyRespBody_incre_backup_policy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicyRespBody_incre_backup_policy_H_


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
/// incre backup policy
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowIncreBackupPolicyRespBody_incre_backup_policy
    : public ModelBase
{
public:
    ShowIncreBackupPolicyRespBody_incre_backup_policy();
    virtual ~ShowIncreBackupPolicyRespBody_incre_backup_policy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIncreBackupPolicyRespBody_incre_backup_policy members

    /// <summary>
    /// 增备时间间隔（分）
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);


protected:
    int32_t interval_;
    bool intervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicyRespBody_incre_backup_policy_H_
