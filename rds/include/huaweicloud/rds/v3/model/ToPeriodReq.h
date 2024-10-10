
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ToPeriodReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ToPeriodReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// RDS实例按需转包周期请求
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ToPeriodReq
    : public ModelBase
{
public:
    ToPeriodReq();
    virtual ~ToPeriodReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ToPeriodReq members

    /// <summary>
    /// 周期类型。MONTH：月；YEAR：年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 周期数。
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动支付。YES：自动扣费；NO：手动支付（默认）
    /// </summary>

    std::string getAutoPayPolicy() const;
    bool autoPayPolicyIsSet() const;
    void unsetautoPayPolicy();
    void setAutoPayPolicy(const std::string& value);

    /// <summary>
    /// 是否到期自动续期。YES：自动续费；NO：不自动续费（默认）
    /// </summary>

    std::string getAutoRenewPolicy() const;
    bool autoRenewPolicyIsSet() const;
    void unsetautoRenewPolicy();
    void setAutoRenewPolicy(const std::string& value);


protected:
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string autoPayPolicy_;
    bool autoPayPolicyIsSet_;
    std::string autoRenewPolicy_;
    bool autoRenewPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ToPeriodReq_H_
