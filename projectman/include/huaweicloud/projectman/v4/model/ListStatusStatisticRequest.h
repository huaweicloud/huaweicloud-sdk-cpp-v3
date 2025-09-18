
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListStatusStatisticRequest
    : public ModelBase
{
public:
    ListStatusStatisticRequest();
    virtual ~ListStatusStatisticRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStatusStatisticRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 迭代数字id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 自定义字段支持的工作项类型 2任务/Task,3缺陷/Bug,7Story
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);

    /// <summary>
    /// 工作项状态数字id
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t iterationId_;
    bool iterationIdIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStatusStatisticRequest& dereference_from_shared_ptr(std::shared_ptr<ListStatusStatisticRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListStatusStatisticRequest_H_
