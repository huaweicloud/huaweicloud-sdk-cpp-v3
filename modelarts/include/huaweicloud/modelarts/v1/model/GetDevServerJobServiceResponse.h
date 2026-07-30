
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AIServiceInstance.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/Model.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetDevServerJobServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    GetDevServerJobServiceResponse();
    virtual ~GetDevServerJobServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetDevServerJobServiceResponse members

    /// <summary>
    /// **参数解释**：部署服务的id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：部署服务名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：部署实例状态。 **取值范围**：- CREATING  - RUNNING  - FAILED  -DELETED  - ERROR。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：部署服务特性参数。 **取值范围**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getSpec();
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：部署服务实例。
    /// </summary>

    std::vector<AIServiceInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<AIServiceInstance>& value);

    /// <summary>
    /// 
    /// </summary>

    Model getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const Model& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::map<std::string, std::string> spec_;
    bool specIsSet_;
    std::vector<AIServiceInstance> instances_;
    bool instancesIsSet_;
    Model model_;
    bool modelIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetDevServerJobServiceResponse_H_
