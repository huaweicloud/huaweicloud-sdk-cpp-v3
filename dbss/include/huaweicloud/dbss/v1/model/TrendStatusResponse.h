
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrendStatusResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrendStatusResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TrendStatusResponse
    : public ModelBase
{
public:
    TrendStatusResponse();
    virtual ~TrendStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrendStatusResponse members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 生成时间
    /// </summary>

    std::string getGenerateTime() const;
    bool generateTimeIsSet() const;
    void unsetgenerateTime();
    void setGenerateTime(const std::string& value);

    /// <summary>
    /// 统计类型  - RISK: 风险  - SESSION：SESSION  - SQL: SQL  - COUNT: 数量  - INJECTION：注入 - OPERATION: 操作
    /// </summary>

    std::string getStatisticsType() const;
    bool statisticsTypeIsSet() const;
    void unsetstatisticsType();
    void setStatisticsType(const std::string& value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string generateTime_;
    bool generateTimeIsSet_;
    std::string statisticsType_;
    bool statisticsTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrendStatusResponse_H_
