
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeResponse_H_


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
/// **参数解释：** 代码挂载配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CodeResponse
    : public ModelBase
{
public:
    CodeResponse();
    virtual ~CodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CodeResponse members

    /// <summary>
    /// **参数解释：** 代码来源类别。 **取值范围：** - OBS：对象存储服务。 - OBSFS：OBS的文件系统接口。 - EFS：弹性文件服务。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码来源地址，格式遵循不同存储系统。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码来源ID，与address二选一，当且仅当source为EFS时，可以传入sfs turbo的ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载到容器内的路径。 **约束限制：** 不涉及。 **取值范围：** 以(/)开头和结尾，可包含字母、数字、中划线、下划线，整个挂载路径长度不能超过255位。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释：** EFS子路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEfsSubPath() const;
    bool efsSubPathIsSet() const;
    void unsetefsSubPath();
    void setEfsSubPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载权限设置, 是否只读。 **取值范围：** - true：只读。 - false：非只读。
    /// </summary>

    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetreadOnly();
    void setReadOnly(bool value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string sourceId_;
    bool sourceIdIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string efsSubPath_;
    bool efsSubPathIsSet_;
    bool readOnly_;
    bool readOnlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CodeResponse_H_
