
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerShardCheckpointInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerShardCheckpointInfo_H_


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
class HUAWEICLOUD_LTS_V2_EXPORT  ConsumerShardCheckpointInfo
    : public ModelBase
{
public:
    ConsumerShardCheckpointInfo();
    virtual ~ConsumerShardCheckpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConsumerShardCheckpointInfo members

    /// <summary>
    /// 日志Shard ID
    /// </summary>

    std::string getShardId() const;
    bool shardIdIsSet() const;
    void unsetshardId();
    void setShardId(const std::string& value);

    /// <summary>
    /// 游标值
    /// </summary>

    int64_t getCheckpoint() const;
    bool checkpointIsSet() const;
    void unsetcheckpoint();
    void setCheckpoint(int64_t value);


protected:
    std::string shardId_;
    bool shardIdIsSet_;
    int64_t checkpoint_;
    bool checkpointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ConsumerShardCheckpointInfo_H_
