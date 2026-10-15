
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_InstInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_InstInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移实例信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  InstInfo
    : public ModelBase
{
public:
    InstInfo();
    virtual ~InstInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstInfo members

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型。  **约束限制**：  不涉及。  **取值范围**：  - mysql：MySQL到MySQL迁移，MySQL到MySQL同步 - mongodb：MongoDB到DDS迁移与同步 - cloudDataGuard-mysql：MySQL到MySQL灾备 - gaussdbv5：GaussDB同步 - postgresql：PostgreSQL到PostgreSQL同步 - mysql-to-kafka：MySQL到Kafka同步 - taurus-to-kafka：TaurusDB到Kafka同步 - gaussdbv5ha-to-kafka：GaussDB集中式版到Kafka同步  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例规格类型。  **约束限制**：  不涉及。  **取值范围**：  - common：中 - high：大 - ultrahigh：极大  **默认取值**：  不涉及
    /// </summary>

    std::string getInstType() const;
    bool instTypeIsSet() const;
    void unsetinstType();
    void setInstType(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例所在的私有IP地址。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例所在的公网IP地址。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例任务定时启动时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例的状态。  **约束限制**：  不涉及。  **取值范围**：  - active：运行中 - deleted：已删除  **默认取值**：  不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移实例的磁盘大小，单位为GB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);


protected:
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string instType_;
    bool instTypeIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_InstInfo_H_
