
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsRes_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsRes_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EndpointsRes
    : public ModelBase
{
public:
    EndpointsRes();
    virtual ~EndpointsRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointsRes members

    /// <summary>
    /// **参数解释**：访问Notebook的途径。 **取值范围**：枚举类型，取值如下： - NOTEBOOK：可以通过https协议访问Notebook。 - SSH：可以通过SSH协议远程连接Notebook。
    /// </summary>

    std::string getDevService() const;
    bool devServiceIsSet() const;
    void unsetdevService();
    void setDevService(const std::string& value);

    /// <summary>
    /// **参数解释**：访问Notebook的途径。 **取值范围**：枚举类型，取值如下： - NOTEBOOK：可以通过https协议访问Notebook。 - SSH：可以通过SSH协议远程连接Notebook。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// **参数解释**：实例私有IP地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**：SSH密钥对名称列表，允许设置多个密钥对实现同时对SSH实例的访问。 **取值范围**：不涉及。
    /// </summary>

    std::vector<std::string>& getKeyPairNames();
    bool keyPairNamesIsSet() const;
    void unsetkeyPairNames();
    void setKeyPairNames(const std::vector<std::string>& value);


protected:
    std::string devService_;
    bool devServiceIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::vector<std::string> keyPairNames_;
    bool keyPairNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EndpointsRes_H_
