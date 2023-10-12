
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecyclePolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecyclePolicy_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RecyclePolicy
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
    /// 已删除实例保留天数，可设置范围为1~7天。 - 取值1~7，设置已删除实例的保留天数为该值。
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecyclePolicy_H_
