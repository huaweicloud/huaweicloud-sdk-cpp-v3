
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ModifySupabaseApplicationPasswordRequestBody.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ModifySupabaseApplicationPasswordRequest
    : public ModelBase
{
public:
    ModifySupabaseApplicationPasswordRequest();
    virtual ~ModifySupabaseApplicationPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifySupabaseApplicationPasswordRequest members

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

    ModifySupabaseApplicationPasswordRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifySupabaseApplicationPasswordRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;
    ModifySupabaseApplicationPasswordRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifySupabaseApplicationPasswordRequest& dereference_from_shared_ptr(std::shared_ptr<ModifySupabaseApplicationPasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequest_H_
