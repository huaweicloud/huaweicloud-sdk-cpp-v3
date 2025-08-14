
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowQueueResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowQueueResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowQueueResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowQueueResponse();
    virtual ~ShowQueueResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowQueueResponse members

    /// <summary>
    /// 队列ID，用于唯一标识一个队列。
    /// </summary>

    std::string getQueueId() const;
    bool queueIdIsSet() const;
    void unsetqueueId();
    void setQueueId(const std::string& value);

    /// <summary>
    /// 队列名称，同一租户不允许重复。
    /// </summary>

    std::string getQueueName() const;
    bool queueNameIsSet() const;
    void unsetqueueName();
    void setQueueName(const std::string& value);

    /// <summary>
    /// 在物联网平台创建队列的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 在物联网平台最后修改队列的时间。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getLastModifyTime() const;
    bool lastModifyTimeIsSet() const;
    void unsetlastModifyTime();
    void setLastModifyTime(const std::string& value);


protected:
    std::string queueId_;
    bool queueIdIsSet_;
    std::string queueName_;
    bool queueNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastModifyTime_;
    bool lastModifyTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowQueueResponse_H_
