
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubTrainingJobInfoDto_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubTrainingJobInfoDto_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子任务信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubTrainingJobInfoDto
    : public ModelBase
{
public:
    SubTrainingJobInfoDto();
    virtual ~SubTrainingJobInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTrainingJobInfoDto members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 子任务类型
    /// </summary>

    std::string getSubJobType() const;
    bool subJobTypeIsSet() const;
    void unsetsubJobType();
    void setSubJobType(const std::string& value);

    /// <summary>
    /// 子任务心跳id
    /// </summary>

    std::string getHeartBeatId() const;
    bool heartBeatIdIsSet() const;
    void unsetheartBeatId();
    void setHeartBeatId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 最后更新时间
    /// </summary>

    int64_t getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(int64_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string subJobType_;
    bool subJobTypeIsSet_;
    std::string heartBeatId_;
    bool heartBeatIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t lastUpdateTime_;
    bool lastUpdateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubTrainingJobInfoDto_H_
