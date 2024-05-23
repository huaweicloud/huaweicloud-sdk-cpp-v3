
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotList_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotList_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
/// 快照列表信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  SnapshotList
    : public ModelBase
{
public:
    SnapshotList();
    virtual ~SnapshotList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotList members

    /// <summary>
    /// 云硬盘快照ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘快照的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云硬盘快照名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云硬盘快照描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云硬盘快照创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 云硬盘快照更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 云硬盘快照的元数据信息。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 快照所属的云硬盘。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 云硬盘快照大小。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getOsExtendedSnapshotAttributesProjectId() const;
    bool osExtendedSnapshotAttributesProjectIdIsSet() const;
    void unsetosExtendedSnapshotAttributesProjectId();
    void setOsExtendedSnapshotAttributesProjectId(const std::string& value);

    /// <summary>
    /// 快照进度。
    /// </summary>

    std::string getOsExtendedSnapshotAttributesProgress() const;
    bool osExtendedSnapshotAttributesProgressIsSet() const;
    void unsetosExtendedSnapshotAttributesProgress();
    void setOsExtendedSnapshotAttributesProgress(const std::string& value);

    /// <summary>
    /// 专属存储ID。
    /// </summary>

    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);

    /// <summary>
    /// 专属存储名称。
    /// </summary>

    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);

    /// <summary>
    /// 服务类型。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string osExtendedSnapshotAttributesProjectId_;
    bool osExtendedSnapshotAttributesProjectIdIsSet_;
    std::string osExtendedSnapshotAttributesProgress_;
    bool osExtendedSnapshotAttributesProgressIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotList_H_
