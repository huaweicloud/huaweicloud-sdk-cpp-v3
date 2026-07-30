
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchUpdatePoolNodesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpdatePoolNodesResponse();
    virtual ~BatchUpdatePoolNodesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdatePoolNodesResponse members

    /// <summary>
    /// **参数解释**：更新成功的节点名称列表。
    /// </summary>

    std::vector<std::string>& getSuccessNodeNames();
    bool successNodeNamesIsSet() const;
    void unsetsuccessNodeNames();
    void setSuccessNodeNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：更新失败的节点名称列表。
    /// </summary>

    std::vector<std::string>& getFailNodeNames();
    bool failNodeNamesIsSet() const;
    void unsetfailNodeNames();
    void setFailNodeNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> successNodeNames_;
    bool successNodeNamesIsSet_;
    std::vector<std::string> failNodeNames_;
    bool failNodeNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchUpdatePoolNodesResponse_H_
