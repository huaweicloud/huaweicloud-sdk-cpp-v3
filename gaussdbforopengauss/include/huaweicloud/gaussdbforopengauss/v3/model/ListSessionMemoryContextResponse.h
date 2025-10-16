
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionMemoryContextResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionMemoryContextResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/SessionMemoryContextInfoResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSessionMemoryContextResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSessionMemoryContextResponse();
    virtual ~ListSessionMemoryContextResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSessionMemoryContextResponse members

    /// <summary>
    /// **参数解释**: 总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: 会话内存上下文列表。
    /// </summary>

    std::vector<SessionMemoryContextInfoResult>& getMemoryContextInfo();
    bool memoryContextInfoIsSet() const;
    void unsetmemoryContextInfo();
    void setMemoryContextInfo(const std::vector<SessionMemoryContextInfoResult>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SessionMemoryContextInfoResult> memoryContextInfo_;
    bool memoryContextInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionMemoryContextResponse_H_
