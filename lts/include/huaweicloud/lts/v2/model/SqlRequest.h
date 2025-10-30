
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlRequest_H_


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
class HUAWEICLOUD_LTS_V2_EXPORT  SqlRequest
    : public ModelBase
{
public:
    SqlRequest();
    virtual ~SqlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlRequest members

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// sql语句
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

    /// <summary>
    /// 图表名称
    /// </summary>

    std::string getSqlRequestTitle() const;
    bool sqlRequestTitleIsSet() const;
    void unsetsqlRequestTitle();
    void setSqlRequestTitle(const std::string& value);

    /// <summary>
    /// 查询执行任务时最近数据的时间范围(当search_time_range_unit为minute，则最大值为60;当search_time_range_unit为hour，则最大值为24)
    /// </summary>

    int32_t getSearchTimeRange() const;
    bool searchTimeRangeIsSet() const;
    void unsetsearchTimeRange();
    void setSearchTimeRange(int32_t value);

    /// <summary>
    /// 查询时间单位
    /// </summary>

    std::string getSearchTimeRangeUnit() const;
    bool searchTimeRangeUnitIsSet() const;
    void unsetsearchTimeRangeUnit();
    void setSearchTimeRangeUnit(const std::string& value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string sql_;
    bool sqlIsSet_;
    std::string sqlRequestTitle_;
    bool sqlRequestTitleIsSet_;
    int32_t searchTimeRange_;
    bool searchTimeRangeIsSet_;
    std::string searchTimeRangeUnit_;
    bool searchTimeRangeUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlRequest_H_
