
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/AddressGroupVO.h>
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
/// 规则地址dto
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  RuleAddressDto
    : public ModelBase
{
public:
    RuleAddressDto();
    virtual ~RuleAddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleAddressDto members

    /// <summary>
    /// 地址类型0手工输入，1关联IP地址组，2域名，3地理位置，4域名组，5多对象，6域名组-网络型，7域名组-应用型。
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 地址类型0 ipv4，1 ipv6，当type为0手动输入类型时不能为空
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// IP地址信息，当type为0手动输入类型时不能为空
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 关联IP地址组ID，当type为1关联IP地址组类型时不能为空，可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getAddressSetId() const;
    bool addressSetIdIsSet() const;
    void unsetaddressSetId();
    void setAddressSetId(const std::string& value);

    /// <summary>
    /// 关联IP地址组名称，当type为1关联IP地址组类型时不能为空，可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.name（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getAddressSetName() const;
    bool addressSetNameIsSet() const;
    void unsetaddressSetName();
    void setAddressSetName(const std::string& value);

    /// <summary>
    /// type为2（域名）和7（应用域名组）具体内容根据type中7修改后的类型名称
    /// </summary>

    std::string getDomainAddressName() const;
    bool domainAddressNameIsSet() const;
    void unsetdomainAddressName();
    void setDomainAddressName(const std::string& value);

    /// <summary>
    /// 规则地域列表json值
    /// </summary>

    std::string getRegionListJson() const;
    bool regionListJsonIsSet() const;
    void unsetregionListJson();
    void setRegionListJson(const std::string& value);

    /// <summary>
    /// 规则地域列表
    /// </summary>

    std::vector<IpRegionDto>& getRegionList();
    bool regionListIsSet() const;
    void unsetregionList();
    void setRegionList(const std::vector<IpRegionDto>& value);

    /// <summary>
    /// 域名组id，type为4（域名组）或7（域名组-应用型）时不能为空。可通过[查询域名组列表接口](ListDomainSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getDomainSetId() const;
    bool domainSetIdIsSet() const;
    void unsetdomainSetId();
    void setDomainSetId(const std::string& value);

    /// <summary>
    /// 域名组名称，type为4（域名组）或7（域名组-应用型）时不能为空。可通过[查询域名组列表接口](ListDomainSets.xml)查询获得，通过返回值中的data.records.name（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getDomainSetName() const;
    bool domainSetNameIsSet() const;
    void unsetdomainSetName();
    void setDomainSetName(const std::string& value);

    /// <summary>
    /// IP地址列表，当type为5（多对象）时不能为空。
    /// </summary>

    std::vector<std::string>& getIpAddress();
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::vector<std::string>& value);

    /// <summary>
    /// 地址组id列表，当type为5（多对象）时不能为空。地址组id可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。查询条件中query_address_set_type需要设置为0自定义地址组。
    /// </summary>

    std::vector<std::string>& getAddressGroup();
    bool addressGroupIsSet() const;
    void unsetaddressGroup();
    void setAddressGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 地址组名称列表
    /// </summary>

    std::vector<AddressGroupVO>& getAddressGroupNames();
    bool addressGroupNamesIsSet() const;
    void unsetaddressGroupNames();
    void setAddressGroupNames(const std::vector<AddressGroupVO>& value);

    /// <summary>
    /// 地址组类型，当type为1（关联IP地址组）时不能为空。0表示自定义地址组，1表示WAF回源IP地址组，2表示DDoS回源IP地址组，3表示NAT64转换地址组
    /// </summary>

    int32_t getAddressSetType() const;
    bool addressSetTypeIsSet() const;
    void unsetaddressSetType();
    void setAddressSetType(int32_t value);

    /// <summary>
    /// 预定义地址组id列表，当type为5（多对象）时不能为空。地址组id可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。查询条件中query_address_set_type需要设置为1预定义地址组。
    /// </summary>

    std::vector<std::string>& getPredefinedGroup();
    bool predefinedGroupIsSet() const;
    void unsetpredefinedGroup();
    void setPredefinedGroup(const std::vector<std::string>& value);


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
    std::vector<std::string> addressGroup_;
    bool addressGroupIsSet_;
    std::vector<AddressGroupVO> addressGroupNames_;
    bool addressGroupNamesIsSet_;
    int32_t addressSetType_;
    bool addressSetTypeIsSet_;
    std::vector<std::string> predefinedGroup_;
    bool predefinedGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_RuleAddressDto_H_
