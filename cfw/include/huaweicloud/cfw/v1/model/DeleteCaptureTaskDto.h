
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteCaptureTaskDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteCaptureTaskDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteCaptureTaskDto
    : public ModelBase
{
public:
    DeleteCaptureTaskDto();
    virtual ~DeleteCaptureTaskDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteCaptureTaskDto members

    /// <summary>
    /// 抓包任务id列表，抓包任务id可通过[查询抓包任务接口](ListCaptureTask.xml)查询获得，通过返回值中的data.records.task_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteCaptureTaskDto_H_
