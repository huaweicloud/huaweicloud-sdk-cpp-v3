
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TreeNode_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TreeNode_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点信息
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TreeNode
    : public ModelBase
{
public:
    TreeNode();
    virtual ~TreeNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TreeNode members

    /// <summary>
    /// **参数解释:** 目录或文件名。 **取值范围:** 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释:** 目录或文件路径。 **取值范围:** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释:** 是否为叶子节点。 **取值范围:** - true：叶子节点。 - false：非叶子节点。
    /// </summary>

    bool isIsLeaf() const;
    bool isLeafIsSet() const;
    void unsetisLeaf();
    void setIsLeaf(bool value);

    /// <summary>
    /// **参数解释:** 屏蔽状态。 **取值范围:** - unchecked：不屏蔽。 - all：全屏蔽。 - half: 半屏蔽。
    /// </summary>

    std::string getCheckboxStatus() const;
    bool checkboxStatusIsSet() const;
    void unsetcheckboxStatus();
    void setCheckboxStatus(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    bool isLeaf_;
    bool isLeafIsSet_;
    std::string checkboxStatus_;
    bool checkboxStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TreeNode_H_
