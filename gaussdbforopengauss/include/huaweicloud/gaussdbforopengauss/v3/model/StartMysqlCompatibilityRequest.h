
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StartMysqlCompatibilityRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StartMysqlCompatibilityRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/StartMySQLCompatibilityRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  StartMysqlCompatibilityRequest
    : public ModelBase
{
public:
    StartMysqlCompatibilityRequest();
    virtual ~StartMysqlCompatibilityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartMysqlCompatibilityRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 语言。默认值：en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StartMySQLCompatibilityRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const StartMySQLCompatibilityRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    StartMySQLCompatibilityRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartMysqlCompatibilityRequest& dereference_from_shared_ptr(std::shared_ptr<StartMysqlCompatibilityRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StartMysqlCompatibilityRequest_H_
