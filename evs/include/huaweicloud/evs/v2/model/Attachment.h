
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Attachment_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Attachment_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 云硬盘挂载信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  Attachment
    : public ModelBase
{
public:
    Attachment();
    virtual ~Attachment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Attachment members

    /// <summary>
    /// 挂载的时间信息。  时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getAttachedAt() const;
    bool attachedAtIsSet() const;
    void unsetattachedAt();
    void setAttachedAt(const std::string& value);

    /// <summary>
    /// 挂载信息对应的ID。
    /// </summary>

    std::string getAttachmentId() const;
    bool attachmentIdIsSet() const;
    void unsetattachmentId();
    void setAttachmentId(const std::string& value);

    /// <summary>
    /// 挂载点。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);

    /// <summary>
    /// 云硬盘挂载到的云服务器对应的物理主机的名称。
    /// </summary>

    std::string getHostName() const;
    bool hostNameIsSet() const;
    void unsethostName();
    void setHostName(const std::string& value);

    /// <summary>
    /// 挂载的资源ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘挂载到的云服务器的 ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string attachedAt_;
    bool attachedAtIsSet_;
    std::string attachmentId_;
    bool attachmentIdIsSet_;
    std::string device_;
    bool deviceIsSet_;
    std::string hostName_;
    bool hostNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Attachment_H_
