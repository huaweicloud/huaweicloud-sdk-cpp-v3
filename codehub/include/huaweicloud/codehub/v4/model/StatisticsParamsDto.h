
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticsParamsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticsParamsDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 统计任务信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  StatisticsParamsDto
    : public ModelBase
{
public:
    StatisticsParamsDto();
    virtual ~StatisticsParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticsParamsDto members

    /// <summary>
    /// **参数解释：** 分支名
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);


protected:
    std::string branchName_;
    bool branchNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_StatisticsParamsDto_H_
