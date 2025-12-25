
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_children_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_children_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowFileTreeResult_children
    : public ModelBase
{
public:
    ShowFileTreeResult_children();
    virtual ~ShowFileTreeResult_children();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFileTreeResult_children members

    /// <summary>
    /// **参数解释**: 文件或文件夹名称。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 访问地址。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**: 路径。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 更新时间，时间格式：yyyy-MM-dd HH:mm:ss。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getModified() const;
    bool modifiedIsSet() const;
    void unsetmodified();
    void setModified(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否为文件夹。 **取值范围**: true：文件夹。 false：文件。 
    /// </summary>

    bool isFolder() const;
    bool folderIsSet() const;
    void unsetfolder();
    void setFolder(bool value);

    /// <summary>
    /// **参数解释**: 修改人。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否存在下一层。 **取值范围**: true：是。 false：否。 
    /// </summary>

    bool isHasChild() const;
    bool hasChildIsSet() const;
    void unsethasChild();
    void setHasChild(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string modified_;
    bool modifiedIsSet_;
    bool folder_;
    bool folderIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    bool hasChild_;
    bool hasChildIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowFileTreeResult_children_H_
