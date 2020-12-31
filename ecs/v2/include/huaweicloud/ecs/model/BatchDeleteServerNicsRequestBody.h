
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/BatchDeleteServerNicOption.h"
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  BatchDeleteServerNicsRequestBody
    : public ModelBase
{
public:
    BatchDeleteServerNicsRequestBody();
    virtual ~BatchDeleteServerNicsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteServerNicsRequestBody members

    /// <summary>
    /// 需要删除的网卡列表信息。  说明： 主网卡是弹性云服务器上配置了路由规则的网卡，不可删除。
    /// </summary>

    std::vector<BatchDeleteServerNicOption>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<BatchDeleteServerNicOption>& value);


protected:
    std::vector<BatchDeleteServerNicOption> nics_;
    bool nicsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerNicsRequestBody_H_
