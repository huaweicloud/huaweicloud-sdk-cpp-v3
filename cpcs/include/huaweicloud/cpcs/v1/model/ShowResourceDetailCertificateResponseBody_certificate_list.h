
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponseBody_certificate_list_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponseBody_certificate_list_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceDetailCertificateResponseBody_certificate_list
    : public ModelBase
{
public:
    ShowResourceDetailCertificateResponseBody_certificate_list();
    virtual ~ShowResourceDetailCertificateResponseBody_certificate_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceDetailCertificateResponseBody_certificate_list members

    /// <summary>
    /// 证书名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 证书ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 密码服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// 证书类型，0：根证书，1：业务证书
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 算法类型，0：国密，1：国际
    /// </summary>

    std::string getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(const std::string& value);

    /// <summary>
    /// 算法名称
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 开始时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 过期时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getExpiredTime() const;
    bool expiredTimeIsSet() const;
    void unsetexpiredTime();
    void setExpiredTime(int64_t value);

    /// <summary>
    /// 签发者
    /// </summary>

    std::string getIssuer() const;
    bool issuerIsSet() const;
    void unsetissuer();
    void setIssuer(const std::string& value);

    /// <summary>
    /// 用户
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 证书状态，0：正常，2：过期，3：即将过期
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string certificateType_;
    bool certificateTypeIsSet_;
    std::string algorithmType_;
    bool algorithmTypeIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t expiredTime_;
    bool expiredTimeIsSet_;
    std::string issuer_;
    bool issuerIsSet_;
    std::string user_;
    bool userIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponseBody_certificate_list_H_
