
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodePoolStatus_resources.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodePoolStatus
    : public ModelBase
{
public:
    NodePoolStatus();
    virtual ~NodePoolStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolStatus members

    /// <summary>
    /// 
    /// </summary>

    NodePoolStatus_resources getResources() const;
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const NodePoolStatus_resources& value);


protected:
    NodePoolStatus_resources resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolStatus_H_
