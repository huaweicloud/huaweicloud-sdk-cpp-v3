
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoteMirrorUpdateBody_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoteMirrorUpdateBody_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RemoteMirrorUpdateBody
    : public ModelBase
{
public:
    RemoteMirrorUpdateBody();
    virtual ~RemoteMirrorUpdateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoteMirrorUpdateBody members

    /// <summary>
    /// **参数解释：** 源仓地址。 **取值范围：** 不涉及。 **约束限制：** 以 http:// 或 https:// 开头。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：**  分支同步。 **取值范围：** - all，同步全部分支。 - default，同步默认分支。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSyncBranchType() const;
    bool syncBranchTypeIsSet() const;
    void unsetsyncBranchType();
    void setSyncBranchType(const std::string& value);

    /// <summary>
    /// **参数解释：**  开启定时同步 **取值范围：** - true，不开启定时同步。 - false，开启定时同步。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    bool isMirroringEnabled() const;
    bool mirroringEnabledIsSet() const;
    void unsetmirroringEnabled();
    void setMirroringEnabled(bool value);

    /// <summary>
    /// **参数解释：**  拓展点UUID。 **取值范围：** 不涉及。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEndpointUuid() const;
    bool endpointUuidIsSet() const;
    void unsetendpointUuid();
    void setEndpointUuid(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string syncBranchType_;
    bool syncBranchTypeIsSet_;
    bool mirroringEnabled_;
    bool mirroringEnabledIsSet_;
    std::string endpointUuid_;
    bool endpointUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RemoteMirrorUpdateBody_H_
