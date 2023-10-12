
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicy_H_


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
/// 回收策略。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RecyclePolicy
    : public ModelBase
{
public:
    RecyclePolicy();
    virtual ~RecyclePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclePolicy members

    /// <summary>
    /// 策略保持时长（1-7天），天数为正整数，默认7天。
    /// </summary>

    int32_t getRetentionPeriodInDays() const;
    bool retentionPeriodInDaysIsSet() const;
    void unsetretentionPeriodInDays();
    void setRetentionPeriodInDays(int32_t value);


protected:
    int32_t retentionPeriodInDays_;
    bool retentionPeriodInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecyclePolicy_H_
