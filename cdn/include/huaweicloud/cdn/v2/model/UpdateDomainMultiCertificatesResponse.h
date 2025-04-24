
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesResponseBody_result.h>
#include <huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesResponseBodyContent.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateDomainMultiCertificatesResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDomainMultiCertificatesResponse();
    virtual ~UpdateDomainMultiCertificatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateDomainMultiCertificatesResponseBodyContent getHttps() const;
    bool httpsIsSet() const;
    void unsethttps();
    void setHttps(const UpdateDomainMultiCertificatesResponseBodyContent& value);

    /// <summary>
    /// 执行结果，success，fail
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 详情
    /// </summary>

    std::vector<UpdateDomainMultiCertificatesResponseBody_result>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<UpdateDomainMultiCertificatesResponseBody_result>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    UpdateDomainMultiCertificatesResponseBodyContent https_;
    bool httpsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<UpdateDomainMultiCertificatesResponseBody_result> result_;
    bool resultIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponse_H_
