
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Dump_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Dump_H_


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
/// **参数解释：** 用户产物转储配置 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Dump
    : public ModelBase
{
public:
    Dump();
    virtual ~Dump();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Dump members

    /// <summary>
    /// **参数解释：** 转储挂载目录来源类别。 **约束限制：** 不涉及。 **取值范围：** - [OBS：对象存储服务。](tag:hws,hws_hk) - OBSFS：OBS的文件系统接口。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 转储挂载目录来源地址，支持https或obs协议的obs地址。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载到容器内的路径，要求以/开头，后面可包含中划线，反斜杠，下划线，点号，字母，数字。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Dump_H_
