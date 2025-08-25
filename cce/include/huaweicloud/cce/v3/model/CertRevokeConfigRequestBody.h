
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CertRevokeConfigRequestBody
    : public ModelBase
{
public:
    CertRevokeConfigRequestBody();
    virtual ~CertRevokeConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertRevokeConfigRequestBody members

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 委托用户ID
    /// </summary>

    std::string getAgencyId() const;
    bool agencyIdIsSet() const;
    void unsetagencyId();
    void setAgencyId(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string agencyId_;
    bool agencyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CertRevokeConfigRequestBody_H_
