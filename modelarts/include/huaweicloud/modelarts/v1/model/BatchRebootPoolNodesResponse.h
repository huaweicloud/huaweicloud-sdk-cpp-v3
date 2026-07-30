
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequestBody.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchRebootPoolNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchRebootPoolNodesResponse();
    virtual ~BatchRebootPoolNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRebootPoolNodesResponse members

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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchRebootPoolNodesResponse_H_
