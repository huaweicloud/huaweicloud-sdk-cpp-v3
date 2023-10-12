
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包年/包月信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PeriodOrderInfo
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
    /// 订购周期类型。 取值范围： - 2：表示周期类型为月。 - 3：表示周期类型为年。
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 订购周期数。 取值范围： - period_type&#x3D;2（周期类型为月）时，取值为[1，9]。 - period_type&#x3D;3（周期类型为年）时，取值为[1，3]。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订。 取值范围： - 0：表示不自动续订。 - 1：表示自动续订。
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderInfo_H_
