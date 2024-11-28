
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListSecretTaskRequest
    : public ModelBase
{
public:
    ListSecretTaskRequest();
    virtual ~ListSecretTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSecretTaskRequest members

    /// <summary>
    /// 凭据的名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 任务状态。取值 ：  - SUCCESS ：任务轮转成功。 - FAILED ：任务轮转失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务ID。 该参数与其他参数不能同时存在。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 每页返回的个数。 默认值：50。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的任务ID，为空时为查询第一页。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSecretTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ListSecretTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskRequest_H_
