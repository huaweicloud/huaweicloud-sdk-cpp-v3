
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoExpandPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoExpandPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAutoExpandPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoExpandPolicyResponse();
    virtual ~ShowAutoExpandPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoExpandPolicyResponse members

    /// <summary>
    /// **参数解释**：  自动扩容策略开关。 
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// **参数解释**：  存储自动扩容上限，单位GB。 
    /// </summary>

    int32_t getLimitSize() const;
    bool limitSizeIsSet() const;
    void unsetlimitSize();
    void setLimitSize(int32_t value);

    /// <summary>
    /// **参数解释**：  可用存储空间率。 
    /// </summary>

    int32_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int32_t value);

    /// <summary>
    /// **参数解释**：  扩容步长百分比。 
    /// </summary>

    int32_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t limitSize_;
    bool limitSizeIsSet_;
    int32_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    int32_t stepPercent_;
    bool stepPercentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoExpandPolicyResponse_H_
