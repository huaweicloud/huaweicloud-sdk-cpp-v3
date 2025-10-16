
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorCertificateStatistic_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorCertificateStatistic_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  VendorCertificateStatistic
    : public ModelBase
{
public:
    VendorCertificateStatistic();
    virtual ~VendorCertificateStatistic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VendorCertificateStatistic members

    /// <summary>
    /// 总数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

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
    /// 服务类型
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// 证书类型
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// 算法类型
    /// </summary>

    int32_t getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(int32_t value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    int32_t algorithmType_;
    bool algorithmTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_VendorCertificateStatistic_H_
