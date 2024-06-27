
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
    /// 服务输入类型，0为手动输入类型，1为自动输入类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 协议类型:TCP为6, UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 协议列表，协议类型:TCP为6, UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    std::vector<int32_t>& getProtocols();
    bool protocolsIsSet() const;
    void unsetprotocols();
    void setProtocols(std::vector<int32_t> value);

    /// <summary>
    /// 源端口
    /// </summary>

    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);

    /// <summary>
    /// 目的端口
    /// </summary>

    std::string getDestPort() const;
    bool destPortIsSet() const;
    void unsetdestPort();
    void setDestPort(const std::string& value);

    /// <summary>
    /// 服务组id，手动类型为空，自动类型为非空
    /// </summary>

    std::string getServiceSetId() const;
    bool serviceSetIdIsSet() const;
    void unsetserviceSetId();
    void setServiceSetId(const std::string& value);

    /// <summary>
    /// 服务组名称
    /// </summary>

    std::string getServiceSetName() const;
    bool serviceSetNameIsSet() const;
    void unsetserviceSetName();
    void setServiceSetName(const std::string& value);

    /// <summary>
    /// 自定义服务
    /// </summary>

    std::vector<ServiceItem>& getCustomService();
    bool customServiceIsSet() const;
    void unsetcustomService();
    void setCustomService(const std::vector<ServiceItem>& value);

    /// <summary>
    /// 预定义服务组列表
    /// </summary>

    std::vector<std::string>& getPredefinedGroup();
    bool predefinedGroupIsSet() const;
    void unsetpredefinedGroup();
    void setPredefinedGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 服务组列表
    /// </summary>

    std::vector<std::string>& getServiceGroup();
    bool serviceGroupIsSet() const;
    void unsetserviceGroup();
    void setServiceGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 服务组名称列表
    /// </summary>

    std::vector<ServiceGroupVO>& getServiceGroupNames();
    bool serviceGroupNamesIsSet() const;
    void unsetserviceGroupNames();
    void setServiceGroupNames(const std::vector<ServiceGroupVO>& value);

    /// <summary>
    /// 服务组类型，0表示自定义服务组，1表示常用WEB服务，2表示常用远程登录和PING，3表示常用数据库
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
