
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AudioInfo
    : public ModelBase
{
public:
    AudioInfo();
    virtual ~AudioInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioInfo members

    /// <summary>
    /// **参数解释**： 音频id。 &gt; * 获取方式：剧本为音频驱动时，查询剧本详情或者更新剧本会返回audio_id  **约束限制**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getAudioId() const;
    bool audioIdIsSet() const;
    void unsetaudioId();
    void setAudioId(int32_t value);


protected:
    int32_t audioId_;
    bool audioIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioInfo_H_
