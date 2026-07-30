
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Config_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Config_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Config
    : public ModelBase
{
public:
    Config();
    virtual ~Config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Config members

    /// <summary>
    /// **参数解释**：自定义脚本内容（base64编码）或脚本绝对路径。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getScript() const;
    bool scriptIsSet() const;
    void unsetscript();
    void setScript(const std::string& value);

    /// <summary>
    /// **参数解释**：脚本类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - COMMAND：script中需要指定脚本内容（base64编码）。 - SCRIPT：script中需要指定脚本路径。  **默认取值**：SCRIPT。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义脚本执行方式，同步或异步执行。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - BLOCK：同步 - ASYNC：异步  **默认取值**：ASYNC
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string script_;
    bool scriptIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Config_H_
