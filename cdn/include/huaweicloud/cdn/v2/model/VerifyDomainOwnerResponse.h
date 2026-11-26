
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CDN_V2_EXPORT  VerifyDomainOwnerResponse
    : public ModelBase, public HttpResponse
{
public:
    VerifyDomainOwnerResponse();
    virtual ~VerifyDomainOwnerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyDomainOwnerResponse members

    /// <summary>
    /// 验证是否通过，true：通过，false：不通过。
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);

    /// <summary>
    /// **参数解释：** 域名校验状态，表示当前账号下是否存在该域名 **约束限制：** 不涉及 **取值范围：** - DomainExist: 该域名已存在 - DomainNotExist: 该域名不存在  **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    bool result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerResponse_H_
