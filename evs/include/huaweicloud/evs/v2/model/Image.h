
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Image_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Image_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/VolumeType.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  Image
    : public ModelBase
{
public:
    Image();
    virtual ~Image();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Image members

    /// <summary>
    /// 云硬盘导出镜像的容器类型。  目前支持ami、ari、aki、ovf、bare。默认是bare。
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 云硬盘导出镜像的格式。  目前支持vhd、zvhd、zvhd2、raw、qcow2。默认是vhd。
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 云硬盘描述信息。
    /// </summary>

    std::string getDisplayDescription() const;
    bool displayDescriptionIsSet() const;
    void unsetdisplayDescription();
    void setDisplayDescription(const std::string& value);

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘导出镜像的ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 云硬盘导出镜像的名称
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 云硬盘容量。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 云硬盘导出镜像后的状态，正常值为 “uploading”。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云硬盘更新时间。  时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeType getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const VolumeType& value);


protected:
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::string displayDescription_;
    bool displayDescriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    VolumeType volumeType_;
    bool volumeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Image_H_
