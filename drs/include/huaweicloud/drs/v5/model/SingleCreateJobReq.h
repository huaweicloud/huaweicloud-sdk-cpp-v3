
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateJobReq_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/CreateJobReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建单个任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SingleCreateJobReq
    : public ModelBase
{
public:
    SingleCreateJobReq();
    virtual ~SingleCreateJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SingleCreateJobReq members

    /// <summary>
    /// 
    /// </summary>

    CreateJobReq getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const CreateJobReq& value);


protected:
    CreateJobReq job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateJobReq_H_
