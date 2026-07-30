
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobCreateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DevServerJobItem.h>
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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DevServerJobCreateRequest
    : public ModelBase
{
public:
    DevServerJobCreateRequest();
    virtual ~DevServerJobCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevServerJobCreateRequest members

    /// <summary>
    /// **参数解释**：任务名称。 **约束限制**：^[-_.a-zA-Z0-9]{1,64}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：任务描述。 **约束限制**：^[-_.a-zA-Z0-9]{1,64}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：DevServer实例id列表。 **取值范围**：不涉及。
    /// </summary>

    std::vector<std::string>& getServerIds();
    bool serverIdsIsSet() const;
    void unsetserverIds();
    void setServerIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：任务模板类型。 **约束限制**：^[-_.a-zA-Z0-9]{1,64}$。 **取值范围**：-COMMON  -SERVICE_DEPLOY 等。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：任务失败后是否重启。 **约束限制**：不涉及。 **取值范围**：- true   -false。 **默认取值**：false。
    /// </summary>

    bool isIsReboot() const;
    bool isRebootIsSet() const;
    void unsetisReboot();
    void setIsReboot(bool value);

    /// <summary>
    /// **参数解释**：任务实例列表。 **取值范围**：不涉及。
    /// </summary>

    std::vector<DevServerJobItem>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<DevServerJobItem>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> serverIds_;
    bool serverIdsIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool isReboot_;
    bool isRebootIsSet_;
    std::vector<DevServerJobItem> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerJobCreateRequest_H_
