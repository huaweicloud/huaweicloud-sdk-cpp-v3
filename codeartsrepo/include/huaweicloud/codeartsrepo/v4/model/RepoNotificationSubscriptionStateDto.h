
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoNotificationSubscriptionStateDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoNotificationSubscriptionStateDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepoNotificationSubscriptionStateDto
    : public ModelBase
{
public:
    RepoNotificationSubscriptionStateDto();
    virtual ~RepoNotificationSubscriptionStateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoNotificationSubscriptionStateDto members

    /// <summary>
    /// **参数解释：** 配资源。
    /// </summary>

    std::string getConfigSource() const;
    bool configSourceIsSet() const;
    void unsetconfigSource();
    void setConfigSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 开启通知。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string configSource_;
    bool configSourceIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoNotificationSubscriptionStateDto_H_
