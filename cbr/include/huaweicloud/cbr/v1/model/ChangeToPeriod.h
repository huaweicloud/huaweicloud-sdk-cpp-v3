
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeToPeriod_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeToPeriod_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ChangeToPeriod
    : public ModelBase
{
public:
    ChangeToPeriod();
    virtual ~ChangeToPeriod();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeToPeriod members

    /// <summary>
    /// 付费模式，当前仅可选择：pre_paid
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 创建类型，按年(year)或者按月(month)
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 创建类型的数量，按年或按月的个数
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 到期后是否自动续期，默认不续期
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 是否自动付费，默认为不自动付费
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// 跳转URL
    /// </summary>

    std::string getConsoleUrl() const;
    bool consoleUrlIsSet() const;
    void unsetconsoleUrl();
    void setConsoleUrl(const std::string& value);

    /// <summary>
    /// 资源列表
    /// </summary>

    std::vector<std::string>& getVaultIds();
    bool vaultIdsIsSet() const;
    void unsetvaultIds();
    void setVaultIds(const std::vector<std::string>& value);


protected:
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    bool isAutoRenew_;
    bool isAutoRenewIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    std::string consoleUrl_;
    bool consoleUrlIsSet_;
    std::vector<std::string> vaultIds_;
    bool vaultIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ChangeToPeriod_H_
