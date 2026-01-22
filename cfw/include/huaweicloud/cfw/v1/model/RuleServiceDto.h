
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleServiceDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleServiceDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ServiceGroupVO.h>
#include <huaweicloud/cfw/v1/model/ServiceItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// RuleServiceDto
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleServiceDto
    : public ModelBase
{
public:
    RuleServiceDto();
    virtual ~RuleServiceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleServiceDto members

    /// <summary>
    /// **参数解释**： 服务输入类型，用于明确规则的服务输入类型。 **约束限制**： 不涉及 **取值范围**： 0为手动输入类型，1为自动输入类型 **默认取值**： 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释**： 服务协议类型，用于明确规则引用服务协议类型。 **约束限制**： type为0（手动类型）时，此处不能为空。 **取值范围**： 协议类型：TCP为6，UDP为17，ICMP为1，ICMPv6为58，Any为-1 **默认取值**： 不涉及
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// **参数解释**： 协议列表，用于明确规则引用协议列表。 **约束限制**： type为0（手动类型）时，此处不能为空。 **取值范围**： 协议类型：TCP为6，UDP为17，ICMP为1，ICMPv6为58，Any为-1 **默认取值**： 不涉及
    /// </summary>

    std::vector<int32_t>& getProtocols();
    bool protocolsIsSet() const;
    void unsetprotocols();
    void setProtocols(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释**： 源端口，会话发起方的端口。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);

    /// <summary>
    /// **参数解释**： 目的端口，会话接收方的端口。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDestPort() const;
    bool destPortIsSet() const;
    void unsetdestPort();
    void setDestPort(const std::string& value);

    /// <summary>
    /// **参数解释**： 服务组ID，用于明确规则引用服务组，可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： 当address的type为1（关联IP地址组）时，此处不能为空 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getServiceSetId() const;
    bool serviceSetIdIsSet() const;
    void unsetserviceSetId();
    void setServiceSetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 服务（协议、源端口、目的端口）组的名称，用于明确规则引用服务组，可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.name（.表示各对象之间层级的区分）获得。 **约束限制**： 当address的type为1（关联IP地址组）时，此处不能为空 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getServiceSetName() const;
    bool serviceSetNameIsSet() const;
    void unsetserviceSetName();
    void setServiceSetName(const std::string& value);

    /// <summary>
    /// **参数解释**： 自定义服务，用于明确规则引用服务。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<ServiceItem>& getCustomService();
    bool customServiceIsSet() const;
    void unsetcustomService();
    void setCustomService(const std::vector<ServiceItem>& value);

    /// <summary>
    /// **参数解释**： 预定义服务组ID列表，用于明确规则引用预定义服务组。服务组ID可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： 查询条件中query_service_set_type需要设置为1预定义服务组。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getPredefinedGroup();
    bool predefinedGroupIsSet() const;
    void unsetpredefinedGroup();
    void setPredefinedGroup(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 服务组ID列表，用于明确规则引用服务组。服务组ID可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： 查询条件中query_service_set_type需要设置为0自定义服务组。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getServiceGroup();
    bool serviceGroupIsSet() const;
    void unsetserviceGroup();
    void setServiceGroup(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 服务（协议、源端口、目的端口）组的名称。列表。 **约束限制**： 不涉及
    /// </summary>

    std::vector<ServiceGroupVO>& getServiceGroupNames();
    bool serviceGroupNamesIsSet() const;
    void unsetserviceGroupNames();
    void setServiceGroupNames(const std::vector<ServiceGroupVO>& value);

    /// <summary>
    /// **参数解释**： 服务组类型，用于明确规则引用服务组类型。 **约束限制**： 不涉及 **取值范围**： 0表示自定义服务组，1表示常用Web服务，2表示常用远程登录和PING，3表示常用数据库 **默认取值**： 不涉及
    /// </summary>

    int32_t getServiceSetType() const;
    bool serviceSetTypeIsSet() const;
    void unsetserviceSetType();
    void setServiceSetType(int32_t value);


protected:
    int32_t type_;
    bool typeIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    std::vector<int32_t> protocols_;
    bool protocolsIsSet_;
    std::string sourcePort_;
    bool sourcePortIsSet_;
    std::string destPort_;
    bool destPortIsSet_;
    std::string serviceSetId_;
    bool serviceSetIdIsSet_;
    std::string serviceSetName_;
    bool serviceSetNameIsSet_;
    std::vector<ServiceItem> customService_;
    bool customServiceIsSet_;
    std::vector<std::string> predefinedGroup_;
    bool predefinedGroupIsSet_;
    std::vector<std::string> serviceGroup_;
    bool serviceGroupIsSet_;
    std::vector<ServiceGroupVO> serviceGroupNames_;
    bool serviceGroupNamesIsSet_;
    int32_t serviceSetType_;
    bool serviceSetTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleServiceDto_H_
