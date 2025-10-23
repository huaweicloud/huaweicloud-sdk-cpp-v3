
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoteMirrorSyncInfoDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoteMirrorSyncInfoDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RemoteMirrorSyncInfoDto
    : public ModelBase
{
public:
    RemoteMirrorSyncInfoDto();
    virtual ~RemoteMirrorSyncInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoteMirrorSyncInfoDto members

    /// <summary>
    /// **参数解释：** 用户名(需要base64加密)。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 密码(需要base64加密)。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数解释：** 拓展点uuid。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEndpointUuid() const;
    bool endpointUuidIsSet() const;
    void unsetendpointUuid();
    void setEndpointUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 允许强制同步。 **约束限制：** 不涉及。 **取值范围：** - true，强制同步。 - false，不强制同步。 **默认取值：** 不涉及。
    /// </summary>

    bool isForceFetch() const;
    bool forceFetchIsSet() const;
    void unsetforceFetch();
    void setForceFetch(bool value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string endpointUuid_;
    bool endpointUuidIsSet_;
    bool forceFetch_;
    bool forceFetchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RemoteMirrorSyncInfoDto_H_
