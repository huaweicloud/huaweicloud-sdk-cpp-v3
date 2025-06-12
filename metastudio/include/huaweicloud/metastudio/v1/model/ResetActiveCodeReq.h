
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResetActiveCodeReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResetActiveCodeReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重置激活码请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ResetActiveCodeReq
    : public ModelBase
{
public:
    ResetActiveCodeReq();
    virtual ~ResetActiveCodeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetActiveCodeReq members

    /// <summary>
    /// 是否清除鉴权凭证。
    /// </summary>

    bool isCleanAuthCredential() const;
    bool cleanAuthCredentialIsSet() const;
    void unsetcleanAuthCredential();
    void setCleanAuthCredential(bool value);


protected:
    bool cleanAuthCredential_;
    bool cleanAuthCredentialIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResetActiveCodeReq_H_
