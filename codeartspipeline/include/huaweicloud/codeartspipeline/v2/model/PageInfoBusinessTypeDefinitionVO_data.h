
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_data_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_data_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PageInfoBusinessTypeDefinitionVO_plugins_list.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PageInfoBusinessTypeDefinitionVO_data
    : public ModelBase
{
public:
    PageInfoBusinessTypeDefinitionVO_data();
    virtual ~PageInfoBusinessTypeDefinitionVO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfoBusinessTypeDefinitionVO_data members

    /// <summary>
    /// **参数解释**： 业务类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否可编辑。 **取值范围**： - true：可编辑。 - false：不可编辑。 
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);

    /// <summary>
    /// **参数解释**： 是否可移除。 **取值范围**： - true：可移除。 - false：不可移除。 
    /// </summary>

    bool isRemovable() const;
    bool removableIsSet() const;
    void unsetremovable();
    void setRemovable(bool value);

    /// <summary>
    /// **参数解释**： 是否可复制。 **取值范围**： - true：可复制。 - false：不可复制。 
    /// </summary>

    bool isCloneable() const;
    bool cloneableIsSet() const;
    void unsetcloneable();
    void setCloneable(bool value);

    /// <summary>
    /// **参数解释**： 是否禁用。 **取值范围**： - true：禁用。 - false：未禁用。 
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// **参数解释**： 是否可添加。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::map<std::string, bool>>& getAddables();
    bool addablesIsSet() const;
    void unsetaddables();
    void setAddables(const std::vector<std::map<std::string, bool>>& value);

    /// <summary>
    /// **参数解释**： 条件。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getConditions();
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 插件列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list>& getPluginsList();
    bool pluginsListIsSet() const;
    void unsetpluginsList();
    void setPluginsList(const std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list>& value);


protected:
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    bool editable_;
    bool editableIsSet_;
    bool removable_;
    bool removableIsSet_;
    bool cloneable_;
    bool cloneableIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    std::vector<std::map<std::string, bool>> addables_;
    bool addablesIsSet_;
    std::vector<std::string> conditions_;
    bool conditionsIsSet_;
    std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list> pluginsList_;
    bool pluginsListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_data_H_
