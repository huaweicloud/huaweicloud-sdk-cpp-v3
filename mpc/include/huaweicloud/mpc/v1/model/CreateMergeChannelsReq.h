
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/MpcMultiAudio.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateMergeChannelsReq
    : public ModelBase
{
public:
    CreateMergeChannelsReq();
    virtual ~CreateMergeChannelsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateMergeChannelsReq members

    /// <summary>
    /// 
    /// </summary>

    MpcMultiAudio getMultiAudio() const;
    bool multiAudioIsSet() const;
    void unsetmultiAudio();
    void setMultiAudio(const MpcMultiAudio& value);


protected:
    MpcMultiAudio multiAudio_;
    bool multiAudioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateMergeChannelsReq_H_
