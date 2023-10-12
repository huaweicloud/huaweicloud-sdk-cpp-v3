
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_SubAudioFile_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_SubAudioFile_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TracksInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  SubAudioFile
    : public ModelBase
{
public:
    SubAudioFile();
    virtual ~SubAudioFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubAudioFile members

    /// <summary>
    /// 音轨信息
    /// </summary>

    std::vector<TracksInfo>& getTracksInfo();
    bool tracksInfoIsSet() const;
    void unsettracksInfo();
    void setTracksInfo(const std::vector<TracksInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 输出文件名。 
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);


protected:
    std::vector<TracksInfo> tracksInfo_;
    bool tracksInfoIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_SubAudioFile_H_
