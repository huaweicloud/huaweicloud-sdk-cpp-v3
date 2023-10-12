
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverModeRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverModeRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  FailoverModeRequest
    : public ModelBase
{
public:
    FailoverModeRequest();
    virtual ~FailoverModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailoverModeRequest members

    /// <summary>
    /// 同步模式，各引擎可选择方式具体如下： MySQL： - async：异步。 - semisync：半同步。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_FailoverModeRequest_H_
