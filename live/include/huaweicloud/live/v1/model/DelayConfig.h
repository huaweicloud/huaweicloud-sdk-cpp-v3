
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DelayConfig_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DelayConfig_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DelayConfig
    : public ModelBase
{
public:
    DelayConfig();
    virtual ~DelayConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelayConfig members

    /// <summary>
    /// 应用名，默认为live
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 延时时间，单位：ms。  包含如下取值： - 2000（低）。 - 4000（中）。 - 6000（高）。
    /// </summary>

    int32_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int32_t value);


protected:
    std::string app_;
    bool appIsSet_;
    int32_t delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DelayConfig_H_
