
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TreeDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TreeDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/TreeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  TreeDto
    : public ModelBase
{
public:
    TreeDto();
    virtual ~TreeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TreeDto members

    /// <summary>
    /// **参数解释：** 提交ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件结构。 **取值范围：** - commit, 子模块。 - tree, 目录。 - blob, 文件
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 不涉及
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 当前所在目录层级。 **取值范围：** 不涉及
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释：** 是否下拉。 **取值范围：** - false, 不下拉。 - true, 下拉
    /// </summary>

    bool isIsShownDropDown() const;
    bool isShownDropDownIsSet() const;
    void unsetisShownDropDown();
    void setIsShownDropDown(bool value);

    /// <summary>
    /// **参数解释：** 是否折叠。 **取值范围：** - false, 不折叠。 - true, 折叠。
    /// </summary>

    bool isFolder() const;
    bool folderIsSet() const;
    void unsetfolder();
    void setFolder(bool value);

    /// <summary>
    /// 子节点
    /// </summary>

    std::vector<TreeDto>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<TreeDto>& value);

    /// <summary>
    /// **参数解释：** 子模块连接。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSubmoduleLink() const;
    bool submoduleLinkIsSet() const;
    void unsetsubmoduleLink();
    void setSubmoduleLink(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string path_;
    bool pathIsSet_;
    int32_t level_;
    bool levelIsSet_;
    bool isShownDropDown_;
    bool isShownDropDownIsSet_;
    bool folder_;
    bool folderIsSet_;
    std::vector<TreeDto>* children_;
    bool childrenIsSet_;
    std::string submoduleLink_;
    bool submoduleLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_TreeDto_H_
