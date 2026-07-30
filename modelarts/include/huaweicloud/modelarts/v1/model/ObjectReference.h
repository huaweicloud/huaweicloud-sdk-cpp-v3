
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObjectReference_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObjectReference_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ObjectReference
    : public ModelBase
{
public:
    ObjectReference();
    virtual ~ObjectReference();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectReference members

    /// <summary>
    /// **参数解释**： 资源对象的API类型，例如，DaemonSet、Deployment 等。 **取值范围**： 不涉及。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源对象的API版本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源对象的命名空间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源对象的名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源对象的唯一标识符（UID）。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源对象的当前版本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getResourceVersion() const;
    bool resourceVersionIsSet() const;
    void unsetresourceVersion();
    void setResourceVersion(const std::string& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string resourceVersion_;
    bool resourceVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObjectReference_H_
