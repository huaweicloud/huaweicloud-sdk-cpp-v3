
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretFunctionTemplatesRequest
    : public ModelBase
{
public:
    ShowSecretFunctionTemplatesRequest();
    virtual ~ShowSecretFunctionTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSecretFunctionTemplatesRequest members

    /// <summary>
    /// 凭据类型。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// 凭据轮转账号类型。 - SingleUser：单用户模式轮转 - MultiUser：双用户模式轮转
    /// </summary>

    std::string getSecretSubType() const;
    bool secretSubTypeIsSet() const;
    void unsetsecretSubType();
    void setSecretSubType(const std::string& value);

    /// <summary>
    /// 数据库类型。凭据类型为RDS-FG时为必填参数，可传入mysql、postgresql、sqlserver。其余凭据类型不支持。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);


protected:
    std::string secretType_;
    bool secretTypeIsSet_;
    std::string secretSubType_;
    bool secretSubTypeIsSet_;
    std::string engine_;
    bool engineIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSecretFunctionTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSecretFunctionTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretFunctionTemplatesRequest_H_
