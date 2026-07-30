
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LvmConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LvmConfig_H_


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
/// lvm配置管理。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LvmConfig
    : public ModelBase
{
public:
    LvmConfig();
    virtual ~LvmConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LvmConfig members

    /// <summary>
    /// **参数解释**：LVM写入模式。 **取值范围**：可选项如下： - linear：线性模式。 - striped：条带模式，使用多块磁盘组成条带模式，能够提升磁盘性能。
    /// </summary>

    std::string getLvType() const;
    bool lvTypeIsSet() const;
    void unsetlvType();
    void setLvType(const std::string& value);

    /// <summary>
    /// **参数解释**：磁盘挂载路径。仅在用户配置中生效。支持包含：数字、大小写字母、点、中划线、下划线的绝对路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    std::string lvType_;
    bool lvTypeIsSet_;
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LvmConfig_H_
