
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/AccessControlTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListAccessControlTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAccessControlTaskResponse();
    virtual ~ListAccessControlTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessControlTaskResponse members

    /// <summary>
    /// 查询结果总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 封禁或解禁URL任务信息。
    /// </summary>

    std::vector<AccessControlTask>& getAccessControlTasks();
    bool accessControlTasksIsSet() const;
    void unsetaccessControlTasks();
    void setAccessControlTasks(const std::vector<AccessControlTask>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<AccessControlTask> accessControlTasks_;
    bool accessControlTasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListAccessControlTaskResponse_H_
