
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBackupPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBackupPolicyRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/BackupPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SetBackupPolicyRequestBody
    : public ModelBase
{
public:
    SetBackupPolicyRequestBody();
    virtual ~SetBackupPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetBackupPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BackupPolicy getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const BackupPolicy& value);


protected:
    BackupPolicy backupPolicy_;
    bool backupPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBackupPolicyRequestBody_H_
