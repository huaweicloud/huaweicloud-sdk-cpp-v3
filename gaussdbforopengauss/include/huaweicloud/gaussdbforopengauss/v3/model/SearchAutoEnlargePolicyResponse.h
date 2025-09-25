
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SearchAutoEnlargePolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SearchAutoEnlargePolicyResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SearchAutoEnlargePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchAutoEnlargePolicyResponse();
    virtual ~SearchAutoEnlargePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchAutoEnlargePolicyResponse members

    /// <summary>
    /// **参数解释**: 磁盘自动扩容开关。 **取值范围**: 不涉及。
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// **参数解释**: 存储自动扩容上限。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getLimitVolumeSize() const;
    bool limitVolumeSizeIsSet() const;
    void unsetlimitVolumeSize();
    void setLimitVolumeSize(int32_t value);

    /// <summary>
    /// **参数解释**: 最小扩容磁盘容量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMinVolumeSize() const;
    bool minVolumeSizeIsSet() const;
    void unsetminVolumeSize();
    void setMinVolumeSize(int32_t value);

    /// <summary>
    /// **参数解释**: 最大扩容磁盘容量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMaxVolumeSize() const;
    bool maxVolumeSizeIsSet() const;
    void unsetmaxVolumeSize();
    void setMaxVolumeSize(int32_t value);

    /// <summary>
    /// **参数解释**: 可用存储空间率。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int32_t value);

    /// <summary>
    /// **参数解释**: 空间率集合。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<int32_t>& getPercents();
    bool percentsIsSet() const;
    void unsetpercents();
    void setPercents(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**: 扩容步长，固定大小扩容方式。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getStepSize() const;
    bool stepSizeIsSet() const;
    void unsetstepSize();
    void setStepSize(int32_t value);

    /// <summary>
    /// **参数解释**: 扩容步长，百分比扩容方式。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t limitVolumeSize_;
    bool limitVolumeSizeIsSet_;
    int32_t minVolumeSize_;
    bool minVolumeSizeIsSet_;
    int32_t maxVolumeSize_;
    bool maxVolumeSizeIsSet_;
    int32_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    std::vector<int32_t> percents_;
    bool percentsIsSet_;
    int32_t stepSize_;
    bool stepSizeIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SearchAutoEnlargePolicyResponse_H_
