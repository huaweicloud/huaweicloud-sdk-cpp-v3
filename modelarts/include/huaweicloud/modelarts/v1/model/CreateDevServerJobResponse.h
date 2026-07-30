
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerJobResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerJobResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DevServerJobItem.h>
#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/DevServerTaskResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateDevServerJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDevServerJobResponse();
    virtual ~CreateDevServerJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDevServerJobResponse members

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释**：更新时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释**：任务ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：任务名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：任务模板类型。 **取值范围**：- COMMON  -SERVICE_DEPLOY 等。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：状态。 **取值范围**：- ACTIVE。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：任务实例列表信息。
    /// </summary>

    std::vector<DevServerJobItem>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<DevServerJobItem>& value);

    /// <summary>
    /// **参数解释**：task详情列表。
    /// </summary>

    std::vector<DevServerTaskResponse>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<DevServerTaskResponse>& value);

    /// <summary>
    /// **参数解释**：任务模板ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// **参数解释**：下发任务的用户信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：task失败的节点数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getAbnormalCount() const;
    bool abnormalCountIsSet() const;
    void unsetabnormalCount();
    void setAbnormalCount(int32_t value);

    /// <summary>
    /// **参数解释**：描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<DevServerJobItem> items_;
    bool itemsIsSet_;
    std::vector<DevServerTaskResponse> tasks_;
    bool tasksIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    int32_t abnormalCount_;
    bool abnormalCountIsSet_;
    std::string description_;
    bool descriptionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateDevServerJobResponse_H_
