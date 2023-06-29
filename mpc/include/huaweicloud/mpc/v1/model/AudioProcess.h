
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  AudioProcess
    : public ModelBase
{
public:
    AudioProcess();
    virtual ~AudioProcess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AudioProcess members

    /// <summary>
    /// 音量调整方式： - auto：表示自动调整音量。 - dynamic：表示人为调整，需设定音量调整幅值。 
    /// </summary>

    std::string getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const std::string& value);

    /// <summary>
    /// 音量调整幅值，需指定volume为dynamic。  取值范围：[-15,15]  单位：dB 
    /// </summary>

    int32_t getVolumeExpr() const;
    bool volumeExprIsSet() const;
    void unsetvolumeExpr();
    void setVolumeExpr(int32_t value);


protected:
    std::string volume_;
    bool volumeIsSet_;
    int32_t volumeExpr_;
    bool volumeExprIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioProcess_H_
