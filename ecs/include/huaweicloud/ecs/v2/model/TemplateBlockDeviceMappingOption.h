
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateBlockDeviceMappingAttachmentOption.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateBlockDeviceMappingOption
    : public ModelBase
{
public:
    TemplateBlockDeviceMappingOption();
    virtual ~TemplateBlockDeviceMappingOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateBlockDeviceMappingOption members

    /// <summary>
    /// 虚拟机卷数据源类型：blank, image_id
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// 卷设备源头类型
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 是否加密
    /// </summary>

    bool isEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(bool value);

    /// <summary>
    /// 秘钥ID
    /// </summary>

    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);

    /// <summary>
    /// 卷类型
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 卷大小
    /// </summary>

    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TemplateBlockDeviceMappingAttachmentOption getAttachment() const;
    bool attachmentIsSet() const;
    void unsetattachment();
    void setAttachment(const TemplateBlockDeviceMappingAttachmentOption& value);


protected:
    std::string sourceId_;
    bool sourceIdIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    bool encrypted_;
    bool encryptedIsSet_;
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;
    TemplateBlockDeviceMappingAttachmentOption attachment_;
    bool attachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBlockDeviceMappingOption_H_
