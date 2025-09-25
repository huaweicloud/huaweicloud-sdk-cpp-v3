
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSqlLimitTaskRequestBody
    : public ModelBase
{
public:
    ListSqlLimitTaskRequestBody();
    virtual ~ListSqlLimitTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlLimitTaskRequestBody members

    /// <summary>
    /// **参数解释**: 限流任务范围。 **约束限制**: 不涉及。 **取值范围**: 目前支持SQL、SESSION。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTaskScope() const;
    bool taskScopeIsSet() const;
    void unsettaskScope();
    void setTaskScope(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流类型。 **约束限制**: 不涉及。 **取值范围**: 支持SQL_ID、SQL_TYPE、SESSION_ACTIVE_MAX_COUNT类型。 **默认取值**: 不涉及。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流类型值，支持模糊匹配。 **约束限制**: 不涉及。 **取值范围**: 长度为1~19字符，且只能包含大小写字母、数字和_。 **默认取值**: 不涉及。
    /// </summary>

    std::string getLimitTypeValue() const;
    bool limitTypeValueIsSet() const;
    void unsetlimitTypeValue();
    void setLimitTypeValue(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务名，支持模糊匹配。 **约束限制**: 不涉及。 **取值范围**: 长度为1~100字符，只能包含大小写字母、数字、-、_和$。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**: 规则名。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数解释**: 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。 **约束限制**: 不涉及。 **取值范围**: 0 - 10000 **默认取值**: 0（偏移0条数据，表示从第一条数据开始查询）。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**: 查询记录数。 **约束限制**: 不涉及。 **取值范围**: 不能为负数，最小值为1，最大值为100。 **默认取值**: 10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**: 限流任务SQL_ID。 **约束限制**: 不涉及。 **取值范围**: 1 到 19 位的正整数（首位不为 0）。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 限流任务NodeID列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);


protected:
    std::string taskScope_;
    bool taskScopeIsSet_;
    std::string limitType_;
    bool limitTypeIsSet_;
    std::string limitTypeValue_;
    bool limitTypeValueIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlLimitTaskRequestBody_H_
