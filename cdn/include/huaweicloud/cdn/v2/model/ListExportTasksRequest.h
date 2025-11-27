
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListExportTasksRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListExportTasksRequest_H_


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
class HUAWEICLOUD_CDN_V2_EXPORT  ListExportTasksRequest
    : public ModelBase
{
public:
    ListExportTasksRequest();
    virtual ~ListExportTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExportTasksRequest members

    /// <summary>
    /// - 每页显示的条目数量, 默认为10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset大于等于0，默认为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListExportTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ListExportTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListExportTasksRequest_H_
