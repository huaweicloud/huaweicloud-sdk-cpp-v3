
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowAsset_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowAsset_H_


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
/// Workflow资产。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowAsset
    : public ModelBase
{
public:
    WorkflowAsset();
    virtual ~WorkflowAsset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowAsset members

    /// <summary>
    /// 资产名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资产类型，枚举如下: - algorithm：算法 - algorithm2：新算法 - model：模型算法
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资产ID，可在AI Gallery中获取。
    /// </summary>

    std::string getContentId() const;
    bool contentIdIsSet() const;
    void unsetcontentId();
    void setContentId(const std::string& value);

    /// <summary>
    /// 订阅ID，可在AI Gallery中获取。
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// 超期时间。
    /// </summary>

    std::string getExpiredAt() const;
    bool expiredAtIsSet() const;
    void unsetexpiredAt();
    void setExpiredAt(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string contentId_;
    bool contentIdIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    std::string expiredAt_;
    bool expiredAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowAsset_H_
