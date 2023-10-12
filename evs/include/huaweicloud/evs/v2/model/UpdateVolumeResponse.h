
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Attachment.h>
#include <huaweicloud/evs/v2/model/Link.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/evs/v2/model/VolumeMetadata.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVolumeResponse();
    virtual ~UpdateVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVolumeResponse members

    /// <summary>
    /// 是否挂载信息。
    /// </summary>

    std::vector<Attachment>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<Attachment>& value);

    /// <summary>
    /// 云硬盘所属AZ。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 是否为可启动云硬盘。
    /// </summary>

    std::string getBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(const std::string& value);

    /// <summary>
    /// 创建云硬盘的时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘uri自描述信息
    /// </summary>

    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const VolumeMetadata& value);

    /// <summary>
    /// 是否为可共享云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 云硬盘名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolHostAttrhost() const;
    bool osVolHostAttrhostIsSet() const;
    void unsetosVolHostAttrhost();
    void setOsVolHostAttrhost(const std::string& value);

    /// <summary>
    /// 云硬盘所属的项目ID。
    /// </summary>

    std::string getOsVolTenantAttrtenantId() const;
    bool osVolTenantAttrtenantIdIsSet() const;
    void unsetosVolTenantAttrtenantId();
    void setOsVolTenantAttrtenantId(const std::string& value);

    /// <summary>
    /// 是否为共享云硬盘。
    /// </summary>

    std::string getShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(const std::string& value);

    /// <summary>
    /// 云硬盘大小。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 快照ID。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 预留字段。
    /// </summary>

    std::string getSourceVolid() const;
    bool sourceVolidIsSet() const;
    void unsetsourceVolid();
    void setSourceVolid(const std::string& value);

    /// <summary>
    /// 云硬盘状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云硬盘镜像的元数据。 &gt; 说明： &gt;  &gt; 关于“volume_image_metadata”字段的详细说明，具体请参见：\&quot;[查询镜像详情](https://support.huaweicloud.com/api-ims/ims_03_0703.html)\&quot;。
    /// </summary>

    Object getVolumeImageMetadata() const;
    bool volumeImageMetadataIsSet() const;
    void unsetvolumeImageMetadata();
    void setVolumeImageMetadata(const Object& value);

    /// <summary>
    /// 云硬盘类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 云硬盘描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolumeReplicationextendedStatus() const;
    bool osVolumeReplicationextendedStatusIsSet() const;
    void unsetosVolumeReplicationextendedStatus();
    void setOsVolumeReplicationextendedStatus(const std::string& value);


protected:
    std::vector<Attachment> attachments_;
    bool attachmentsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string bootable_;
    bool bootableIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    VolumeMetadata metadata_;
    bool metadataIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string osVolHostAttrhost_;
    bool osVolHostAttrhostIsSet_;
    std::string osVolTenantAttrtenantId_;
    bool osVolTenantAttrtenantIdIsSet_;
    std::string shareable_;
    bool shareableIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string sourceVolid_;
    bool sourceVolidIsSet_;
    std::string status_;
    bool statusIsSet_;
    Object volumeImageMetadata_;
    bool volumeImageMetadataIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string osVolumeReplicationextendedStatus_;
    bool osVolumeReplicationextendedStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeResponse_H_
