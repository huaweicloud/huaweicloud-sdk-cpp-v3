
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/SubAudioFile.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  CreateResetTracksReq
    : public ModelBase
{
public:
    CreateResetTracksReq();
    virtual ~CreateResetTracksReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResetTracksReq members

    /// <summary>
    /// 
    /// </summary>

    SubAudioFile getAudioFile() const;
    bool audioFileIsSet() const;
    void unsetaudioFile();
    void setAudioFile(const SubAudioFile& value);


protected:
    SubAudioFile audioFile_;
    bool audioFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateResetTracksReq_H_
