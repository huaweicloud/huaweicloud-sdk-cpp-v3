
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DumpResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DumpResponse_H_


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
/// **参数解释：** 用户转储配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DumpResponse
    : public ModelBase
{
public:
    DumpResponse();
    virtual ~DumpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DumpResponse members

    /// <summary>
    /// **参数解释：** 用户转储来源类别。 **取值范围：** - [OBS：对象存储服务。](tag:hws,hws_hk) - OBSFS：OBS的文件系统接口。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户转储来源地址，格式遵循不同存储系统。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载到容器内的路径，要求以/开头，后面可包含中划线，反斜杠，下划线，点号，字母，数字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 转储类型。 **取值范围：** - DUMP：用户自定义转储。 - DUMP_SYS：系统转储。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DumpResponse_H_
