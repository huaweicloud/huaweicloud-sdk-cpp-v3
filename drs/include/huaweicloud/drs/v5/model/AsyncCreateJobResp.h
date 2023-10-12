
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCreateJobResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCreateJobResp_H_


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
/// 创建异步任务响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AsyncCreateJobResp
    : public ModelBase
{
public:
    AsyncCreateJobResp();
    virtual ~AsyncCreateJobResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AsyncCreateJobResp members

    /// <summary>
    /// 批量异步创建的任务ID。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCreateJobResp_H_
