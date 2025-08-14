
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyResource_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyResource_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预调配模板设备策略资源详情结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  PolicyResource
    : public ModelBase
{
public:
    PolicyResource();
    virtual ~PolicyResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyResource members

    /// <summary>
    /// **参数说明**：设备需要绑定的策略id列表
    /// </summary>

    std::vector<std::string>& getPolicyIds();
    bool policyIdsIsSet() const;
    void unsetpolicyIds();
    void setPolicyIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> policyIds_;
    bool policyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PolicyResource_H_
