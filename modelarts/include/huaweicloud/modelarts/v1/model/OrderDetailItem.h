
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OrderDetailItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OrderDetailItem_H_


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
/// 订单关联的资源信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OrderDetailItem
    : public ModelBase
{
public:
    OrderDetailItem();
    virtual ~OrderDetailItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrderDetailItem members

    /// <summary>
    /// **参数解释**：资源的ID，取值自资源详情的metadata.name字段。 **取值范围**：不涉及。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// **参数解释**：订单关联的资源变更动作类型。 **取值范围**：可选值如下： - createPool：创建资源池。 - deletePool：删除资源池。 - createNode：创建节点。 - deleteNode：删除节点，主要是包周期节点退订场景。 - renew：续费。 - toPeriodic：转包周期。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：订单关联资源的变更状态。 **取值范围**：可选值如下： - processing：处理中，资源正在处理中。 - succeed：成功，资源处理成功。 - failed：失败，资源处理失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：资源开始变更时间戳，形如1744285793000，单位毫秒。 **取值范围**：不涉及。
    /// </summary>

    std::string getBeginTimestamp() const;
    bool beginTimestampIsSet() const;
    void unsetbeginTimestamp();
    void setBeginTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**：资源变更最后更新时间戳，形如1744285793000，单位毫秒。 **取值范围**：不涉及。
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**：资源变更的执行信息，如失败原因。 **取值范围**：不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string beginTimestamp_;
    bool beginTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OrderDetailItem_H_
