
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowCertificateInfoResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowCertificateInfoResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CertInfoResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowCertificateInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCertificateInfoResponse();
    virtual ~ShowCertificateInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCertificateInfoResponse members

    /// <summary>
    /// 查询结果的总数量
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);

    /// <summary>
    /// 证书信息列表
    /// </summary>

    std::vector<CertInfoResp>& getCertificatesInfo();
    bool certificatesInfoIsSet() const;
    void unsetcertificatesInfo();
    void setCertificatesInfo(const std::vector<CertInfoResp>& value);


protected:
    double total_;
    bool totalIsSet_;
    std::vector<CertInfoResp> certificatesInfo_;
    bool certificatesInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowCertificateInfoResponse_H_
