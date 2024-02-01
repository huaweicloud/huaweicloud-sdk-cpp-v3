
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Request_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Request_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowIncreBackupPolicy1Request
    : public ModelBase
{
public:
    ShowIncreBackupPolicy1Request();
    virtual ~ShowIncreBackupPolicy1Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIncreBackupPolicy1Request members

    /// <summary>
    /// instance id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIncreBackupPolicy1Request& dereference_from_shared_ptr(std::shared_ptr<ShowIncreBackupPolicy1Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIncreBackupPolicy1Request_H_
