
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerCheckpointInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerCheckpointInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ConsumerCheckpointInfo
    : public ModelBase
{
public:
    ConsumerCheckpointInfo();
    virtual ~ConsumerCheckpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConsumerCheckpointInfo members

    /// <summary>
    /// 游标值
    /// </summary>

    int64_t getCheckpoint() const;
    bool checkpointIsSet() const;
    void unsetcheckpoint();
    void setCheckpoint(int64_t value);

    /// <summary>
    /// 消费组名
    /// </summary>

    std::string getConsumerGroupName() const;
    bool consumerGroupNameIsSet() const;
    void unsetconsumerGroupName();
    void setConsumerGroupName(const std::string& value);

    /// <summary>
    /// 消费者名
    /// </summary>

    std::string getConsumerName() const;
    bool consumerNameIsSet() const;
    void unsetconsumerName();
    void setConsumerName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 日志Shard ID
    /// </summary>

    std::string getShardId() const;
    bool shardIdIsSet() const;
    void unsetshardId();
    void setShardId(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    int64_t checkpoint_;
    bool checkpointIsSet_;
    std::string consumerGroupName_;
    bool consumerGroupNameIsSet_;
    std::string consumerName_;
    bool consumerNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string shardId_;
    bool shardIdIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerCheckpointInfo_H_
