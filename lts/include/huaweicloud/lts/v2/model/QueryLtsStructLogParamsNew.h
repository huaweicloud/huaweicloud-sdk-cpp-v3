
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParamsNew_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParamsNew_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/TimeRange.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 此参数在请求实体中，采用json字符串格式
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QueryLtsStructLogParamsNew
    : public ModelBase
{
public:
    QueryLtsStructLogParamsNew();
    virtual ~QueryLtsStructLogParamsNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryLtsStructLogParamsNew members

    /// <summary>
    /// sql语句字符串。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// 查询结果格式。当前仅支持：\&quot;k-v\&quot;。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TimeRange getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const TimeRange& value);

    /// <summary>
    /// 返回数据格式，是否为行数据，默认为false。
    /// </summary>

    bool isWhetherToRows() const;
    bool whetherToRowsIsSet() const;
    void unsetwhetherToRows();
    void setWhetherToRows(bool value);


protected:
    std::string query_;
    bool queryIsSet_;
    std::string format_;
    bool formatIsSet_;
    TimeRange timeRange_;
    bool timeRangeIsSet_;
    bool whetherToRows_;
    bool whetherToRowsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParamsNew_H_
