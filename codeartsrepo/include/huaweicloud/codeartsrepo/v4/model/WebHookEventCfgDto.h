
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookEventCfgDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookEventCfgDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  WebHookEventCfgDto
    : public ModelBase
{
public:
    WebHookEventCfgDto();
    virtual ~WebHookEventCfgDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebHookEventCfgDto members

    /// <summary>
    /// **参数解释：** 事件类型。 **取值范围：** 最小1个字节，最大255字节
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置信息。 **取值范围：** 最小1个字节，最大255字节
    /// </summary>

    std::string getCfgs() const;
    bool cfgsIsSet() const;
    void unsetcfgs();
    void setCfgs(const std::string& value);


protected:
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string cfgs_;
    bool cfgsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebHookEventCfgDto_H_
