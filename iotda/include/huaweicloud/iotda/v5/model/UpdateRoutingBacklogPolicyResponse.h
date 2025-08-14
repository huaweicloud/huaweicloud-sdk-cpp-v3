
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingBacklogPolicyResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingBacklogPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateRoutingBacklogPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRoutingBacklogPolicyResponse();
    virtual ~UpdateRoutingBacklogPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRoutingBacklogPolicyResponse members

    /// <summary>
    /// **参数说明**：数据流转积压策略id，用于唯一标识一个数据流转积压策略，在创建数据流转积压策略时由物联网平台分配获得。
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数说明**：数据流转积压策略名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义的数据流转积压策略描述。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：数据积压大小。单位为B（字节），取值范围为0~1073741823的整数，默认为1073741823（即1GB）。当backlog_size为0时，表示不积压。若同时配置了backlog_size和backlog_time两个维度，则以最先达到阈值的维度为准。
    /// </summary>

    int32_t getBacklogSize() const;
    bool backlogSizeIsSet() const;
    void unsetbacklogSize();
    void setBacklogSize(int32_t value);

    /// <summary>
    /// **参数说明**：数据积压时间。单位为s（秒），取值范围为0~86399的整数，默认为86399（即1天）。当backlog_time为0时，表示不积压。若同时配置了backlog_size和backlog_time两个维度，则以最先达到阈值的维度为准。
    /// </summary>

    int32_t getBacklogTime() const;
    bool backlogTimeIsSet() const;
    void unsetbacklogTime();
    void setBacklogTime(int32_t value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t backlogSize_;
    bool backlogSizeIsSet_;
    int32_t backlogTime_;
    bool backlogTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRoutingBacklogPolicyResponse_H_
