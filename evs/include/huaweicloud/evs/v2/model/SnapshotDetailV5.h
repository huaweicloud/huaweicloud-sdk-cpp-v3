
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetailV5_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetailV5_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/SnapshotChains.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  SnapshotDetailV5
    : public ModelBase
{
public:
    SnapshotDetailV5();
    virtual ~SnapshotDetailV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotDetailV5 members

    /// <summary>
    /// **参数解释** 云硬盘快照ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘快照名称。 名称以autobk_snapshot_为前缀的快照是创建云硬盘备份时系统自动创建的，请不要进行“删除云硬盘快照”和“回滚快照到云硬盘”操作。 **取值范围** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘快照描述信息。 **取值范围** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘快照创建时间。 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX **取值范围** 不涉及。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘快照更新时间。 **取值范围** 不涉及。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 快照所属的云硬盘ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘快照大小，单位为GiB。 **取值范围** 不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释** 云硬盘快照的状态。 **取值范围** 具体请参见[云硬盘快照状态](evs_04_0041.xml)。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释** 项目ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照所属的企业项目ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 是否为加密快照。 **取值范围** 不涉及。
    /// </summary>

    bool isEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(bool value);

    /// <summary>
    /// **参数解释** 快照所属的云硬盘ID的密钥ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照类型。 **取值范围** 枚举值：standard/flash。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释** 快照所属AZ。 **取值范围** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释** 快照所属标签。 标签的key：String类型，最大长度36个字符。 由英文字母、数字、下划线、中划线、UNICODE字符（\\u4E00-\\u9FFF）组成。  标签的value：String类型，最大长度43个字符，可以为空字符串。 由英文字母、数字、下划线、点、中划线、UNICODE字符（\\u4E00-\\u9FFF）组成。 **取值范围** 不涉及。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释** 是否开启了快照极速可用功能。 **取值范围** true：开启。仅SSD系列云盘支持开启该功能。 false：关闭。即快照为未开启快照极速可用功能的存量快照。
    /// </summary>

    bool isInstantAccess() const;
    bool instantAccessIsSet() const;
    void unsetinstantAccess();
    void setInstantAccess(bool value);

    /// <summary>
    /// **参数解释** 快照保留的时间。 **取值范围** 不涉及。
    /// </summary>

    std::string getRetentionAt() const;
    bool retentionAtIsSet() const;
    void unsetretentionAt();
    void setRetentionAt(const std::string& value);

    /// <summary>
    /// **参数解释** 设置快照极速可用功能的保留时间，保留时间到期后自动关闭快照极速可用功能。 **取值范围** 默认与参数retention_at的值一致。
    /// </summary>

    std::string getInstantAccessRetentionAt() const;
    bool instantAccessRetentionAtIsSet() const;
    void unsetinstantAccessRetentionAt();
    void setInstantAccessRetentionAt(const std::string& value);

    /// <summary>
    /// **参数解释** 是否增量快照。 **取值范围** true，false。
    /// </summary>

    bool isIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(bool value);

    /// <summary>
    /// **参数解释** 快照创建来源。 **取值范围** auto：自动创建快照。 user：手动创建快照。 copy：复制快照。
    /// </summary>

    std::string getSnapshotType() const;
    bool snapshotTypeIsSet() const;
    void unsetsnapshotType();
    void setSnapshotType(const std::string& value);

    /// <summary>
    /// **参数解释** 快照创建进度，单位为百分比。 **取值范围** 不涉及。
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// **参数解释** 加密快照的加密算法。 **取值范围** 不涉及。
    /// </summary>

    std::string getEncryptAlgorithm() const;
    bool encryptAlgorithmIsSet() const;
    void unsetencryptAlgorithm();
    void setEncryptAlgorithm(const std::string& value);

    /// <summary>
    /// **参数解释** 快照所属的快照链信息。 **取值范围** 不涉及。
    /// </summary>

    std::vector<SnapshotChains>& getSnapshotChains();
    bool snapshotChainsIsSet() const;
    void unsetsnapshotChains();
    void setSnapshotChains(const std::vector<SnapshotChains>& value);

    /// <summary>
    /// **参数解释** 快照所属的一致性快照组id。 **取值范围** 不涉及。
    /// </summary>

    std::string getSnapshotGroupId() const;
    bool snapshotGroupIdIsSet() const;
    void unsetsnapshotGroupId();
    void setSnapshotGroupId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool encrypted_;
    bool encryptedIsSet_;
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    bool instantAccess_;
    bool instantAccessIsSet_;
    std::string retentionAt_;
    bool retentionAtIsSet_;
    std::string instantAccessRetentionAt_;
    bool instantAccessRetentionAtIsSet_;
    bool incremental_;
    bool incrementalIsSet_;
    std::string snapshotType_;
    bool snapshotTypeIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string encryptAlgorithm_;
    bool encryptAlgorithmIsSet_;
    std::vector<SnapshotChains> snapshotChains_;
    bool snapshotChainsIsSet_;
    std::string snapshotGroupId_;
    bool snapshotGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetailV5_H_
