
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Endpoints_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Endpoints_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 本地IDE（如PyCharm、VSCode）或SSH客户端，通过SSH远程接入Notebook实例时需要的相关配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Endpoints
    : public ModelBase
{
public:
    Endpoints();
    virtual ~Endpoints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Endpoints members

    /// <summary>
    /// **参数解释**：支持的服务。 **取值范围**： - NOTEBOOK：可以通过https协议访问Notebook - SSH：可以通过SSH协议远程连接Notebook
    /// </summary>

    std::string getDevService() const;
    bool devServiceIsSet() const;
    void unsetdevService();
    void setDevService(const std::string& value);

    /// <summary>
    /// **参数解释**：通过应用专属URL直接打开应用进入远程开发模式。包含应用的各种扩展配置。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getExtensions();
    bool extensionsIsSet() const;
    void unsetextensions();
    void setExtensions(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：SSH密钥对名称列表。允许设置多个密钥对实现同时对SSH实例的访问。 **约束限制**：不涉及。 **取值范围**：0 - 1024个密钥对 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getSshKeys();
    bool sshKeysIsSet() const;
    void unsetsshKeys();
    void setSshKeys(const std::vector<std::string>& value);


protected:
    std::string devService_;
    bool devServiceIsSet_;
    std::map<std::string, std::string> extensions_;
    bool extensionsIsSet_;
    std::vector<std::string> sshKeys_;
    bool sshKeysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Endpoints_H_
