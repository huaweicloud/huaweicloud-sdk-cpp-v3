
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MpcMultiAudio_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MpcMultiAudio_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  MpcMultiAudio
    : public ModelBase
{
public:
    MpcMultiAudio();
    virtual ~MpcMultiAudio();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MpcMultiAudio members

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 音频文件列表
    /// </summary>

    std::vector<AudioFile>& getAudioFiles();
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const std::vector<AudioFile>& value);

    /// <summary>
    /// 输出文件名。 
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);


protected:
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<AudioFile> audioFiles_;
    bool audioFilesIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MpcMultiAudio_H_
