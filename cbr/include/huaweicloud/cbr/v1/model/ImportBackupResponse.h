
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupSyncRespBody.h>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ImportBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    ImportBackupResponse();
    virtual ~ImportBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ImportBackupResponse members

    /// <summary>
    /// 同步备份副本接口的返回信息
    /// </summary>

    std::vector<BackupSyncRespBody>& getSync();
    bool syncIsSet() const;
    void unsetsync();
    void setSync(const std::vector<BackupSyncRespBody>& value);


protected:
    std::vector<BackupSyncRespBody> sync_;
    bool syncIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupResponse_H_
