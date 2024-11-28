
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisPitrPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisPitrPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowRedisPitrPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRedisPitrPolicyResponse();
    virtual ~ShowRedisPitrPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRedisPitrPolicyResponse members

    /// <summary>
    /// 标识Redis实例是否开启指定时间点恢复。 “true”，表示实例开启Redis指定时间点恢复功能。 “false”，表示实例不启用Redis指定时间点恢复功能。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 数据备份的时间间隔，该数据备份控制redis实例可恢复时间点的间隔，仅在开启时返回。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 指定已生成的备份文件可以保存的天数，仅在开启时返回。
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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRedisPitrPolicyResponse_H_
