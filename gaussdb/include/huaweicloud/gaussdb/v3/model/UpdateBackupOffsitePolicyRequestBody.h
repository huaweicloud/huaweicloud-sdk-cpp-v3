
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateBackupOffsitePolicyRequestBody
    : public ModelBase
{
public:
    UpdateBackupOffsitePolicyRequestBody();
    virtual ~UpdateBackupOffsitePolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBackupOffsitePolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateBackupOffsitePolicyInfo getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const UpdateBackupOffsitePolicyInfo& value);


protected:
    UpdateBackupOffsitePolicyInfo backupPolicy_;
    bool backupPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBackupOffsitePolicyRequestBody_H_
