
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Template_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Template_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件实例的模板信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Template
    : public ModelBase
{
public:
    Template();
    virtual ~Template();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Template members

    /// <summary>
    /// **参数解释**：待安装插件模板名称，如log-agent。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：待安装、升级插件的版本号。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：插件模板安装参数（各插件不同），升级插件时需要填写全量安装参数，未填写参数将使用插件模板中的默认值，当前插件安装参数可通过查询插件实例接口获取。 **约束限制**：不涉及。
    /// </summary>

    std::map<std::string, Object>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::map<std::string, Object>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::map<std::string, Object> inputs_;
    bool inputsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Template_H_
