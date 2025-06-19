
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistEnableDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistEnableDto_H_


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
/// 包含打开或者关闭流量过滤功能的开关信息：打开或者关闭，后端 根据此参数来打开或者关闭功能。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpBlacklistEnableDto
    : public ModelBase
{
public:
    IpBlacklistEnableDto();
    virtual ~IpBlacklistEnableDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBlacklistEnableDto members

    /// <summary>
    /// 打开或关闭IP黑名单功能 0：disable 1：enable
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistEnableDto_H_
