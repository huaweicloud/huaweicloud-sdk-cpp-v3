
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListResetTracksTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListResetTracksTaskResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ResetTracksTaskInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListResetTracksTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListResetTracksTaskResponse();
    virtual ~ListResetTracksTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResetTracksTaskResponse members

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<ResetTracksTaskInfo>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<ResetTracksTaskInfo>& value);

    /// <summary>
    /// 查询结果是否被截取。 - 1代表被截取，即还有结果未被返回，可以通过设置page和size参数继续查询。 - 0代表未被截取，即所有结果已被返回。 
    /// </summary>

    int32_t getIsTruncated() const;
    bool isTruncatedIsSet() const;
    void unsetisTruncated();
    void setIsTruncated(int32_t value);

    /// <summary>
    /// 查询结果的数量。 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ResetTracksTaskInfo> taskArray_;
    bool taskArrayIsSet_;
    int32_t isTruncated_;
    bool isTruncatedIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListResetTracksTaskResponse_H_
