
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceState_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceState_H_


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
/// 实例状态
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceState
    : public ModelBase
{
public:
    InstanceState();
    virtual ~InstanceState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceState members

    /// <summary>
    /// 实例状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 参数变更，是否需要重启
    /// </summary>

    bool isWaitRestartForParams() const;
    bool waitRestartForParamsIsSet() const;
    void unsetwaitRestartForParams();
    void setWaitRestartForParams(bool value);


protected:
    std::string status_;
    bool statusIsSet_;
    bool waitRestartForParams_;
    bool waitRestartForParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceState_H_
