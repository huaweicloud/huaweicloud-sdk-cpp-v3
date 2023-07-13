
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TransferDetail_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TransferDetail_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 日志转储详细信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TransferDetail
    : public ModelBase
{
public:
    TransferDetail();
    virtual ~TransferDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TransferDetail members

    /// <summary>
    /// OBS转储时间
    /// </summary>

    int32_t getObsPeriod() const;
    bool obsPeriodIsSet() const;
    void unsetobsPeriod();
    void setObsPeriod(int32_t value);

    /// <summary>
    /// OBS转储KMS秘钥ID。若OBS转储未加密则不返回此字段
    /// </summary>

    std::string getObsEncryptedId() const;
    bool obsEncryptedIdIsSet() const;
    void unsetobsEncryptedId();
    void setObsEncryptedId(const std::string& value);

    /// <summary>
    /// OBS转储日志文件前缀
    /// </summary>

    std::string getObsPrefixName() const;
    bool obsPrefixNameIsSet() const;
    void unsetobsPrefixName();
    void setObsPrefixName(const std::string& value);

    /// <summary>
    /// OBS转储单位
    /// </summary>

    std::string getObsPeriodUnit() const;
    bool obsPeriodUnitIsSet() const;
    void unsetobsPeriodUnit();
    void setObsPeriodUnit(const std::string& value);

    /// <summary>
    /// OBS转储路径，指OBS日志桶中的路径
    /// </summary>

    std::string getObsTransferPath() const;
    bool obsTransferPathIsSet() const;
    void unsetobsTransferPath();
    void setObsTransferPath(const std::string& value);

    /// <summary>
    /// OBS企业项目ID
    /// </summary>

    std::string getObsEpsId() const;
    bool obsEpsIdIsSet() const;
    void unsetobsEpsId();
    void setObsEpsId(const std::string& value);

    /// <summary>
    /// OBS日志桶名称
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// OBS是否开启加密。
    /// </summary>

    bool isObsEncryptedEnable() const;
    bool obsEncryptedEnableIsSet() const;
    void unsetobsEncryptedEnable();
    void setObsEncryptedEnable(bool value);

    /// <summary>
    /// OBS转储自定义转储路径
    /// </summary>

    std::string getObsDirPreFixName() const;
    bool obsDirPreFixNameIsSet() const;
    void unsetobsDirPreFixName();
    void setObsDirPreFixName(const std::string& value);

    /// <summary>
    /// DIS转储通道ID
    /// </summary>

    std::string getDisId() const;
    bool disIdIsSet() const;
    void unsetdisId();
    void setDisId(const std::string& value);

    /// <summary>
    /// DIS转储通道名称
    /// </summary>

    std::string getDisName() const;
    bool disNameIsSet() const;
    void unsetdisName();
    void setDisName(const std::string& value);

    /// <summary>
    /// DMS转储kafka ID
    /// </summary>

    std::string getKafkaId() const;
    bool kafkaIdIsSet() const;
    void unsetkafkaId();
    void setKafkaId(const std::string& value);

    /// <summary>
    /// DMS转储kafka topic
    /// </summary>

    std::string getKafkaTopic() const;
    bool kafkaTopicIsSet() const;
    void unsetkafkaTopic();
    void setKafkaTopic(const std::string& value);

    /// <summary>
    /// OBS转储时区。如果选择该参数，则必须选择obs_time_zone_id。
    /// </summary>

    std::string getObsTimeZone() const;
    bool obsTimeZoneIsSet() const;
    void unsetobsTimeZone();
    void setObsTimeZone(const std::string& value);

    /// <summary>
    /// OBS转储时区ID。参数选择参考OBS转储时区表。如果选择该参数，则必须选择obs_time_zone。
    /// </summary>

    std::string getObsTimeZoneId() const;
    bool obsTimeZoneIdIsSet() const;
    void unsetobsTimeZoneId();
    void setObsTimeZoneId(const std::string& value);

    /// <summary>
    /// 若开启tag投递，该字段必须包含主机信息：hostIP、hostId、hostName、pathFile、collectTime；  公共字段有：logStreamName、regionName、logGroupName、projectId，为可选填；  开启转储标签：streamTag，可选填
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    int32_t obsPeriod_;
    bool obsPeriodIsSet_;
    std::string obsEncryptedId_;
    bool obsEncryptedIdIsSet_;
    std::string obsPrefixName_;
    bool obsPrefixNameIsSet_;
    std::string obsPeriodUnit_;
    bool obsPeriodUnitIsSet_;
    std::string obsTransferPath_;
    bool obsTransferPathIsSet_;
    std::string obsEpsId_;
    bool obsEpsIdIsSet_;
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    bool obsEncryptedEnable_;
    bool obsEncryptedEnableIsSet_;
    std::string obsDirPreFixName_;
    bool obsDirPreFixNameIsSet_;
    std::string disId_;
    bool disIdIsSet_;
    std::string disName_;
    bool disNameIsSet_;
    std::string kafkaId_;
    bool kafkaIdIsSet_;
    std::string kafkaTopic_;
    bool kafkaTopicIsSet_;
    std::string obsTimeZone_;
    bool obsTimeZoneIsSet_;
    std::string obsTimeZoneId_;
    bool obsTimeZoneIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TransferDetail_H_
