
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequestBody_H_


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
/// 修改密码请求。application_password和instance_password可单独传，但不能同时为空。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifySupabaseApplicationPasswordRequestBody
    : public ModelBase
{
public:
    ModifySupabaseApplicationPasswordRequestBody();
    virtual ~ModifySupabaseApplicationPasswordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifySupabaseApplicationPasswordRequestBody members

    /// <summary>
    /// Supabase应用登录密码。
    /// </summary>

    std::string getApplicationPassword() const;
    bool applicationPasswordIsSet() const;
    void unsetapplicationPassword();
    void setApplicationPassword(const std::string& value);

    /// <summary>
    /// 纳管实例数据库密码。
    /// </summary>

    std::string getInstancePassword() const;
    bool instancePasswordIsSet() const;
    void unsetinstancePassword();
    void setInstancePassword(const std::string& value);


protected:
    std::string applicationPassword_;
    bool applicationPasswordIsSet_;
    std::string instancePassword_;
    bool instancePasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationPasswordRequestBody_H_
