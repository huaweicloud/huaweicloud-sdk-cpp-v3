
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesResponseResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesResponseResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSqlRecommendRulesResponseResult
    : public ModelBase
{
public:
    ListSqlRecommendRulesResponseResult();
    virtual ~ListSqlRecommendRulesResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlRecommendRulesResponseResult members

    /// <summary>
    /// **参数解释**: 推荐类型。 **取值范围**: - all：全部 - exec_count：执行次数 - avg_exec_time：平均执行时间 - max_exec_time：最大执行时间
    /// </summary>

    std::string getRecommendType() const;
    bool recommendTypeIsSet() const;
    void unsetrecommendType();
    void setRecommendType(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL模板。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlModel() const;
    bool sqlModelIsSet() const;
    void unsetsqlModel();
    void setSqlModel(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL关键字。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlKeyword() const;
    bool sqlKeywordIsSet() const;
    void unsetsqlKeyword();
    void setSqlKeyword(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL类型。 **取值范围**: - SELECT - INSERT - UPDATE - DELETE - MERGE - OTHER
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// **参数解释**: 平均执行时间。 **取值范围**: 不涉及。
    /// </summary>

    double getAvgExecTime() const;
    bool avgExecTimeIsSet() const;
    void unsetavgExecTime();
    void setAvgExecTime(double value);

    /// <summary>
    /// **参数解释**: 最长执行时间。 **取值范围**: 不涉及。
    /// </summary>

    double getMaxExecTime() const;
    bool maxExecTimeIsSet() const;
    void unsetmaxExecTime();
    void setMaxExecTime(double value);

    /// <summary>
    /// **参数解释**: 执行次数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getExecCount() const;
    bool execCountIsSet() const;
    void unsetexecCount();
    void setExecCount(int32_t value);


protected:
    std::string recommendType_;
    bool recommendTypeIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlModel_;
    bool sqlModelIsSet_;
    std::string sqlKeyword_;
    bool sqlKeywordIsSet_;
    std::string sqlType_;
    bool sqlTypeIsSet_;
    std::string database_;
    bool databaseIsSet_;
    double avgExecTime_;
    bool avgExecTimeIsSet_;
    double maxExecTime_;
    bool maxExecTimeIsSet_;
    int32_t execCount_;
    bool execCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesResponseResult_H_
