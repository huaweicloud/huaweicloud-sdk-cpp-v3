
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpecV2_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpecV2_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PluginTemplateVersionV2.h>
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
/// 插件模板的具体信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginTemplateSpecV2
    : public ModelBase
{
public:
    PluginTemplateSpecV2();
    virtual ~PluginTemplateSpecV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginTemplateSpecV2 members

    /// <summary>
    /// **参数解释**：是否为必安装插件。 **取值范围**： - true：是 - false：否
    /// </summary>

    bool isOptional() const;
    bool optionalIsSet() const;
    void unsetoptional();
    void setOptional(bool value);

    /// <summary>
    /// **参数解释**：插件模板类型。 **取值范围**：可选值如下： - helm：helm类型 - ccePlugin：CCE类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：Logo图片地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getLogoURL() const;
    bool logoURLIsSet() const;
    void unsetlogoURL();
    void setLogoURL(const std::string& value);

    /// <summary>
    /// **参数解释**：插件模板描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：插件模板版本的详细信息。
    /// </summary>

    std::vector<PluginTemplateVersionV2>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<PluginTemplateVersionV2>& value);


protected:
    bool optional_;
    bool optionalIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string logoURL_;
    bool logoURLIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<PluginTemplateVersionV2> versions_;
    bool versionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpecV2_H_
