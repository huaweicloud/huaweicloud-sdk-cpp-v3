
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDriverReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDriverReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateDriverReq
    : public ModelBase
{
public:
    UpdateDriverReq();
    virtual ~UpdateDriverReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDriverReq members

    /// <summary>
    /// jdbc驱动文件名称，name的长度5-64，结尾以.jar结尾。
    /// </summary>

    std::string getDriverName() const;
    bool driverNameIsSet() const;
    void unsetdriverName();
    void setDriverName(const std::string& value);


protected:
    std::string driverName_;
    bool driverNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateDriverReq_H_
