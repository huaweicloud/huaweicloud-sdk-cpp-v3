
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateCheckPointRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateCheckPointRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ConsumerShardCheckpointInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateCheckPointRequest
    : public ModelBase
{
public:
    UpdateCheckPointRequest();
    virtual ~UpdateCheckPointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCheckPointRequest members

    /// <summary>
    /// 日志组ID，获取方式请参见：获取项目ID，获取账号ID，日志组ID、日志流ID。 缺省值：None 最小长度：36 最大长度：36
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID，获取方式请参见：获取项目ID，获取账号ID，日志组ID、日志流ID 缺省值：None 最小长度：36 最大长度：36
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

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
    /// 该字段填为：application/json;charset&#x3D;UTF-8
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ConsumerShardCheckpointInfo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ConsumerShardCheckpointInfo>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string consumerGroupName_;
    bool consumerGroupNameIsSet_;
    std::string consumerName_;
    bool consumerNameIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    std::vector<ConsumerShardCheckpointInfo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateCheckPointRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateCheckPointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateCheckPointRequest_H_
