
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioDriveActionConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioDriveActionConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 语音驱动时的动作标签配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AudioDriveActionConfig
    : public ModelBase
{
public:
    AudioDriveActionConfig();
    virtual ~AudioDriveActionConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioDriveActionConfig members

    /// <summary>
    /// 动作标签
    /// </summary>

    std::string getActionTag() const;
    bool actionTagIsSet() const;
    void unsetactionTag();
    void setActionTag(const std::string& value);

    /// <summary>
    /// 动作名称
    /// </summary>

    std::string getActionName() const;
    bool actionNameIsSet() const;
    void unsetactionName();
    void setActionName(const std::string& value);

    /// <summary>
    /// 动作开始时间
    /// </summary>

    float getActionStartTime() const;
    bool actionStartTimeIsSet() const;
    void unsetactionStartTime();
    void setActionStartTime(float value);


protected:
    std::string actionTag_;
    bool actionTagIsSet_;
    std::string actionName_;
    bool actionNameIsSet_;
    float actionStartTime_;
    bool actionStartTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AudioDriveActionConfig_H_
