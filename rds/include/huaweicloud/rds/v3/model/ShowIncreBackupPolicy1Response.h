
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Response_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Response_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ShowIncreBackupPolicyRespBody_incre_backup_policy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowIncreBackupPolicy1Response
    : public ModelBase, public HttpResponse
{
public:
    ShowIncreBackupPolicy1Response();
    virtual ~ShowIncreBackupPolicy1Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIncreBackupPolicy1Response members

    /// <summary>
    /// 
    /// </summary>

    ShowIncreBackupPolicyRespBody_incre_backup_policy getIncreBackupPolicy() const;
    bool increBackupPolicyIsSet() const;
    void unsetincreBackupPolicy();
    void setIncreBackupPolicy(const ShowIncreBackupPolicyRespBody_incre_backup_policy& value);


protected:
    ShowIncreBackupPolicyRespBody_incre_backup_policy increBackupPolicy_;
    bool increBackupPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Response_H_
