
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportCheckpointResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportCheckpointResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/SyncRespBody.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ImportCheckpointResponse
    : public ModelBase, public HttpResponse
{
public:
    ImportCheckpointResponse();
    virtual ~ImportCheckpointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportCheckpointResponse members

    /// <summary>
    /// 
    /// </summary>

    SyncRespBody getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(const SyncRespBody& value);


protected:
    SyncRespBody sync_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportCheckpointResponse_H_
