
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupUpdateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupUpdateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新请求参数体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupUpdateReq
    : public ModelBase
{
public:
    BackupUpdateReq();
    virtual ~BackupUpdateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupUpdateReq members

    /// <summary>
    /// 
    /// </summary>

    BackupUpdate getBackup() const;
    bool backupIsSet() const;
    void unsetbackup();
    void setBackup(const BackupUpdate& value);


protected:
    BackupUpdate backup_;
    bool backupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupUpdateReq_H_
