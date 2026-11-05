
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowSupabaseApplicationApiKeyValueRequest
    : public ModelBase
{
public:
    ShowSupabaseApplicationApiKeyValueRequest();
    virtual ~ShowSupabaseApplicationApiKeyValueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSupabaseApplicationApiKeyValueRequest members

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
    /// ApiKey ID。
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
    ShowSupabaseApplicationApiKeyValueRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSupabaseApplicationApiKeyValueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowSupabaseApplicationApiKeyValueRequest_H_
