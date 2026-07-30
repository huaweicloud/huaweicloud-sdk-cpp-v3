
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重启节点名称集合 { \&quot;nodeNames\&quot;: [   \&quot;os-node-created-vrvrq\&quot;,   \&quot;os-node-created-4jczv\&quot;  ] }
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchRebootPoolNodesRequestBody
    : public ModelBase
{
public:
    BatchRebootPoolNodesRequestBody();
    virtual ~BatchRebootPoolNodesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRebootPoolNodesRequestBody members

    /// <summary>
    /// **参数解释**：节点名称集合。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getNodeNames();
    bool nodeNamesIsSet() const;
    void unsetnodeNames();
    void setNodeNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeNames_;
    bool nodeNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesRequestBody_H_
