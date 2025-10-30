
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Log_transfer_detail_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Log_transfer_detail_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Log_transfer_detail
    : public ModelBase
{
public:
    Log_transfer_detail();
    virtual ~Log_transfer_detail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Log_transfer_detail members

    /// <summary>
    /// **参数解释：**  OBS转储时间。当创建OBS转储时，必填此参数。与obs_period_unit组合，即\&quot;obs_period\&quot;+\&quot;obs_period_unit\&quot;，必须是\&quot;2min\&quot;, \&quot;5min\&quot;, \&quot;30min\&quot;, \&quot;1hour\&quot;, \&quot;3hour\&quot;, \&quot;6hour\&quot;,\&quot;12hour\&quot;。 **约束限制：**  不涉及。  **取值范围：**  1,2,3,5,6,12,30
    /// </summary>

    int32_t getObsPeriod() const;
    bool obsPeriodIsSet() const;
    void unsetobsPeriod();
    void setObsPeriod(int32_t value);

    /// <summary>
    /// **参数解释：**  OBS转储单位。当创建OBS转储时，必填此参数。与obs_period组合，即\&quot;obs_period\&quot;+\&quot;obs_period_unit\&quot;，必须是\&quot;2min\&quot;, \&quot;5min\&quot;, \&quot;30min\&quot;, \&quot;1hour\&quot;, \&quot;3hour\&quot;, \&quot;6hour\&quot;,\&quot;12hour\&quot;。 **约束限制：**  不涉及。  **取值范围：**  min,hour
    /// </summary>

    std::string getObsPeriodUnit() const;
    bool obsPeriodUnitIsSet() const;
    void unsetobsPeriodUnit();
    void setObsPeriodUnit(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储日志桶名称。当创建OBS转储时，必填此参数。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储KMS密钥ID。根据OBS转储日志桶是否加密判断，若OBS转储日志加密桶则必须填写该参数，若OBS转储日志桶则不需要此参数 **约束限制：**  不涉及
    /// </summary>

    std::string getObsEncryptedId() const;
    bool obsEncryptedIdIsSet() const;
    void unsetobsEncryptedId();
    void setObsEncryptedId(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储自定义转储路径。当创建OBS转储时，根据需要选填此参数。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsDirPreFixName() const;
    bool obsDirPreFixNameIsSet() const;
    void unsetobsDirPreFixName();
    void setObsDirPreFixName(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储日志文件前缀。当创建OBS转储时，根据需要选填此参数。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsPrefixName() const;
    bool obsPrefixNameIsSet() const;
    void unsetobsPrefixName();
    void setObsPrefixName(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储时区。参数选择参考OBS转储时区表。如果选择该参数，则必须选择obs_time_zone_id。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsTimeZone() const;
    bool obsTimeZoneIsSet() const;
    void unsetobsTimeZone();
    void setObsTimeZone(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS转储时区ID。参数选择参考OBS转储时区表。如果选择该参数，则必须选择obs_time_zone。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsTimeZoneId() const;
    bool obsTimeZoneIdIsSet() const;
    void unsetobsTimeZoneId();
    void setObsTimeZoneId(const std::string& value);

    /// <summary>
    /// **参数解释：**  DIS转储通道ID。当创建DIS转储时，必填此参数。 **约束限制：**  不涉及
    /// </summary>

    std::string getDisId() const;
    bool disIdIsSet() const;
    void unsetdisId();
    void setDisId(const std::string& value);

    /// <summary>
    /// **参数解释：**  DIS转储通道名称。当创建DIS转储时，必填此参数。 **约束限制：**  不涉及
    /// </summary>

    std::string getDisName() const;
    bool disNameIsSet() const;
    void unsetdisName();
    void setDisName(const std::string& value);

    /// <summary>
    /// **参数解释：**  DMS转储kafka ID。当创建DMS转储时，必填此参数。创建DMS转储前，需要使用kafka ID以及kafka Topic进行实例注册。详情见接口注册DMSkafka实例 **约束限制：**  不涉及
    /// </summary>

    std::string getKafkaId() const;
    bool kafkaIdIsSet() const;
    void unsetkafkaId();
    void setKafkaId(const std::string& value);

    /// <summary>
    /// **参数解释：**  DMS转储kafka topic。当创建DMS转储时，必填此参数。创建DMS转储前，需要使用kafka ID以及kafka Topic进行实例注册。详情见接口注册DMSkafka实例 **约束限制：**  不涉及
    /// </summary>

    std::string getKafkaTopic() const;
    bool kafkaTopicIsSet() const;
    void unsetkafkaTopic();
    void setKafkaTopic(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS企业项目ID。 **约束限制：**  不涉及
    /// </summary>

    std::string getObsEpsId() const;
    bool obsEpsIdIsSet() const;
    void unsetobsEpsId();
    void setObsEpsId(const std::string& value);

    /// <summary>
    /// **参数解释：**  OBS是否开启加密。 **约束限制：**  不涉及
    /// </summary>

    bool isObsEncryptedEnable() const;
    bool obsEncryptedEnableIsSet() const;
    void unsetobsEncryptedEnable();
    void setObsEncryptedEnable(bool value);

    /// <summary>
    /// **参数解释：**  若开启tag投递，该字段必须包含主机信息：hostIP、hostId、hostName、pathFile、collectTime； 公共字段有：logStreamName、regionName、logGroupName、projectId，为可选填；开启转储标签：streamTag，可选填 **约束限制：**  不涉及
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：**  dms转储JSON格式选填，可以转储tag字段 **约束限制：**  不涉及
    /// </summary>

    std::vector<std::string>& getLtsTags();
    bool ltsTagsIsSet() const;
    void unsetltsTags();
    void setLtsTags(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：**  dms转储JSON格式选填，可以转储日志流标签字段 **约束限制：**  不涉及
    /// </summary>

    std::vector<std::string>& getStreamTags();
    bool streamTagsIsSet() const;
    void unsetstreamTags();
    void setStreamTags(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：**  dms转储JSON格式选填，可以转储结构化字段 **约束限制：**  不涉及
    /// </summary>

    std::vector<std::string>& getStructFields();
    bool structFieldsIsSet() const;
    void unsetstructFields();
    void setStructFields(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：**  dms转储JSON格式选填，无效字段填充 **约束限制：**  不涉及
    /// </summary>

    std::string getInvalidFieldValue() const;
    bool invalidFieldValueIsSet() const;
    void unsetinvalidFieldValue();
    void setInvalidFieldValue(const std::string& value);


protected:
    int32_t obsPeriod_;
    bool obsPeriodIsSet_;
    std::string obsPeriodUnit_;
    bool obsPeriodUnitIsSet_;
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string obsEncryptedId_;
    bool obsEncryptedIdIsSet_;
    std::string obsDirPreFixName_;
    bool obsDirPreFixNameIsSet_;
    std::string obsPrefixName_;
    bool obsPrefixNameIsSet_;
    std::string obsTimeZone_;
    bool obsTimeZoneIsSet_;
    std::string obsTimeZoneId_;
    bool obsTimeZoneIdIsSet_;
    std::string disId_;
    bool disIdIsSet_;
    std::string disName_;
    bool disNameIsSet_;
    std::string kafkaId_;
    bool kafkaIdIsSet_;
    std::string kafkaTopic_;
    bool kafkaTopicIsSet_;
    std::string obsEpsId_;
    bool obsEpsIdIsSet_;
    bool obsEncryptedEnable_;
    bool obsEncryptedEnableIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::vector<std::string> ltsTags_;
    bool ltsTagsIsSet_;
    std::vector<std::string> streamTags_;
    bool streamTagsIsSet_;
    std::vector<std::string> structFields_;
    bool structFieldsIsSet_;
    std::string invalidFieldValue_;
    bool invalidFieldValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Log_transfer_detail_H_
