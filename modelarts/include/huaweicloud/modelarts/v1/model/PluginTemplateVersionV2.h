
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateVersionV2_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateVersionV2_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件模板的版本信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginTemplateVersionV2
    : public ModelBase
{
public:
    PluginTemplateVersionV2();
    virtual ~PluginTemplateVersionV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginTemplateVersionV2 members

    /// <summary>
    /// **参数解释**：插件模板的版本号。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**：插件安装参数。
    /// </summary>

    Object getInputs() const;
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const Object& value);

    /// <summary>
    /// **参数解释**：供界面使用的翻译信息。
    /// </summary>

    Object getTranslate() const;
    bool translateIsSet() const;
    void unsettranslate();
    void setTranslate(const Object& value);

    /// <summary>
    /// **参数解释**：版本描述信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：版本描述信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    Object inputs_;
    bool inputsIsSet_;
    Object translate_;
    bool translateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateVersionV2_H_
