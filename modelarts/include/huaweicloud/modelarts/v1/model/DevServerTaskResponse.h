
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTaskResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTaskResponse_H_


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
/// DevServerTask详情
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DevServerTaskResponse
    : public ModelBase
{
public:
    DevServerTaskResponse();
    virtual ~DevServerTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevServerTaskResponse members

    /// <summary>
    /// **参数解释**：task的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：devserver机器ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// **参数解释**：devserver机器名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getServerName() const;
    bool serverNameIsSet() const;
    void unsetserverName();
    void setServerName(const std::string& value);

    /// <summary>
    /// **参数解释**：task状态。 **取值范围**：- PROCESSING  -SUCCESS  - FAILED  - SKIPPED
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：底层ECS/BMS/HPS ID。
    /// </summary>

    std::map<std::string, std::string>& getCloudServer();
    bool cloudServerIsSet() const;
    void unsetcloudServer();
    void setCloudServer(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：输出信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

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


protected:
    std::string id_;
    bool idIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string serverName_;
    bool serverNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::map<std::string, std::string> cloudServer_;
    bool cloudServerIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerTaskResponse_H_
