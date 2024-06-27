
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetNewBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetNewBackupPolicyRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置备份策略请求体
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SetNewBackupPolicyRequestBody
    : public ModelBase
{
public:
    SetNewBackupPolicyRequestBody();
    virtual ~SetNewBackupPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetNewBackupPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BackupPolicyInfo getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const BackupPolicyInfo& value);


protected:
    BackupPolicyInfo backupPolicy_;
    bool backupPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SetNewBackupPolicyRequestBody_H_
