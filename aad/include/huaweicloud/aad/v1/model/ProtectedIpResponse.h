
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ProtectedIpResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ProtectedIpResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/IpStatusDetail.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 防护ip列表
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ProtectedIpResponse
    : public ModelBase
{
public:
    ProtectedIpResponse();
    virtual ~ProtectedIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedIpResponse members

    /// <summary>
    /// 防护IP的Id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 防护IP
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 类型。VPN：VPN；NAT：NAT；VIP：VIP；CCI：CCI；EIP：弹性公网IP；ELB：弹性负载均衡；REROUTING_IP：REROUTING_IP；SubEni：SubEni；NetInterFace：NetInterFace；
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态：0 - 正常， 1 - 清洗中， 2 - 黑洞中
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    IpStatusDetail getStatusDetail() const;
    bool statusDetailIsSet() const;
    void unsetstatusDetail();
    void setStatusDetail(const IpStatusDetail& value);

    /// <summary>
    /// 策略名
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// 所属region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 实例名
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// TMS标签
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 本地标签
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 默认false，表示是否转售版的IP，不需要展示策略和报表
    /// </summary>

    bool isIsResale() const;
    bool isResaleIsSet() const;
    void unsetisResale();
    void setIsResale(bool value);

    /// <summary>
    /// package_version。cnad_pro：专业版；cnad_ip：标准版；cnad_ep：铂金版；cnad_full_high：全力防高级版；cnad_vic：按需版；cnad_intl_ep：国际站铂金版
    /// </summary>

    std::string getPackageVersion() const;
    bool packageVersionIsSet() const;
    void unsetpackageVersion();
    void setPackageVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t status_;
    bool statusIsSet_;
    IpStatusDetail statusDetail_;
    bool statusDetailIsSet_;
    std::string policyName_;
    bool policyNameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string packageId_;
    bool packageIdIsSet_;
    std::string packageName_;
    bool packageNameIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string tag_;
    bool tagIsSet_;
    bool isResale_;
    bool isResaleIsSet_;
    std::string packageVersion_;
    bool packageVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ProtectedIpResponse_H_
