
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusSwitchDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusSwitchDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AntiVirusSwitchDto
    : public ModelBase
{
public:
    AntiVirusSwitchDto();
    virtual ~AntiVirusSwitchDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AntiVirusSwitchDto members

    /// <summary>
    /// 参数解释： 反病毒开关状态，为必传参数 约束限制： 不涉及 取值范围： 0：开启 1：关闭 默认取值： 不涉及
    /// </summary>

    int32_t getAntiVirusStatus() const;
    bool antiVirusStatusIsSet() const;
    void unsetantiVirusStatus();
    void setAntiVirusStatus(int32_t value);

    /// <summary>
    /// 防护对象ID，为必传参数
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);


protected:
    int32_t antiVirusStatus_;
    bool antiVirusStatusIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AntiVirusSwitchDto_H_
