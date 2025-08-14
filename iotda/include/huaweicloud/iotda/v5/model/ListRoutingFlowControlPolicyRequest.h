
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingFlowControlPolicyRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingFlowControlPolicyRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListRoutingFlowControlPolicyRequest
    : public ModelBase
{
public:
    ListRoutingFlowControlPolicyRequest();
    virtual ~ListRoutingFlowControlPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRoutingFlowControlPolicyRequest members

    /// <summary>
    /// **参数说明**：实例ID。物理多租下各实例的唯一标识，一般华为云租户无需携带该参数，仅在物理多租场景下从管理面访问API时需要携带该参数。您可以在IoTDA管理控制台界面，选择左侧导航栏“总览”页签查看当前实例的ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数说明**：流控策略作用域。不携带该参数时，查询所有作用域流控策略；取值USER时，查询租户级流控策略；取值为CHANNEL时，查询转发通道级流控策略；取值为RULE时，查询转发规则级流控策略；取值为ACTION时，查询转发动作级流控策略。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// **参数说明**：流控策略作用域附加值。 不携带scope参数或scope参数取值为USER时，可不携带该字段，查询租户级流控策略。 scope参数取值为CHANNEL时，不携带该字段表示查询所有转发通道级流控策略，携带该字段表示查询该字段取值对应转发通道的流控策略。**取值范围**：HTTP_FORWARDING、DIS_FORWARDING、OBS_FORWARDING、AMQP_FORWARDING、DMS_KAFKA_FORWARDING。 scope参数为RULE时，不携带该字段表示查询所有转发规则级流控策略，携带该字段表示查询该字段取值对应转发规则的流控策略。 scope参数为ACTION时，不携带该字段表示查询所有转发动作级流控策略，携带该字段表示查询该字段取值对应转发动作的流控策略。
    /// </summary>

    std::string getScopeValue() const;
    bool scopeValueIsSet() const;
    void unsetscopeValue();
    void setScopeValue(const std::string& value);

    /// <summary>
    /// **参数说明**：数据流转流控策略名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：分页查询时每页显示的记录数。默认每页10条记录，最大设定每页50条记录。 **取值范围**：1-50的整数，默认值为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数说明**：上一次分页查询结果中最后一条记录的ID，在上一次分页查询时由物联网平台返回获得。分页查询时物联网平台是按marker也就是记录ID降序查询的，越新的数据记录ID也会越大。若填写marker，则本次只查询记录ID小于marker的数据记录。若不填写，则从记录ID最大也就是最新的一条数据开始查询。如果需要依次查询所有数据，则每次查询时必须填写上一次查询响应中的marker值。 **取值范围**：长度为24的十六进制字符串，默认值为ffffffffffffffffffffffff。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数说明**：表示从marker后偏移offset条记录开始查询。默认为0，取值范围为0-500的整数。当offset为0时，表示从marker后第一条记录开始输出。 - 限制offset最大值是出于API性能考虑，您可以搭配marker使用该参数实现翻页，例如每页50条记录，1-11页内都可以直接使用offset跳转到指定页，但到11页后，由于offset限制为500，您需要使用第11页返回的marker作为下次查询的marker，以实现翻页到12-22页。 **取值范围**：0-500的整数，默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string scopeValue_;
    bool scopeValueIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRoutingFlowControlPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<ListRoutingFlowControlPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListRoutingFlowControlPolicyRequest_H_
