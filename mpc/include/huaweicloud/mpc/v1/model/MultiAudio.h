
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TracksInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/AudioFile.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  MultiAudio
    : public ModelBase
{
public:
    MultiAudio();
    virtual ~MultiAudio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiAudio members

    /// <summary>
    /// 音轨信息
    /// </summary>

    std::vector<TracksInfo>& getTracksInfo();
    bool tracksInfoIsSet() const;
    void unsettracksInfo();
    void setTracksInfo(const std::vector<TracksInfo>& value);

    /// <summary>
    /// 音频文件
    /// </summary>

    std::vector<AudioFile>& getAudioFiles();
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const std::vector<AudioFile>& value);

    /// <summary>
    /// 默认语言
    /// </summary>

    std::string getDefaultLanguage() const;
    bool defaultLanguageIsSet() const;
    void unsetdefaultLanguage();
    void setDefaultLanguage(const std::string& value);


protected:
    std::vector<TracksInfo> tracksInfo_;
    bool tracksInfoIsSet_;
    std::vector<AudioFile> audioFiles_;
    bool audioFilesIsSet_;
    std::string defaultLanguage_;
    bool defaultLanguageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiAudio_H_
