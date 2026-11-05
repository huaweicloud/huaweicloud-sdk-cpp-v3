
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VerifyAgencyResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VerifyAgencyResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  VerifyAgencyResponse
    : public ModelBase, public HttpResponse
{
public:
    VerifyAgencyResponse();
    virtual ~VerifyAgencyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyAgencyResponse members

    /// <summary>
    /// 是否有权使用该委托，true表示有权，false表示无权
    /// </summary>

    bool isIsAuthorized() const;
    bool isAuthorizedIsSet() const;
    void unsetisAuthorized();
    void setIsAuthorized(bool value);

    /// <summary>
    /// **参数解释**： 授权内容。 - 当授权类型是委托，该字段为委托名称。 - 当授权类型是访问密钥，该字段为访问密钥ID（AK）。  **取值范围**：长度限制64个字符。
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    bool isAuthorized_;
    bool isAuthorizedIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VerifyAgencyResponse_H_
