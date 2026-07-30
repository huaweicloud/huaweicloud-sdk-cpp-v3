
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池创建请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodePoolSpec
    : public ModelBase
{
public:
    NodePoolSpec();
    virtual ~NodePoolSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolSpec members

    /// <summary>
    /// 
    /// </summary>

    PoolResource getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const PoolResource& value);


protected:
    PoolResource resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolSpec_H_
