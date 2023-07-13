
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_QuotaShowResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_QuotaShowResp_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源配额实例详情
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  QuotaShowResp
    : public ModelBase
{
public:
    QuotaShowResp();
    virtual ~QuotaShowResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotaShowResp members

    /// <summary>
    /// 功能说明：根据type过滤查询指定类型的配额 取值范围：vpc，subnet，securityGroup，securityGroupRule，publicIp，vpn，vpngw，vpcPeer，firewall，shareBandwidth，shareBandwidthIP
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 功能说明：已创建的资源个数 取值范围：0~quota数
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 功能说明：资源的最大配额数 取值范围：各类型资源默认配额数~Integer最大值 约束：资源的默认配额数可以修改，而且配额需要提前在底层配置，参考默认配置为：vpc默认5，子网默认100，安全组默认100，安全组规则默认5000，弹性公网IP默认10，vpn默认5，vpngw默认2，vpcPeer默认50，firewall默认200，shareBandwidth默认5，shareBandwidthIP默认20
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 允许修改的配额最小值
    /// </summary>

    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t min_;
    bool minIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_QuotaShowResp_H_
