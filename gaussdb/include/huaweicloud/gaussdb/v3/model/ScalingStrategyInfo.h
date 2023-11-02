
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingStrategyInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingStrategyInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动变配策略。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ScalingStrategyInfo
    : public ModelBase
{
public:
    ScalingStrategyInfo();
    virtual ~ScalingStrategyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScalingStrategyInfo members

    /// <summary>
    /// 扩缩规格开关。 - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getFlavorSwitch() const;
    bool flavorSwitchIsSet() const;
    void unsetflavorSwitch();
    void setFlavorSwitch(const std::string& value);

    /// <summary>
    /// 增删只读节点开关。 - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getReadOnlySwitch() const;
    bool readOnlySwitchIsSet() const;
    void unsetreadOnlySwitch();
    void setReadOnlySwitch(const std::string& value);


protected:
    std::string flavorSwitch_;
    bool flavorSwitchIsSet_;
    std::string readOnlySwitch_;
    bool readOnlySwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ScalingStrategyInfo_H_
