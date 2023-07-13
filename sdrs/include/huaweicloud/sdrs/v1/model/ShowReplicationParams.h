
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ReplicationRecordMetadata.h>
#include <string>
#include <vector>
#include <huaweicloud/sdrs/v1/model/ReplicationAttachment.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询复制对数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowReplicationParams
    : public ModelBase
{
public:
    ShowReplicationParams();
    virtual ~ShowReplicationParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationParams members

    /// <summary>
    /// 复制对的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 复制对的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 复制对的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 复制对的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 复制对使用的云硬盘ID。
    /// </summary>

    std::string getVolumeIds() const;
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::string& value);

    /// <summary>
    /// 挂载点。
    /// </summary>

    std::vector<ReplicationAttachment>& getAttachment();
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const std::vector<ReplicationAttachment>& value);

    /// <summary>
    /// 创建时间。默认格式为：\&quot;yyyy-MM-ddTHH:mm:ss.SSSZ\&quot;，例如：\&quot;2019-04-01T12:00:00.000Z\&quot;
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。默认格式为：\&quot;yyyy-MM-ddTHH:mm:ss.SSSZ\&quot;，例如：\&quot;2019-04-01T12:00:00.000Z\&quot;
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 复制对的复制类型。默认值为“hypermetro”，表示同步复制。
    /// </summary>

    std::string getReplicationModel() const;
    bool replicationModelIsSet() const;
    void unsetreplicationModel();
    void setReplicationModel(const std::string& value);

    /// <summary>
    /// 复制对的同步进度。单位：百分比（%）。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 仅在复制对的状态“status”为“error”时，返回的错误码。
    /// </summary>

    std::string getFailureDetail() const;
    bool failureDetailIsSet() const;
    void unsetfailureDetail();
    void setFailureDetail(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationRecordMetadata getRecordMetadata() const;
    bool recordMetadataIsSet() const;
    void unsetrecordMetadata();
    void setRecordMetadata(const ReplicationRecordMetadata& value);

    /// <summary>
    /// 复制对的故障等级。0：表示无故障。2：表示当前生产站点的云硬盘无读写数据权限，此时建议执行故障切换操作。5：表示复制链路已断，不能执行故障切换操作，需联系技术支持工程师。
    /// </summary>

    std::string getFaultLevel() const;
    bool faultLevelIsSet() const;
    void unsetfaultLevel();
    void setFaultLevel(const std::string& value);

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 标识复制对所在保护组的当前生产站点可用区。source：表示当前生产站点可用区为保护组source_availability_zone的值。target：表示当前生产站点可用区为保护组target_availability_zone的值。
    /// </summary>

    std::string getPriorityStation() const;
    bool priorityStationIsSet() const;
    void unsetpriorityStation();
    void setPriorityStation(const std::string& value);

    /// <summary>
    /// 数据同步状态。active：表示数据已同步完成。inactive：表示数据未同步。copying：表示数据正在同步。active-stopped：表示数据已停止同步。
    /// </summary>

    std::string getReplicationStatus() const;
    bool replicationStatusIsSet() const;
    void unsetreplicationStatus();
    void setReplicationStatus(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string volumeIds_;
    bool volumeIdsIsSet_;
    std::vector<ReplicationAttachment> attachment_;
    bool attachmentIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string replicationModel_;
    bool replicationModelIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string failureDetail_;
    bool failureDetailIsSet_;
    ReplicationRecordMetadata recordMetadata_;
    bool recordMetadataIsSet_;
    std::string faultLevel_;
    bool faultLevelIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string priorityStation_;
    bool priorityStationIsSet_;
    std::string replicationStatus_;
    bool replicationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationParams_H_
