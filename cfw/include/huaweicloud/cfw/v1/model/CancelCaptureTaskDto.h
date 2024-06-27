
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CancelCaptureTaskDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CancelCaptureTaskDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  CancelCaptureTaskDto
    : public ModelBase
{
public:
    CancelCaptureTaskDto();
    virtual ~CancelCaptureTaskDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelCaptureTaskDto members

    /// <summary>
    /// 抓包任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CancelCaptureTaskDto_H_
