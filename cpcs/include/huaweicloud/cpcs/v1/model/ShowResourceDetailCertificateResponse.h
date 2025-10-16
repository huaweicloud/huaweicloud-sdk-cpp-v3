
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponse_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponse_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ShowResourceDetailCertificateResponseBody_certificate_list.h>
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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceDetailCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResourceDetailCertificateResponse();
    virtual ~ShowResourceDetailCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceDetailCertificateResponse members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getMetricName() const;
    bool metricNameIsSet() const;
    void unsetmetricName();
    void setMetricName(const std::string& value);

    /// <summary>
    /// 证书详情列表
    /// </summary>

    std::vector<ShowResourceDetailCertificateResponseBody_certificate_list>& getCertificateList();
    bool certificateListIsSet() const;
    void unsetcertificateList();
    void setCertificateList(const std::vector<ShowResourceDetailCertificateResponseBody_certificate_list>& value);

    /// <summary>
    /// 证书总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 证书过期数量
    /// </summary>

    int32_t getExpiredCount() const;
    bool expiredCountIsSet() const;
    void unsetexpiredCount();
    void setExpiredCount(int32_t value);

    /// <summary>
    /// 证书即将过期数量
    /// </summary>

    int32_t getExpiringCount() const;
    bool expiringCountIsSet() const;
    void unsetexpiringCount();
    void setExpiringCount(int32_t value);


protected:
    std::string metricName_;
    bool metricNameIsSet_;
    std::vector<ShowResourceDetailCertificateResponseBody_certificate_list> certificateList_;
    bool certificateListIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t expiredCount_;
    bool expiredCountIsSet_;
    int32_t expiringCount_;
    bool expiringCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailCertificateResponse_H_
