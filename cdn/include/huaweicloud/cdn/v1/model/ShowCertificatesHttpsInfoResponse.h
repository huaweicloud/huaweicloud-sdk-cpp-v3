
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/HttpsDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowCertificatesHttpsInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCertificatesHttpsInfoResponse();
    virtual ~ShowCertificatesHttpsInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCertificatesHttpsInfoResponse members

    /// <summary>
    /// 查询结果总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// https配置。
    /// </summary>

    std::vector<HttpsDetail>& getHttps();
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const std::vector<HttpsDetail>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<HttpsDetail> https_;
    bool httpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoResponse_H_
