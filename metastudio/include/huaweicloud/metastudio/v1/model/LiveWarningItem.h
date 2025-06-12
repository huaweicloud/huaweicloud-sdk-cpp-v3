
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveWarningItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveWarningItem_H_


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
/// 开播风险警告
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveWarningItem
    : public ModelBase
{
public:
    LiveWarningItem();
    virtual ~LiveWarningItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveWarningItem members

    /// <summary>
    /// 告警类型。 - TOO_LESSS_SCRIPT_ITEMS：段落（话术）数量太少。 - TOO_SHORT_SCRIPT_TIME：段落（话术）总时长太短。 - TOO_LESS_DANMAKU_RULES： 弹幕互动规则太少。 - RANDOM_PLAY_CLOSED: 随机播放开关关闭。 - ROTATION_MODEL_CLOSED: 主播轮转未配置。
    /// </summary>

    std::string getWarningType() const;
    bool warningTypeIsSet() const;
    void unsetwarningType();
    void setWarningType(const std::string& value);


protected:
    std::string warningType_;
    bool warningTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveWarningItem_H_
