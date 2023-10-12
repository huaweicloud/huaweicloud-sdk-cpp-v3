
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ExecuteRecordV2Body_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ExecuteRecordV2Body_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用部署记录Body
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ExecuteRecordV2Body
    : public ModelBase
{
public:
    ExecuteRecordV2Body();
    virtual ~ExecuteRecordV2Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteRecordV2Body members

    /// <summary>
    /// 部署用时
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// 应用状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 操作人用户名
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// 部署记录ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 部署应用的开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 操作人昵称
    /// </summary>

    std::string getNickname() const;
    bool nicknameIsSet() const;
    void unsetnickname();
    void setNickname(const std::string& value);

    /// <summary>
    /// 部署应用的结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 部署记录序列号
    /// </summary>

    int64_t getReleaseId() const;
    bool releaseIdIsSet() const;
    void unsetreleaseId();
    void setReleaseId(int64_t value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string duration_;
    bool durationIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string nickname_;
    bool nicknameIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t releaseId_;
    bool releaseIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ExecuteRecordV2Body_H_
