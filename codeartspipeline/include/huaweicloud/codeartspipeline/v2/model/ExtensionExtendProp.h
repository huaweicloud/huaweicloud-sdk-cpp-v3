
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExtendProp_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExtendProp_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionExtendProp
    : public ModelBase
{
public:
    ExtensionExtendProp();
    virtual ~ExtensionExtendProp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionExtendProp members

    /// <summary>
    /// **参数解释**： API选项。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getApiOptions() const;
    bool apiOptionsIsSet() const;
    void unsetapiOptions();
    void setApiOptions(const std::string& value);

    /// <summary>
    /// **参数解释**： API类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getApiType() const;
    bool apiTypeIsSet() const;
    void unsetapiType();
    void setApiType(const std::string& value);

    /// <summary>
    /// **参数解释**： 显示占位符。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getShowPlaceholder() const;
    bool showPlaceholderIsSet() const;
    void unsetshowPlaceholder();
    void setShowPlaceholder(const std::string& value);

    /// <summary>
    /// **参数解释**： 选项。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);

    /// <summary>
    /// **参数解释**： 禁用条件。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisabledConditions() const;
    bool disabledConditionsIsSet() const;
    void unsetdisabledConditions();
    void setDisabledConditions(const std::string& value);

    /// <summary>
    /// **参数解释**： 可见条件。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVisibleConditions() const;
    bool visibleConditionsIsSet() const;
    void unsetvisibleConditions();
    void setVisibleConditions(const std::string& value);


protected:
    std::string apiOptions_;
    bool apiOptionsIsSet_;
    std::string apiType_;
    bool apiTypeIsSet_;
    std::string showPlaceholder_;
    bool showPlaceholderIsSet_;
    std::string options_;
    bool optionsIsSet_;
    std::string disabledConditions_;
    bool disabledConditionsIsSet_;
    std::string visibleConditions_;
    bool visibleConditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionExtendProp_H_
