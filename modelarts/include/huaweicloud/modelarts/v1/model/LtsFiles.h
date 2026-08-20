
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LtsFiles_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LtsFiles_H_


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
/// **参数解释：**  容器日志文件配置。 **约束限制：**  数量上限为10个。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LtsFiles
    : public ModelBase
{
public:
    LtsFiles();
    virtual ~LtsFiles();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsFiles members

    /// <summary>
    /// **参数解释：** 日志文件路径。 **约束限制：** 1.路径必须以 / 开头，且第一级目录不能使用通配符，只能包含大写字母，小写字母，数字或特殊符号-_/_*?，长度不能超过 512 个字符。 2.最多允许三级目录使用通配符进行匹配。 **取值范围：** 不涉及 **默认取值：** 不涉及。
    /// </summary>

    std::string getLogPath() const;
    bool logPathIsSet() const;
    void unsetlogPath();
    void setLogPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志文件名称。 **约束限制：** 只能包含大写字母，小写字母，数字或特殊字符-_*?，不支持.gz .tar .zip后缀类型，长度不能超过 255 个字符。 **取值范围：** 不涉及 **默认取值：** 不涉及。
    /// </summary>

    std::string getFilePattern() const;
    bool filePatternIsSet() const;
    void unsetfilePattern();
    void setFilePattern(const std::string& value);


protected:
    std::string logPath_;
    bool logPathIsSet_;
    std::string filePattern_;
    bool filePatternIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LtsFiles_H_
