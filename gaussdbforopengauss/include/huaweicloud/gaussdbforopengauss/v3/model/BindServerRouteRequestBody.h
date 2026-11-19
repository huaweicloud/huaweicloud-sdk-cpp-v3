
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindServerRouteRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindServerRouteRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BindServerRouteRequestBody
    : public ModelBase
{
public:
    BindServerRouteRequestBody();
    virtual ~BindServerRouteRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindServerRouteRequestBody members

    /// <summary>
    /// **参数解释**: 操作类型。 **约束限制**: 不涉及。 **取值范围**: - add：绑定服务端IP路由 - delete：解绑服务端IP路由  **默认取值**: 不涉及。
    /// </summary>

    std::string getOperate() const;
    bool operateIsSet() const;
    void unsetoperate();
    void setOperate(const std::string& value);

    /// <summary>
    /// **参数解释**: 服务端IP列表。 **约束限制**: 列表元素需要满足IPv4格式要求。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getTargetServerIps();
    bool targetServerIpsIsSet() const;
    void unsettargetServerIps();
    void setTargetServerIps(const std::vector<std::string>& value);


protected:
    std::string operate_;
    bool operateIsSet_;
    std::vector<std::string> targetServerIps_;
    bool targetServerIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BindServerRouteRequestBody_H_
