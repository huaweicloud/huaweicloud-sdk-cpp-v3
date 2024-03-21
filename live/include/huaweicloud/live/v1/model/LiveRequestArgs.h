
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveRequestArgs_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveRequestArgs_H_


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
/// 直播相关配置参数
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  LiveRequestArgs
    : public ModelBase
{
public:
    LiveRequestArgs();
    virtual ~LiveRequestArgs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveRequestArgs members

    /// <summary>
    /// 时延字段
    /// </summary>

    std::string getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(const std::string& value);

    /// <summary>
    /// 单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string delay_;
    bool delayIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_LiveRequestArgs_H_
