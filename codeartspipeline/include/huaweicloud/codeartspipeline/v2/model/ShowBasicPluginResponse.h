
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowBasicPluginResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowBasicPluginResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/NewExtension_execution.h>
#include <huaweicloud/codeartspipeline/v2/model/NewExtension_outputs.h>
#include <huaweicloud/codeartspipeline/v2/model/NewExtension_data_source_bindings.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/NewExtension_inputs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowBasicPluginResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBasicPluginResponse();
    virtual ~ShowBasicPluginResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBasicPluginResponse members

    /// <summary>
    /// **参数解释**： 插件类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件展示名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getFriendlyName() const;
    bool friendlyNameIsSet() const;
    void unsetfriendlyName();
    void setFriendlyName(const std::string& value);

    /// <summary>
    /// **参数解释**： 业务类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本说明。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 输入信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<NewExtension_inputs>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<NewExtension_inputs>& value);

    /// <summary>
    /// **参数解释**： 数据源绑定信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<NewExtension_data_source_bindings>& getDataSourceBindings();
    bool dataSourceBindingsIsSet() const;
    void unsetdataSourceBindings();
    void setDataSourceBindings(const std::vector<NewExtension_data_source_bindings>& value);

    /// <summary>
    /// **参数解释**： 输出信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<NewExtension_outputs>& getOutputs();
    bool outputsIsSet() const;
    void unsetoutputs();
    void setOutputs(const std::vector<NewExtension_outputs>& value);

    /// <summary>
    /// 
    /// </summary>

    NewExtension_execution getExecution() const;
    bool executionIsSet() const;
    void unsetexecution();
    void setExecution(const NewExtension_execution& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string friendlyName_;
    bool friendlyNameIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;
    std::vector<NewExtension_inputs> inputs_;
    bool inputsIsSet_;
    std::vector<NewExtension_data_source_bindings> dataSourceBindings_;
    bool dataSourceBindingsIsSet_;
    std::vector<NewExtension_outputs> outputs_;
    bool outputsIsSet_;
    NewExtension_execution execution_;
    bool executionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowBasicPluginResponse_H_
