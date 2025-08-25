
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpExtendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池扩容时节点的计费配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleUpExtendParam
    : public ModelBase
{
public:
    ScaleUpExtendParam();
    virtual ~ScaleUpExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleUpExtendParam members

    /// <summary>
    /// 包周期时长, 包月1-9, 包年1-3
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 包周期类型, year(包年), month(包月)
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 是否自动续费，可选参数，如果不填写，以节点池isAutoRenew属性为准。
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 是否自动付费，可选参数，如果不填写，以节点池isAutoPay属性为准。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    bool isAutoRenew_;
    bool isAutoRenewIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleUpExtendParam_H_
