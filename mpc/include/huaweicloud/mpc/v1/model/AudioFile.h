
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioFile_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioFile_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TracksInfo.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  AudioFile
    : public ModelBase
{
public:
    AudioFile();
    virtual ~AudioFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioFile members

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


protected:
    std::vector<TracksInfo> tracksInfo_;
    bool tracksInfoIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioFile_H_
