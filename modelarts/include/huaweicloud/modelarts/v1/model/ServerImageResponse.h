
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerImageResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerImageResponse_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerImageResponse
    : public ModelBase
{
public:
    ServerImageResponse();
    virtual ~ServerImageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerImageResponse members

    /// <summary>
    /// **参数解释**：服务器镜像架构类型。 **取值范围**： - ARM - X86
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器镜像ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器镜像名称。表示服务器镜像的名称。 **约束限制**：不涉及。 **取值范围**：1 - 256字符 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器类型。 **取值范围**： - BMS：裸金属服务器 - ECS：弹性云服务器 - HPS：超节点服务器
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器镜像状态。 **取值范围**： - ACTIVE - INACTIVE
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerImageResponse_H_
