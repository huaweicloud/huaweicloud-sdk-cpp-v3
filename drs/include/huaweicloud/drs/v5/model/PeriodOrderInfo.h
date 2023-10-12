
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_PeriodOrderInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_PeriodOrderInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包年/包月信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  PeriodOrderInfo
    : public ModelBase
{
public:
    PeriodOrderInfo();
    virtual ~PeriodOrderInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PeriodOrderInfo members

    /// <summary>
    /// 订购周期类型。取值： - 2：月。 - 3：年。
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 订购周期数。根据period_type取值不同，代表不同周期数，例如： - 当period_type为2时，period_num为1代表1月。 - 当period_type为3时，period_num为1代表1年。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订。取值： - 0：否（默认值，需要客户手动去支付）。 - 1：是（自动支付）。
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);


protected:
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_PeriodOrderInfo_H_
