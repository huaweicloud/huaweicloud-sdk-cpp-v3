
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticCertificateResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticCertificateResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/VendorCertificateStatistic.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatisticCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStatisticCertificateResponse();
    virtual ~ShowStatisticCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatisticCertificateResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 证书分布按算法和证书类型统计
    /// </summary>

    std::vector<VendorCertificateStatistic>& getCertificateClassifiedCounts();
    bool certificateClassifiedCountsIsSet() const;
    void unsetcertificateClassifiedCounts();
    void setCertificateClassifiedCounts(const std::vector<VendorCertificateStatistic>& value);

    /// <summary>
    /// 证书分布按服务类型统计
    /// </summary>

    std::vector<VendorCertificateStatistic>& getCertificateCountsByServerType();
    bool certificateCountsByServerTypeIsSet() const;
    void unsetcertificateCountsByServerType();
    void setCertificateCountsByServerType(const std::vector<VendorCertificateStatistic>& value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<VendorCertificateStatistic> certificateClassifiedCounts_;
    bool certificateClassifiedCountsIsSet_;
    std::vector<VendorCertificateStatistic> certificateCountsByServerType_;
    bool certificateCountsByServerTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatisticCertificateResponse_H_
