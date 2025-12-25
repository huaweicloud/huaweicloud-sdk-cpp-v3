
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CapacitySettingVO_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CapacitySettingVO_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CapacitySettingVO
    : public ModelBase
{
public:
    CapacitySettingVO();
    virtual ~CapacitySettingVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CapacitySettingVO members

    /// <summary>
    /// **参数解释**: 容量阈值。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getCapacityThreshold() const;
    bool capacityThresholdIsSet() const;
    void unsetcapacityThreshold();
    void setCapacityThreshold(int32_t value);

    /// <summary>
    /// **参数解释**: 消息类型。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getMessageType() const;
    bool messageTypeIsSet() const;
    void unsetmessageType();
    void setMessageType(int32_t value);

    /// <summary>
    /// **参数解释**: 是否启用邮件。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getIsMailEnabled() const;
    bool isMailEnabledIsSet() const;
    void unsetisMailEnabled();
    void setIsMailEnabled(int32_t value);

    /// <summary>
    /// **参数解释**: 是否启用短信。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getIsSmsEnabled() const;
    bool isSmsEnabledIsSet() const;
    void unsetisSmsEnabled();
    void setIsSmsEnabled(int32_t value);


protected:
    int32_t capacityThreshold_;
    bool capacityThresholdIsSet_;
    int32_t messageType_;
    bool messageTypeIsSet_;
    int32_t isMailEnabled_;
    bool isMailEnabledIsSet_;
    int32_t isSmsEnabled_;
    bool isSmsEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_CapacitySettingVO_H_
