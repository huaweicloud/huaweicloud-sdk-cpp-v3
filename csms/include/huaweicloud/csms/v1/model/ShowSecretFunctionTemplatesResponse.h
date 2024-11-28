
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretFunctionTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSecretFunctionTemplatesResponse();
    virtual ~ShowSecretFunctionTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSecretFunctionTemplatesResponse members

    /// <summary>
    /// 凭据轮转函数模板。
    /// </summary>

    std::string getFunctionTemplates() const;
    bool functionTemplatesIsSet() const;
    void unsetfunctionTemplates();
    void setFunctionTemplates(const std::string& value);


protected:
    std::string functionTemplates_;
    bool functionTemplatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesResponse_H_
