
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyCheckpointResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyCheckpointResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointReplicateRespBody.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CopyCheckpointResponse
    : public ModelBase, public HttpResponse
{
public:
    CopyCheckpointResponse();
    virtual ~CopyCheckpointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyCheckpointResponse members

    /// <summary>
    /// 
    /// </summary>

    CheckpointReplicateRespBody getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const CheckpointReplicateRespBody& value);


protected:
    CheckpointReplicateRespBody replication_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyCheckpointResponse_H_
