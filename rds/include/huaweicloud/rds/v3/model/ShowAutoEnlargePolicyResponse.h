
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAutoEnlargePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoEnlargePolicyResponse();
    virtual ~ShowAutoEnlargePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoEnlargePolicyResponse members

    /// <summary>
    /// 是否已开启自动扩容，true为开启
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// 扩容上限，单位GB
    /// </summary>

    int32_t getLimitSize() const;
    bool limitSizeIsSet() const;
    void unsetlimitSize();
    void setLimitSize(int32_t value);

    /// <summary>
    /// 可用空间百分比，小于等于此值或者10GB时触发扩容
    /// </summary>

    int32_t getTriggerThreshold() const;
    bool triggerThresholdIsSet() const;
    void unsettriggerThreshold();
    void setTriggerThreshold(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t limitSize_;
    bool limitSizeIsSet_;
    int32_t triggerThreshold_;
    bool triggerThresholdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
