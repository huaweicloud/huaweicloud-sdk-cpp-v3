
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResizeNodeInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResizeNodeInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResizeNodeInfo
    : public ModelBase
{
public:
    ResizeNodeInfo();
    virtual ~ResizeNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeNodeInfo members

    /// <summary>
    /// **参数解释**：节点批次ID，批次变更时需要，可以从节点的os.modelarts.node/batch.uid标签中获取。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getBatchUID() const;
    bool batchUIDIsSet() const;
    void unsetbatchUID();
    void setBatchUID(const std::string& value);

    /// <summary>
    /// **参数解释**：批次缩容场景，指定要缩容的节点名称列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getDeleteNodeNames();
    bool deleteNodeNamesIsSet() const;
    void unsetdeleteNodeNames();
    void setDeleteNodeNames(const std::vector<std::string>& value);


protected:
    std::string batchUID_;
    bool batchUIDIsSet_;
    std::vector<std::string> deleteNodeNames_;
    bool deleteNodeNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResizeNodeInfo_H_
