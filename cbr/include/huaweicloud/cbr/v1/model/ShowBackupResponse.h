
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowBackupResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowBackupResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBackupResponse();
    virtual ~ShowBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowBackupResponse members

    /// <summary>
    /// 
    /// </summary>

    BackupResp getBackup() const;
    bool backupIsSet() const;
    void unsetbackup();
    void setBackup(const BackupResp& value);


protected:
    BackupResp backup_;
    bool backupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowBackupResponse_H_
