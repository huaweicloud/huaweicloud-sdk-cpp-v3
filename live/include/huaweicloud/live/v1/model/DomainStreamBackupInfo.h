
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainStreamBackupInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainStreamBackupInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DomainStreamBackupInfo
    : public ModelBase
{
public:
    DomainStreamBackupInfo();
    virtual ~DomainStreamBackupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainStreamBackupInfo members

    /// <summary>
    /// **参数解释**： 直播推流域名 **约束限制**： 不涉及 **取值范围**： 字符长度为[1-255]位 **默认取值**： 不涉及 
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// **参数解释**： 主备流开关 **约束限制**： 不涉及 **取值范围**： - true： 开启主备流功能 - false：关闭主备流功能 **默认取值**： false 
    /// </summary>

    bool isStreamBackupEnable() const;
    bool streamBackupEnableIsSet() const;
    void unsetstreamBackupEnable();
    void setStreamBackupEnable(bool value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;
    bool streamBackupEnable_;
    bool streamBackupEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainStreamBackupInfo_H_
