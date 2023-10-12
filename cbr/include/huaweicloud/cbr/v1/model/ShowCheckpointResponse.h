
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointCreate.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ShowCheckpointResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCheckpointResponse();
    virtual ~ShowCheckpointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCheckpointResponse members

    /// <summary>
    /// 
    /// </summary>

    CheckpointCreate getCheckpoint() const;
    bool checkpointIsSet() const;
    void unsetcheckpoint();
    void setCheckpoint(const CheckpointCreate& value);


protected:
    CheckpointCreate checkpoint_;
    bool checkpointIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowCheckpointResponse_H_
