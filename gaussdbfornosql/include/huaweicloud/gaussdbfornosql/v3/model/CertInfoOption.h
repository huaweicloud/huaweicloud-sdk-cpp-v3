
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfoOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfoOption_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** CCM证书信息。 **取值范围：** 开启ssl，不传此参数，表示使用默认证书。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  CertInfoOption
    : public ModelBase
{
public:
    CertInfoOption();
    virtual ~CertInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertInfoOption members

    /// <summary>
    /// **参数解释：** 证书ID。 **取值范围：** 根据CCM证书列表接口获取证书ID。
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书类型。 **取值范围：**   - PCA：CCM PCA 证书。   - SSL：CCM SSL 证书。
    /// </summary>

    std::string getCertType() const;
    bool certTypeIsSet() const;
    void unsetcertType();
    void setCertType(const std::string& value);


protected:
    std::string certId_;
    bool certIdIsSet_;
    std::string certType_;
    bool certTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_CertInfoOption_H_
