
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateFlowControlPolicy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateFlowControlPolicy_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据流转流控策略请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateFlowControlPolicy
    : public ModelBase
{
public:
    UpdateFlowControlPolicy();
    virtual ~UpdateFlowControlPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateFlowControlPolicy members

    /// <summary>
    /// **参数说明**：数据流转流控策略名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义的数据流转流控策略描述。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：数据转发流控大小。单位为tps，取值范围为1~1000的整数，默认为1000.
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string policyName_;
    bool policyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateFlowControlPolicy_H_
