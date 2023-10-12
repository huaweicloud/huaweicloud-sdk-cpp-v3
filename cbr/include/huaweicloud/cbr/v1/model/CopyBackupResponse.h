
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupReplicateRespBody.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CopyBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    CopyBackupResponse();
    virtual ~CopyBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CopyBackupResponse members

    /// <summary>
    /// 
    /// </summary>

    BackupReplicateRespBody getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const BackupReplicateRespBody& value);


protected:
    BackupReplicateRespBody replication_;
    bool replicationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupResponse_H_
