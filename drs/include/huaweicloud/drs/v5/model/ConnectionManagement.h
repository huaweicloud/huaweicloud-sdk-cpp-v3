
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionManagement_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionManagement_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DriverManagement.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ConnectionManagement
    : public ModelBase
{
public:
    ConnectionManagement();
    virtual ~ConnectionManagement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConnectionManagement members

    /// <summary>
    /// 
    /// </summary>

    DriverManagement getDriverManagement() const;
    bool driverManagementIsSet() const;
    void unsetdriverManagement();
    void setDriverManagement(const DriverManagement& value);


protected:
    DriverManagement driverManagement_;
    bool driverManagementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ConnectionManagement_H_
