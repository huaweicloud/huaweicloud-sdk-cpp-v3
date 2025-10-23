
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryRemoteMirrorResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryRemoteMirrorResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateRepositoryRemoteMirrorResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRepositoryRemoteMirrorResponse();
    virtual ~UpdateRepositoryRemoteMirrorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRepositoryRemoteMirrorResponse members

    /// <summary>
    /// **参数解释：**  源仓地址。 **约束限制：** 不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：**  开启定时同步 **取值范围：** - true，不开启定时同步。 - false，开启定时同步。 **约束限制：** 不涉及。
    /// </summary>

    bool isMirroringEnabled() const;
    bool mirroringEnabledIsSet() const;
    void unsetmirroringEnabled();
    void setMirroringEnabled(bool value);

    /// <summary>
    /// **参数解释：**  拓展点UUID。 **约束限制：** 不涉及。
    /// </summary>

    std::string getEndpointUuid() const;
    bool endpointUuidIsSet() const;
    void unsetendpointUuid();
    void setEndpointUuid(const std::string& value);

    /// <summary>
    /// **参数解释：**  分支同步。 **取值范围：** - all，同步全部分支。 - default，同步默认分支。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSyncBranchType() const;
    bool syncBranchTypeIsSet() const;
    void unsetsyncBranchType();
    void setSyncBranchType(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    bool mirroringEnabled_;
    bool mirroringEnabledIsSet_;
    std::string endpointUuid_;
    bool endpointUuidIsSet_;
    std::string syncBranchType_;
    bool syncBranchTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateRepositoryRemoteMirrorResponse_H_
