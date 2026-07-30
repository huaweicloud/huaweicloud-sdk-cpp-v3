
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Os_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Os_H_


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
/// **参数解释**：操作系统镜像信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Os
    : public ModelBase
{
public:
    Os();
    virtual ~Os();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Os members

    /// <summary>
    /// **参数解释**：操作系统名称和版本，如EulorOS 2.5。指定私有镜像时可不指定。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：操作系统镜像id。 **取值范围**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：操作系统镜像类型。设置私有镜像时必须指定。默认为预置镜像，无需指定该字段。 **取值范围**：可选值如下： - private：私有镜像 - \&quot;\&quot;：不指定类型即预置镜像。
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// **参数解释**：操作系统镜像自动匹配配置。当配置该参数时将会自动选择最优镜像，同时该参数会自动清空。 **取值范围**：操作系统名称和版本，如EulorOS 2.5。
    /// </summary>

    std::string getAutoMatch() const;
    bool autoMatchIsSet() const;
    void unsetautoMatch();
    void setAutoMatch(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::string autoMatch_;
    bool autoMatchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Os_H_
