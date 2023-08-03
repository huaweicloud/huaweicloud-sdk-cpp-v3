
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PwdResetRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PwdResetRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PwdResetRequest
    : public ModelBase
{
public:
    PwdResetRequest();
    virtual ~PwdResetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PwdResetRequest members

    /// <summary>
    /// 数据库密码
    /// </summary>

    std::string getDbUserPwd() const;
    bool dbUserPwdIsSet() const;
    void unsetdbUserPwd();
    void setDbUserPwd(const std::string& value);


protected:
    std::string dbUserPwd_;
    bool dbUserPwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PwdResetRequest_H_
