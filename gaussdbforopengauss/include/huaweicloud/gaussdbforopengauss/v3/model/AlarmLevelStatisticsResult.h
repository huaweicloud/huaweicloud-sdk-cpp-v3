
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AlarmLevelStatisticsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AlarmLevelStatisticsResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  AlarmLevelStatisticsResult
    : public ModelBase
{
public:
    AlarmLevelStatisticsResult();
    virtual ~AlarmLevelStatisticsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmLevelStatisticsResult members

    /// <summary>
    /// **参数解释**: 告警数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**: 告警级别名称。 **取值范围**: - critical - major - minor - notice
    /// </summary>

    std::string getLevelName() const;
    bool levelNameIsSet() const;
    void unsetlevelName();
    void setLevelName(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::string levelName_;
    bool levelNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AlarmLevelStatisticsResult_H_
