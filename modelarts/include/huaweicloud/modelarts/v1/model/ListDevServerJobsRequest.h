
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerJobsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerJobsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListDevServerJobsRequest
    : public ModelBase
{
public:
    ListDevServerJobsRequest();
    virtual ~ListDevServerJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevServerJobsRequest members

    /// <summary>
    /// **参数解释**：Lite Server job id。 **约束限制**：无。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：Lite Server job的name。 **约束限制**：无。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：Lite Server job的类型。 **约束限制**：无。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：Lite Server job的状态。 **约束限制**：无。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：是否可见。 **约束限制**：bool。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool visible_;
    bool visibleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDevServerJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDevServerJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerJobsRequest_H_
