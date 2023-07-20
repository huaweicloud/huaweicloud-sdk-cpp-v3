
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowBackupPolicyResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/BackupPolicyItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupPolicyResponse();
    virtual ~ShowBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowBackupPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    BackupPolicyItem getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const BackupPolicyItem& value);


protected:
    BackupPolicyItem backupPolicy_;
    bool backupPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowBackupPolicyResponse_H_
