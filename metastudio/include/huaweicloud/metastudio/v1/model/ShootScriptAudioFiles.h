
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFiles_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFiles_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/metastudio/v1/model/ShootScriptAudioFileItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用于语音驱动的音频文件上传URL列表。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptAudioFiles
    : public ModelBase
{
public:
    ShootScriptAudioFiles();
    virtual ~ShootScriptAudioFiles();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptAudioFiles members

    /// <summary>
    /// 用于语音驱动的音频文件上传URL。
    /// </summary>

    std::vector<ShootScriptAudioFileItem>& getAudioFileUrl();
    bool audioFileUrlIsSet() const;
    void unsetaudioFileUrl();
    void setAudioFileUrl(const std::vector<ShootScriptAudioFileItem>& value);


protected:
    std::vector<ShootScriptAudioFileItem> audioFileUrl_;
    bool audioFileUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFiles_H_
