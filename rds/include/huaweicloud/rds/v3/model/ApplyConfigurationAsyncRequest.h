
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyConfigurationAsyncRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyConfigurationAsyncRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ApplyConfigurationRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ApplyConfigurationAsyncRequest
    : public ModelBase
{
public:
    ApplyConfigurationAsyncRequest();
    virtual ~ApplyConfigurationAsyncRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ApplyConfigurationAsyncRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ApplyConfigurationRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ApplyConfigurationRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string configId_;
    bool configIdIsSet_;
    ApplyConfigurationRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ApplyConfigurationAsyncRequest& dereference_from_shared_ptr(std::shared_ptr<ApplyConfigurationAsyncRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplyConfigurationAsyncRequest_H_
