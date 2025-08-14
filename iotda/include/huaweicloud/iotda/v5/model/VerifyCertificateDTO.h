
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_VerifyCertificateDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_VerifyCertificateDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 验证CA证书结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  VerifyCertificateDTO
    : public ModelBase
{
public:
    VerifyCertificateDTO();
    virtual ~VerifyCertificateDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyCertificateDTO members

    /// <summary>
    /// 验证证书的内容信息。
    /// </summary>

    std::string getVerifyContent() const;
    bool verifyContentIsSet() const;
    void unsetverifyContent();
    void setVerifyContent(const std::string& value);


protected:
    std::string verifyContent_;
    bool verifyContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_VerifyCertificateDTO_H_
