
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecyclePolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecyclePolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRecyclePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecyclePolicyResponse();
    virtual ~ShowRecyclePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecyclePolicyResponse members

    /// <summary>
    /// 回收站实例保留天数
    /// </summary>

    int32_t getRetentionPeriodInDays() const;
    bool retentionPeriodInDaysIsSet() const;
    void unsetretentionPeriodInDays();
    void setRetentionPeriodInDays(int32_t value);


protected:
    int32_t retentionPeriodInDays_;
    bool retentionPeriodInDaysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRecyclePolicyResponse_H_
