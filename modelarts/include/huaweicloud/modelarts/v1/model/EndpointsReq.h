
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 本地IDE（如PyCharm、VS Code）或SSH客户端，通过SSH远程接入Notebook实例时需要的相关配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EndpointsReq
    : public ModelBase
{
public:
    EndpointsReq();
    virtual ~EndpointsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointsReq members

    /// <summary>
    /// **参数解释**：支持的服务。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下：  - NOTEBOOK：可以通过https协议访问Notebook。  - SSH：可以通过SSH协议远程连接Notebook。  **默认取值**：不涉及。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// **参数解释**：SSH密钥对名称，可以在云服务器控制台（ECS）“密钥对”页面创建和查看。 **约束限制**：不涉及。
    /// </summary>

    std::vector<std::string>& getKeyPairNames();
    bool keyPairNamesIsSet() const;
    void unsetkeyPairNames();
    void setKeyPairNames(const std::vector<std::string>& value);


protected:
    std::string service_;
    bool serviceIsSet_;
    std::vector<std::string> keyPairNames_;
    bool keyPairNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsReq_H_
