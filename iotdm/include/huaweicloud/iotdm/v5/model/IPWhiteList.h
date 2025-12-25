
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_IPWhiteList_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_IPWhiteList_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/IpAllowList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// IP白名单 约束：只有企业版实例的APP_HTTPS/APP_AMQP/APP_MQTT协议支持配置IP白名单。 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  IPWhiteList
    : public ModelBase
{
public:
    IPWhiteList();
    virtual ~IPWhiteList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IPWhiteList members

    /// <summary>
    /// **参数说明**：启用Ip白名单访问控制。 
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数说明**：允许访问企业版实例的IP地址列表。 
    /// </summary>

    std::vector<IpAllowList>& getAllowList();
    bool allowListIsSet() const;
    void unsetallowList();
    void setAllowList(const std::vector<IpAllowList>& value);


protected:
    bool enable_;
    bool enableIsSet_;
    std::vector<IpAllowList> allowList_;
    bool allowListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_IPWhiteList_H_
