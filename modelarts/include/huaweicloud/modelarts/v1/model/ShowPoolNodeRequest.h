
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolNodeRequest
    : public ModelBase
{
public:
    ShowPoolNodeRequest();
    virtual ~ShowPoolNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolNodeRequest members

    /// <summary>
    /// **参数解释**：资源池的ID，取值自资源池详情的metadata.name字段。 **约束限制**：只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为36-63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点名称。取值节点详情的metadata.name字段。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPoolNodeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPoolNodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeRequest_H_
