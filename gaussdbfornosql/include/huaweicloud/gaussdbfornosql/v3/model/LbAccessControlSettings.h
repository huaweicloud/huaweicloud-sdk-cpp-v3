
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_LbAccessControlSettings_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_LbAccessControlSettings_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/IpGroupsDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 负载均衡访问控制配置。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  LbAccessControlSettings
    : public ModelBase
{
public:
    LbAccessControlSettings();
    virtual ~LbAccessControlSettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LbAccessControlSettings members

    /// <summary>
    /// **参数解释：** 是否开启负载均衡访问控制。 **约束限制：** 不涉及。 **取值范围：**  -true。  -false。 **默认取值：** 不涉及。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释：** 黑白名单类型。 **约束限制：** 仅支持设置黑名单或白名单中的一种，当配置切换时，原配置会失效。 **取值范围：**  -blackList黑名单  -whiteList白名单。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** IP地址组中包含的IP或网段列表。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<IpGroupsDetail>& getIpGroups();
    bool ipGroupsIsSet() const;
    void unsetipGroups();
    void setIpGroups(const std::vector<IpGroupsDetail>& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::vector<IpGroupsDetail> ipGroups_;
    bool ipGroupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_LbAccessControlSettings_H_
