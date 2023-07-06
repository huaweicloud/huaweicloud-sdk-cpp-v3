
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除在线迁移任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DeleteJobReq
    : public ModelBase
{
public:
    DeleteJobReq();
    virtual ~DeleteJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteJobReq members

    /// <summary>
    /// terminate:结束迁移任务,force_terminate:强制结束迁移任务,delete:删除迁移任务
    /// </summary>

    std::string getDeleteType() const;
    bool deleteTypeIsSet() const;
    void unsetdeleteType();
    void setDeleteType(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string deleteType_;
    bool deleteTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DeleteJobReq_H_
