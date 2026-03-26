
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetConfigurationRequestBody
    : public ModelBase
{
public:
    SetConfigurationRequestBody();
    virtual ~SetConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetConfigurationRequestBody members

    /// <summary>
    /// 备份方式 - EBACKUP - PHYSICALBACKUP
    /// </summary>

    std::string getDefaultBackupMethod() const;
    bool defaultBackupMethodIsSet() const;
    void unsetdefaultBackupMethod();
    void setDefaultBackupMethod(const std::string& value);


protected:
    std::string defaultBackupMethod_;
    bool defaultBackupMethodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetConfigurationRequestBody_H_
