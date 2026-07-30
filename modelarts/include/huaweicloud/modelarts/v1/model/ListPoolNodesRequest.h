
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListPoolNodesRequest
    : public ModelBase
{
public:
    ListPoolNodesRequest();
    virtual ~ListPoolNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPoolNodesRequest members

    /// <summary>
    /// **参数解释**：分页查询的偏移标志。 **约束限制**：可选。 **取值范围**：取值来自用户上一次分页查询响应结果中metadata.continue中的值，值为空默认无偏移。 **默认取值**：不涉及。
    /// </summary>

    std::string getContinue() const;
    bool continueIsSet() const;
    void unsetcontinue();
    void setContinue(const std::string& value);

    /// <summary>
    /// **参数解释**：分页单次查询返回的资源数量。 **约束限制**：不涉及。 **取值范围**：0 - 500。 **默认取值**：500。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：资源池的ID，取值自资源池详情的metadata.name字段。 **约束限制**：只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为36-63个字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);


protected:
    std::string continue_;
    bool continueIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPoolNodesRequest& dereference_from_shared_ptr(std::shared_ptr<ListPoolNodesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPoolNodesRequest_H_
