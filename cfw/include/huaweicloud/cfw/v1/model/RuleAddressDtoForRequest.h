
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDtoForRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDtoForRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/IpRegionDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 规则地址传输对象 **约束限制**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleAddressDtoForRequest
    : public ModelBase
{
public:
    RuleAddressDtoForRequest();
    virtual ~RuleAddressDtoForRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAddressDtoForRequest members

    /// <summary>
    /// **参数解释**： 源或目的地址的输入类型，用于区分不同的输入类型 **约束限制**： 当规则type&#x3D;0（互联网规则）或者type&#x3D; 2（NAT规则）时方向值（direction）必填 **取值范围**： 0手动输入，1关联IP地址组，2域名，3地理位置，4域名组-应用型，5多对象，6域名组-网络型，7域名-应用型。 **默认取值**： 不涉及
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释**： IP地址互联网协议类型，用于区分不同互联网协议 **约束限制**： 当type为0手动输入时，此处不能为空 **取值范围**： 地址类型0 IPv4，1 IPv6。 **默认取值**： 不涉及
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// **参数解释**： IP地址信息，用于明确规则IP地址 **约束限制**： 当type为0手动输入时，此处不能为空 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联IP地址组ID，用于明确规则IP地址组id，可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： 当type为1关联IP地址组时，此处不能为空 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAddressSetId() const;
    bool addressSetIdIsSet() const;
    void unsetaddressSetId();
    void setAddressSetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联IP地址组名称，用于明确规则IP地址组名称，可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.name（.表示各对象之间层级的区分）获得。 **约束限制**： 当type为1关联IP地址组时，此处不能为空 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAddressSetName() const;
    bool addressSetNameIsSet() const;
    void unsetaddressSetName();
    void setAddressSetName(const std::string& value);

    /// <summary>
    /// **参数解释**： 域名名称或引用域名组名称，用于明确规则引用域名或域名组名称 **约束限制**： 当type为2（域名）或7（域名组-应用型）时，此处不能为空，长度为0-255 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainAddressName() const;
    bool domainAddressNameIsSet() const;
    void unsetdomainAddressName();
    void setDomainAddressName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则地域列表json值，用于明确规则引用地域名称列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getRegionListJson() const;
    bool regionListJsonIsSet() const;
    void unsetregionListJson();
    void setRegionListJson(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则地域列表 **约束限制**： 不涉及
    /// </summary>

    std::vector<IpRegionDto>& getRegionList();
    bool regionListIsSet() const;
    void unsetregionList();
    void setRegionList(const std::vector<IpRegionDto>& value);

    /// <summary>
    /// **参数解释**： 域名组ID，用于明确规则引用域名组。可通过[查询域名组列表接口](ListDomainSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。 **约束限制**： type为4（应用型域名组）或6（网络域名组）时不能为空。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainSetId() const;
    bool domainSetIdIsSet() const;
    void unsetdomainSetId();
    void setDomainSetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 域名组名称，用于明确规则引用域名组。可通过[查询域名组列表接口](ListDomainSets.xml)查询获得，通过返回值中的data.records.name（.表示各对象之间层级的区分）获得。 **约束限制**： type为4（应用型域名组）或6（网络域名组）时不能为空。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDomainSetName() const;
    bool domainSetNameIsSet() const;
    void unsetdomainSetName();
    void setDomainSetName(const std::string& value);

    /// <summary>
    /// **参数解释**： IP地址列表，用于明确规则引用IP地址列表。 **约束限制**： 当type为5（多对象）时不能为空。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getIpAddress();
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 地址组类型，用于明确规则引用地址组类型。 **约束限制**： 当address的type为1（关联IP地址组）时，此处不能为空。 **取值范围**： 0表示自定义地址组，1表示WAF回源IP地址组，3表示NAT64转换地址组 **默认取值**： 不涉及
    /// </summary>

    int32_t getAddressSetType() const;
    bool addressSetTypeIsSet() const;
    void unsetaddressSetType();
    void setAddressSetType(int32_t value);

    /// <summary>
    /// **参数解释**： 预定义地址组ID列表，用于明确规则引用预定义地址组id列表。地址组ID可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。查询条件中query_address_set_type需要设置为1预定义地址组。 **约束限制**： 当type为5（多对象）时不能为空。 **取值范围**： 0表示自定义地址组，1表示WAF回源IP地址组，2表示DDoS回源IP地址组，3表示NAT64转换地址组 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getPredefinedGroup();
    bool predefinedGroupIsSet() const;
    void unsetpredefinedGroup();
    void setPredefinedGroup(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 地址组id列表，用于明确规则引用地址组id列表。地址组id可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。查询条件中query_address_set_type需要设置为0自定义地址组。 **约束限制**： 当type为5（多对象）时不能为空。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getAddressGroup();
    bool addressGroupIsSet() const;
    void unsetaddressGroup();
    void setAddressGroup(const std::vector<std::string>& value);


protected:
    int32_t type_;
    bool typeIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string addressSetId_;
    bool addressSetIdIsSet_;
    std::string addressSetName_;
    bool addressSetNameIsSet_;
    std::string domainAddressName_;
    bool domainAddressNameIsSet_;
    std::string regionListJson_;
    bool regionListJsonIsSet_;
    std::vector<IpRegionDto> regionList_;
    bool regionListIsSet_;
    std::string domainSetId_;
    bool domainSetIdIsSet_;
    std::string domainSetName_;
    bool domainSetNameIsSet_;
    std::vector<std::string> ipAddress_;
    bool ipAddressIsSet_;
    int32_t addressSetType_;
    bool addressSetTypeIsSet_;
    std::vector<std::string> predefinedGroup_;
    bool predefinedGroupIsSet_;
    std::vector<std::string> addressGroup_;
    bool addressGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDtoForRequest_H_
