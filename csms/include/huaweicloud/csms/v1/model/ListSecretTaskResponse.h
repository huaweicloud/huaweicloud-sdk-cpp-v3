
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/SecretTask.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListSecretTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecretTaskResponse();
    virtual ~ListSecretTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSecretTaskResponse members

    /// <summary>
    /// 任务数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 凭据任务列表。
    /// </summary>

    std::vector<SecretTask>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<SecretTask>& value);

    /// <summary>
    /// 下一页查询地址（本页的末尾任务ID）。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SecretTask> tasks_;
    bool tasksIsSet_;
    std::string nextMarker_;
    bool nextMarkerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretTaskResponse_H_
