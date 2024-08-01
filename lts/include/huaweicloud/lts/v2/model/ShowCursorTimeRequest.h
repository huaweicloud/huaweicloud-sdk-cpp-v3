
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowCursorTimeRequest
    : public ModelBase
{
public:
    ShowCursorTimeRequest();
    virtual ~ShowCursorTimeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCursorTimeRequest members

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
    /// Shard ID
    /// </summary>

    std::string getShardId() const;
    bool shardIdIsSet() const;
    void unsetshardId();
    void setShardId(const std::string& value);

    /// <summary>
    /// 游标值
    /// </summary>

    std::string getCursor() const;
    bool cursorIsSet() const;
    void unsetcursor();
    void setCursor(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string shardId_;
    bool shardIdIsSet_;
    std::string cursor_;
    bool cursorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCursorTimeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCursorTimeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowCursorTimeRequest_H_
