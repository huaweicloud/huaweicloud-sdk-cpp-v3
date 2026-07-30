
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeTreeNode_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeTreeNode_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CodeTreeNode.h>
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
/// 算法目录树节点。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CodeTreeNode
    : public ModelBase
{
public:
    CodeTreeNode();
    virtual ~CodeTreeNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodeTreeNode members

    /// <summary>
    /// **参数解释**：算法目录树当前层级目录名。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：算法目录树当前层级目录下子文件和子目录。
    /// </summary>

    std::vector<CodeTreeNode>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<CodeTreeNode>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<CodeTreeNode>* children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeTreeNode_H_
