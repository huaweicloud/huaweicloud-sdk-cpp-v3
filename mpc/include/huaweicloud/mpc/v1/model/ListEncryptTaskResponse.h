
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListEncryptTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListEncryptTaskResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/EachEncryptRsp.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  ListEncryptTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEncryptTaskResponse();
    virtual ~ListEncryptTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListEncryptTaskResponse members

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<EachEncryptRsp>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<EachEncryptRsp>& value);

    /// <summary>
    /// 是否截断
    /// </summary>

    int32_t getIsTruncated() const;
    bool isTruncatedIsSet() const;
    void unsetisTruncated();
    void setIsTruncated(int32_t value);

    /// <summary>
    /// 查询结果数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<EachEncryptRsp> taskArray_;
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

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListEncryptTaskResponse_H_
