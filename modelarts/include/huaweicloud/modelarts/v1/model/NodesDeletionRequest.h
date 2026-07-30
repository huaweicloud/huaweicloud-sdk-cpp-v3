
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodesDeletionRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodesDeletionRequest_H_


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
/// 批量删除节点请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodesDeletionRequest
    : public ModelBase
{
public:
    NodesDeletionRequest();
    virtual ~NodesDeletionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodesDeletionRequest members

    /// <summary>
    /// **参数解释**：待删除的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getDeleteNodeNames();
    bool deleteNodeNamesIsSet() const;
    void unsetdeleteNodeNames();
    void setDeleteNodeNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> deleteNodeNames_;
    bool deleteNodeNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodesDeletionRequest_H_
