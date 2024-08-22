
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteUserDriverReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteUserDriverReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DRS_V5_EXPORT  DeleteUserDriverReq
    : public ModelBase
{
public:
    DeleteUserDriverReq();
    virtual ~DeleteUserDriverReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteUserDriverReq members

    /// <summary>
    /// 指定待删除的驱动文件类型。取值范围： - db2：DB2 for LUW - informix：Informix
    /// </summary>

    std::string getDriverType() const;
    bool driverTypeIsSet() const;
    void unsetdriverType();
    void setDriverType(const std::string& value);

    /// <summary>
    /// JDBC驱动文件列表，列表长度1-20，driver_name的长度5-64，结尾以.jar结尾。
    /// </summary>

    std::vector<std::string>& getDriverNames();
    bool driverNamesIsSet() const;
    void unsetdriverNames();
    void setDriverNames(const std::vector<std::string>& value);


protected:
    std::string driverType_;
    bool driverTypeIsSet_;
    std::vector<std::string> driverNames_;
    bool driverNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteUserDriverReq_H_
