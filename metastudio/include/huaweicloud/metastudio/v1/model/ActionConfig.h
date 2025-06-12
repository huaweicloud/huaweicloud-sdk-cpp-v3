
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionConfig_H_


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
/// 动作编排配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ActionConfig
    : public ModelBase
{
public:
    ActionConfig();
    virtual ~ActionConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionConfig members

    /// <summary>
    /// 算法自动插入无语义动作的时间间隔。这个参数填0或者不填默认是间隔4秒，设置成255时不自动插入无语义动作。
    /// </summary>

    float getActionInterval() const;
    bool actionIntervalIsSet() const;
    void unsetactionInterval();
    void setActionInterval(float value);


protected:
    float actionInterval_;
    bool actionIntervalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ActionConfig_H_
