
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTask_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTask_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 取消定时任务请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CancelScheduleTask
    : public ModelBase
{
public:
    CancelScheduleTask();
    virtual ~CancelScheduleTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CancelScheduleTask members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelScheduleTask_H_
