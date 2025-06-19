
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistSwitchInfoVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistSwitchInfoVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含流量过滤功能的开关信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpBlacklistSwitchInfoVo
    : public ModelBase
{
public:
    IpBlacklistSwitchInfoVo();
    virtual ~IpBlacklistSwitchInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBlacklistSwitchInfoVo members

    /// <summary>
    /// IP黑名单功能开关信息 1:enable 0:disable
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistSwitchInfoVo_H_
