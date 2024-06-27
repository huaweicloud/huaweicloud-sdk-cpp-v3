
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchDTO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchDTO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// description
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpsSwitchDTO
    : public ModelBase
{
public:
    IpsSwitchDTO();
    virtual ~IpsSwitchDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsSwitchDTO members

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 补丁类型，仅支持虚拟补丁，值为2。
    /// </summary>

    int32_t getIpsType() const;
    bool ipsTypeIsSet() const;
    void unsetipsType();
    void setIpsType(int32_t value);

    /// <summary>
    /// ips特性开关状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    int32_t ipsType_;
    bool ipsTypeIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsSwitchDTO_H_
