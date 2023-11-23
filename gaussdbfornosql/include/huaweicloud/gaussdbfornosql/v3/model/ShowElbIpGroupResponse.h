
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowElbIpGroupResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowElbIpGroupResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequestBody_ip_groups.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowElbIpGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowElbIpGroupResponse();
    virtual ~ShowElbIpGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowElbIpGroupResponse members

    /// <summary>
    /// 类型选项，取值： - whiteList：白名单，只允许指定ip或网段访问。 - blackList：黑名单，不允许指定ip或网段访问。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// IP地址组中包含的IP或网段列表。
    /// </summary>

    std::vector<SwitchIpGroupRequestBody_ip_groups>& getIpGroups();
    bool ipGroupsIsSet() const;
    void unsetipGroups();
    void setIpGroups(const std::vector<SwitchIpGroupRequestBody_ip_groups>& value);

    /// <summary>
    /// true：开启，false：关闭。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<SwitchIpGroupRequestBody_ip_groups> ipGroups_;
    bool ipGroupsIsSet_;
    bool enabled_;
    bool enabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowElbIpGroupResponse_H_
