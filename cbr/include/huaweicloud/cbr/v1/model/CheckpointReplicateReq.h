
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointReplicateParam.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 执行复制请求体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointReplicateReq
    : public ModelBase
{
public:
    CheckpointReplicateReq();
    virtual ~CheckpointReplicateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointReplicateReq members

    /// <summary>
    /// 
    /// </summary>

    CheckpointReplicateParam getReplicate() const;
    bool replicateIsSet() const;
    void unsetreplicate();
    void setReplicate(const CheckpointReplicateParam& value);


protected:
    CheckpointReplicateParam replicate_;
    bool replicateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateReq_H_
