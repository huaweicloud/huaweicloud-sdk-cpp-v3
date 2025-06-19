
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistDeleteDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistDeleteDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包含删除IP黑名单的参数，目前只会指定生效范围进行删除。
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpBlacklistDeleteDto
    : public ModelBase
{
public:
    IpBlacklistDeleteDto();
    virtual ~IpBlacklistDeleteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpBlacklistDeleteDto members

    /// <summary>
    /// 指定生效范围，1指定生效范围为EIP进行删除,2指定生效范围为NAT进行删除，1,2生效范围为EIP和NAT进行删除
    /// </summary>

    std::vector<int32_t>& getEffectScope();
    bool effectScopeIsSet() const;
    void unseteffectScope();
    void setEffectScope(std::vector<int32_t> value);


protected:
    std::vector<int32_t> effectScope_;
    bool effectScopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpBlacklistDeleteDto_H_
