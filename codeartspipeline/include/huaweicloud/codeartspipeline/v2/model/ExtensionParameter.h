
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameter_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameter_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ExtensionParameterDisplaySettings.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionParameterValidation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户可配置参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionParameter
    : public ModelBase
{
public:
    ExtensionParameter();
    virtual ~ExtensionParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionParameter members

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数显示标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionParameterValidation getValidation() const;
    bool validationIsSet() const;
    void unsetvalidation();
    void setValidation(const ExtensionParameterValidation& value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 帮助文档(markdown格式)。
    /// </summary>

    std::string getHelpMarkdown() const;
    bool helpMarkdownIsSet() const;
    void unsethelpMarkdown();
    void setHelpMarkdown(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionParameterDisplaySettings getDisplaySettings() const;
    bool displaySettingsIsSet() const;
    void unsetdisplaySettings();
    void setDisplaySettings(const ExtensionParameterDisplaySettings& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string label_;
    bool labelIsSet_;
    ExtensionParameterValidation validation_;
    bool validationIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string helpMarkdown_;
    bool helpMarkdownIsSet_;
    ExtensionParameterDisplaySettings displaySettings_;
    bool displaySettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameter_H_
