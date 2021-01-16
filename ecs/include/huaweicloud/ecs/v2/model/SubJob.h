
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJob_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJob_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/SubJobEntities.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  SubJob
    : public ModelBase
{
public:
    SubJob();
    virtual ~SubJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubJob members

    /// <summary>
    /// Job的状态。  - SUCCESS：成功。  - RUNNING：运行中。  - FAIL：失败。  - INIT：正在初始化。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SubJobEntities getEntities() const;
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const SubJobEntities& value);

    /// <summary>
    /// 子任务的ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 子任务的类型。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// Job执行失败时的错误码。  Job执行成功后，该值为null。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// Job执行失败时的错误原因。  Job执行成功后，该值为null。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    SubJobEntities entities_;
    bool entitiesIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_SubJob_H_
