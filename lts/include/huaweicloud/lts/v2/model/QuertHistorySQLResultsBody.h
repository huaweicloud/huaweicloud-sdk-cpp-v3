
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QuertHistorySQLResultsBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QuertHistorySQLResultsBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QuertHistorySQLResultsBody
    : public ModelBase
{
public:
    QuertHistorySQLResultsBody();
    virtual ~QuertHistorySQLResultsBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuertHistorySQLResultsBody members

    /// <summary>
    /// 上次修改时间，时间戳，毫秒数
    /// </summary>

    int64_t getLastUseTime() const;
    bool lastUseTimeIsSet() const;
    void unsetlastUseTime();
    void setLastUseTime(int64_t value);

    /// <summary>
    /// 历史sql语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);


protected:
    int64_t lastUseTime_;
    bool lastUseTimeIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QuertHistorySQLResultsBody_H_
