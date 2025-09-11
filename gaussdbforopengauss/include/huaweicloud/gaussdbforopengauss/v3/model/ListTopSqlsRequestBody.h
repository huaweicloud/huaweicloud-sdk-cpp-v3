
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTopSqlsRequestBody
    : public ModelBase
{
public:
    ListTopSqlsRequestBody();
    virtual ~ListTopSqlsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopSqlsRequestBody members

    /// <summary>
    /// **参数解释**: 实例ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 所选实例节点ID列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 起始时间。 **约束限制**: 13位UNIX时间戳格式，单位是毫秒，时区是UTC。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**: 结束时间。 **约束限制**: 13位UNIX时间戳格式，单位是毫秒，时区是UTC。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**: 起始时间。 **约束限制**: UTC时间。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getStartTimeUtc() const;
    bool startTimeUtcIsSet() const;
    void unsetstartTimeUtc();
    void setStartTimeUtc(const std::string& value);

    /// <summary>
    /// **参数解释**: 结束时间。 **约束限制**: UTC时间。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getEndTimeUtc() const;
    bool endTimeUtcIsSet() const;
    void unsetendTimeUtc();
    void setEndTimeUtc(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的用户名。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的SQL文本，例如 select pg_sleep(5)。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlText() const;
    bool sqlTextIsSet() const;
    void unsetsqlText();
    void setSqlText(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的归一化SQL ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: Top SQL的数据库名。 **约束限制**: 引擎版本8.200及以上显示。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否支持展示系统用户。 **约束限制**: 不涉及。 **取值范围**: - true：支持展示系统用户。 - false：不支持展示系统用户。  **默认取值**: 不涉及
    /// </summary>

    bool isSupportSystem() const;
    bool supportSystemIsSet() const;
    void unsetsupportSystem();
    void setSupportSystem(bool value);

    /// <summary>
    /// **参数解释**: 字段汇聚查询条件列表。 **约束限制**: 只支持针对query字段全与或者全或的查询。
    /// </summary>

    std::vector<MultiQueryConditionOption>& getMultiQueries();
    bool multiQueriesIsSet() const;
    void unsetmultiQueries();
    void setMultiQueries(const std::vector<MultiQueryConditionOption>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<std::string> nodeIds_;
    bool nodeIdsIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string startTimeUtc_;
    bool startTimeUtcIsSet_;
    std::string endTimeUtc_;
    bool endTimeUtcIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string sqlText_;
    bool sqlTextIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    bool supportSystem_;
    bool supportSystemIsSet_;
    std::vector<MultiQueryConditionOption> multiQueries_;
    bool multiQueriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsRequestBody_H_
