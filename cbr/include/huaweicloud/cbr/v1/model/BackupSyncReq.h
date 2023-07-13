
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupSync.h>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupSyncReq
    : public ModelBase
{
public:
    BackupSyncReq();
    virtual ~BackupSyncReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupSyncReq members

    /// <summary>
    /// 待同步备份副本列表
    /// </summary>

    std::vector<BackupSync>& getSync();
    bool syncIsSet() const;
    void unsetsync();
    void setSync(const std::vector<BackupSync>& value);


protected:
    std::vector<BackupSync> sync_;
    bool syncIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncReq_H_
