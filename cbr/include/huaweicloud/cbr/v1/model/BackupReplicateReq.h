
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupReplicateReqBody.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  BackupReplicateReq
    : public ModelBase
{
public:
    BackupReplicateReq();
    virtual ~BackupReplicateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupReplicateReq members

    /// <summary>
    /// 
    /// </summary>

    BackupReplicateReqBody getReplicate() const;
    bool replicateIsSet() const;
    void unsetreplicate();
    void setReplicate(const BackupReplicateReqBody& value);


protected:
    BackupReplicateReqBody replicate_;
    bool replicateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupReplicateReq_H_
