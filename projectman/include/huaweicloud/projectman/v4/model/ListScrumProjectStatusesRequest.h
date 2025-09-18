
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListScrumProjectStatusesRequest
    : public ModelBase
{
public:
    ListScrumProjectStatusesRequest();
    virtual ~ListScrumProjectStatusesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScrumProjectStatusesRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 查询偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 一次返回的数据,最小1,最大100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 自定义字段支持的工作项类型 2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListScrumProjectStatusesRequest& dereference_from_shared_ptr(std::shared_ptr<ListScrumProjectStatusesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesRequest_H_
