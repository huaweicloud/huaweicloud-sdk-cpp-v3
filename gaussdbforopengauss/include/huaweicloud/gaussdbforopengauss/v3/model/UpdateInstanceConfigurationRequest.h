
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateInstanceConfigurationRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateInstanceConfigurationRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussModifyInstanceConfigurationRequest.h>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpdateInstanceConfigurationRequest
    : public ModelBase
{
public:
    UpdateInstanceConfigurationRequest();
    virtual ~UpdateInstanceConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceConfigurationRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussModifyInstanceConfigurationRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const OpenGaussModifyInstanceConfigurationRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    OpenGaussModifyInstanceConfigurationRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateInstanceConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateInstanceConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateInstanceConfigurationRequest_H_
