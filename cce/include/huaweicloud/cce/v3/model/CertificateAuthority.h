
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CertificateAuthority_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CertificateAuthority_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  CertificateAuthority
    : public ModelBase
{
public:
    CertificateAuthority();
    virtual ~CertificateAuthority();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertificateAuthority members

    /// <summary>
    /// **参数解释：** Base64编码的CCE集群根证书 **约束限制：** 该字段仅在获取指定的集群时返回 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);


protected:
    std::string data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CertificateAuthority_H_
