
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/MultiQueryConditionOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SlowSqlDetailRequestBody
    : public ModelBase
{
public:
    SlowSqlDetailRequestBody();
    virtual ~SlowSqlDetailRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlowSqlDetailRequestBody members

    /// <summary>
    /// **参数解释**: 起始日期。 **约束限制**: 格式:13位UNIX时间戳格式，单位是毫秒，时区是UTC。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**: 结束日期。 **约束限制**: 格式:13位UNIX时间戳格式，单位是毫秒，时区是UTC。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**: 实例ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 字符型组合过滤多条件查询列表。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<MultiQueryConditionOption>& getMultiQueries();
    bool multiQueriesIsSet() const;
    void unsetmultiQueries();
    void setMultiQueries(const std::vector<MultiQueryConditionOption>& value);

    /// <summary>
    /// **参数解释**: 慢SQL的SQL ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID数组。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<MultiQueryConditionOption> multiQueries_;
    bool multiQueriesIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::vector<std::string> nodeIds_;
    bool nodeIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SlowSqlDetailRequestBody_H_
