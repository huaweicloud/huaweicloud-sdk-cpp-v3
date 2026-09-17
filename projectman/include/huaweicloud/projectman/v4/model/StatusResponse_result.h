
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/StatusVoIpd.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项状态查询接口返回状态数据
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  StatusResponse_result
    : public ModelBase
{
public:
    StatusResponse_result();
    virtual ~StatusResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusResponse_result members

    /// <summary>
    /// **参数解释**： 状态对象。  **取值范围**： 不涉及。
    /// </summary>

    std::vector<StatusVoIpd>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<StatusVoIpd>& value);


protected:
    std::vector<StatusVoIpd> status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusResponse_result_H_
