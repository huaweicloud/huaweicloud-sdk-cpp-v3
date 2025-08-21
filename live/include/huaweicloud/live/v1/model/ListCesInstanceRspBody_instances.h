
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_instances_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_instances_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ListCesInstanceRspBody_pipeline.h>
#include <huaweicloud/live/v1/model/ListCesInstanceRspBody_medialive_mpc.h>
#include <huaweicloud/live/v1/model/ListCesInstanceRspBody_audio.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesInstanceRspBody_instances
    : public ModelBase
{
public:
    ListCesInstanceRspBody_instances();
    virtual ~ListCesInstanceRspBody_instances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesInstanceRspBody_instances members

    /// <summary>
    /// 
    /// </summary>

    ListCesInstanceRspBody_medialive_mpc getMedialiveMpc() const;
    bool medialiveMpcIsSet() const;
    void unsetmedialiveMpc();
    void setMedialiveMpc(const ListCesInstanceRspBody_medialive_mpc& value);

    /// <summary>
    /// 
    /// </summary>

    ListCesInstanceRspBody_pipeline getPipeline() const;
    bool pipelineIsSet() const;
    void unsetpipeline();
    void setPipeline(const ListCesInstanceRspBody_pipeline& value);

    /// <summary>
    /// 
    /// </summary>

    ListCesInstanceRspBody_audio getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const ListCesInstanceRspBody_audio& value);


protected:
    ListCesInstanceRspBody_medialive_mpc medialiveMpc_;
    bool medialiveMpcIsSet_;
    ListCesInstanceRspBody_pipeline pipeline_;
    bool pipelineIsSet_;
    ListCesInstanceRspBody_audio audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_instances_H_
