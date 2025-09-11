
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListCnInfosBeforeReduceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListCnInfosBeforeReduceResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CnInfoBeforeReduce.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListCnInfosBeforeReduceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCnInfosBeforeReduceResponse();
    virtual ~ListCnInfosBeforeReduceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCnInfosBeforeReduceResponse members

    /// <summary>
    /// **参数解释**: 实例ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 单次缩容允许最大步长。
    /// </summary>

    int32_t getMaxReductionNum() const;
    bool maxReductionNumIsSet() const;
    void unsetmaxReductionNum();
    void setMaxReductionNum(int32_t value);

    /// <summary>
    /// 节点信息列表。
    /// </summary>

    std::vector<CnInfoBeforeReduce>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<CnInfoBeforeReduce>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t maxReductionNum_;
    bool maxReductionNumIsSet_;
    std::vector<CnInfoBeforeReduce> nodes_;
    bool nodesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListCnInfosBeforeReduceResponse_H_
