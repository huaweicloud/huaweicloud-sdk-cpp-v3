
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorPidSelection_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorPidSelection_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PID选择器
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  AudioSelectorPidSelection
    : public ModelBase
{
public:
    AudioSelectorPidSelection();
    virtual ~AudioSelectorPidSelection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioSelectorPidSelection members

    /// <summary>
    /// 设置PID的值
    /// </summary>

    int32_t getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(int32_t value);


protected:
    int32_t pid_;
    bool pidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorPidSelection_H_
