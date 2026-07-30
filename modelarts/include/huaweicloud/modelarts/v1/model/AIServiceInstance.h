
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AIServiceInstance_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AIServiceInstance_H_


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
/// Lite Server部署服务的实例信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AIServiceInstance
    : public ModelBase
{
public:
    AIServiceInstance();
    virtual ~AIServiceInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AIServiceInstance members

    /// <summary>
    /// **参数解释**：部署实例id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：部署实例状态。 **取值范围**：- CREATING - RUNNING  - FAILED  -DELETED - ERROR
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：调用方式信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getEndpoints() const;
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string endpoints_;
    bool endpointsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AIServiceInstance_H_
