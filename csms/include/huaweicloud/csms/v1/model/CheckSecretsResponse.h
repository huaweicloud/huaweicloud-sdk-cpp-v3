
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_CSMS_V1_EXPORT  CheckSecretsResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckSecretsResponse();
    virtual ~CheckSecretsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckSecretsResponse members

    /// <summary>
    /// 凭据检测类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 凭据检测对应的响应数据体。
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);


protected:
    std::string type_;
    bool typeIsSet_;
    Object data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsResponse_H_
