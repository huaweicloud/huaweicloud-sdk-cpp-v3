
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListAccessControlTaskRequest
    : public ModelBase
{
public:
    ListAccessControlTaskRequest();
    virtual ~ListAccessControlTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessControlTaskRequest members

    /// <summary>
    /// 查询起始时间戳（毫秒），不传默认为当前时间，需与结束时间戳同时指定，时间跨度不能超过7天。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询结束时间戳（毫秒），不传默认3天前，需与开始时间戳同时指定，时间跨度不能超过7天。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 偏移量：特定数据字段与起始数据字段位置的距离，默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 单次查询数据条数，上限为10000，默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 任务状态，状态类型：processing：处理中；succeed：完成；failed：失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAccessControlTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ListAccessControlTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskRequest_H_
