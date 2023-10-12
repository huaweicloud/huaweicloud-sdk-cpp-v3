
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 快照详情。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  SnapshotDetails
    : public ModelBase
{
public:
    SnapshotDetails();
    virtual ~SnapshotDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotDetails members

    /// <summary>
    /// 云硬盘快照ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘快照状态。
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
    /// 云硬盘快照创建时间。 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 快照更新时间。 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 云硬盘快照的元数据信息。
    /// </summary>

    Object getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Object& value);

    /// <summary>
    /// 快照所属的云硬盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 云硬盘快照大小，单位为GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsExtendedSnapshotAttributesprojectId() const;
    bool osExtendedSnapshotAttributesprojectIdIsSet() const;
    void unsetosExtendedSnapshotAttributesprojectId();
    void setOsExtendedSnapshotAttributesprojectId(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsExtendedSnapshotAttributesprogress() const;
    bool osExtendedSnapshotAttributesprogressIsSet() const;
    void unsetosExtendedSnapshotAttributesprogress();
    void setOsExtendedSnapshotAttributesprogress(const std::string& value);


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
    Object metadata_;
    bool metadataIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string osExtendedSnapshotAttributesprojectId_;
    bool osExtendedSnapshotAttributesprojectIdIsSet_;
    std::string osExtendedSnapshotAttributesprogress_;
    bool osExtendedSnapshotAttributesprogressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotDetails_H_
