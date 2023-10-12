
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackupReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackupReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultBackup.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultBackupReq
    : public ModelBase
{
public:
    VaultBackupReq();
    virtual ~VaultBackupReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultBackupReq members

    /// <summary>
    /// 
    /// </summary>

    VaultBackup getCheckpoint() const;
    bool checkpointIsSet() const;
    void unsetcheckpoint();
    void setCheckpoint(const VaultBackup& value);


protected:
    VaultBackup checkpoint_;
    bool checkpointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackupReq_H_
