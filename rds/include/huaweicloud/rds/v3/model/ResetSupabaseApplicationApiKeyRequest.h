
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetSupabaseApplicationApiKeyRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetSupabaseApplicationApiKeyRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ResetSupabaseApplicationApiKeyRequest
    : public ModelBase
{
public:
    ResetSupabaseApplicationApiKeyRequest();
    virtual ~ResetSupabaseApplicationApiKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetSupabaseApplicationApiKeyRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string keyId_;
    bool keyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResetSupabaseApplicationApiKeyRequest& dereference_from_shared_ptr(std::shared_ptr<ResetSupabaseApplicationApiKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetSupabaseApplicationApiKeyRequest_H_
