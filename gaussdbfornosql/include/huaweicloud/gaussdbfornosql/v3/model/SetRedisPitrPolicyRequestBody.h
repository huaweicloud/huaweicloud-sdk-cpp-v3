
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetRedisPitrPolicyRequestBody
    : public ModelBase
{
public:
    SetRedisPitrPolicyRequestBody();
    virtual ~SetRedisPitrPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRedisPitrPolicyRequestBody members

    /// <summary>
    /// 标识Redis实例是否开启指定时间点恢复。 “true”，表示实例开启Redis指定时间点恢复功能。 “false”，表示实例不启用Redis指定时间点恢复功能。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 数据备份的时间间隔，该数据备份控制redis实例可恢复时间点的间隔，默认值为 20分钟。 取值范围：5～120  单位：分钟  例如，当interval 为20min时，可恢复时间点的间隔为20min，其interval约小，对性能影响越大，存储空间膨胀约明显。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 指定已生成的备份文件可以保存的天数，默认值为 1 天。 取值范围：1～7  单位：天
    /// </summary>

    int32_t getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(int32_t value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    int32_t keepDays_;
    bool keepDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetRedisPitrPolicyRequestBody_H_
