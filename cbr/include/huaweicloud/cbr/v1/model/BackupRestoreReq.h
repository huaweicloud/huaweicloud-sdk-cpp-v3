
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupRestore.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 恢复请求body
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupRestoreReq
    : public ModelBase
{
public:
    BackupRestoreReq();
    virtual ~BackupRestoreReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupRestoreReq members

    /// <summary>
    /// 
    /// </summary>

    BackupRestore getRestore() const;
    bool restoreIsSet() const;
    void unsetrestore();
    void setRestore(const BackupRestore& value);


protected:
    BackupRestore restore_;
    bool restoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupRestoreReq_H_
