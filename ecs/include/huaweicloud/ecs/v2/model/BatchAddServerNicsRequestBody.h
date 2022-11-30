
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchAddServerNicOption.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAddServerNicsRequestBody
    : public ModelBase
{
public:
    BatchAddServerNicsRequestBody();
    virtual ~BatchAddServerNicsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAddServerNicsRequestBody members

    /// <summary>
    /// 需要添加的网卡参数列表。
    /// </summary>

    std::vector<BatchAddServerNicOption>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<BatchAddServerNicOption>& value);


protected:
    std::vector<BatchAddServerNicOption> nics_;
    bool nicsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerNicsRequestBody_H_
