
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParams_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParams_H_


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
/// 此参数在请求实体中，采用json字符串格式
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QueryLtsStructLogParams
    : public ModelBase
{
public:
    QueryLtsStructLogParams();
    virtual ~QueryLtsStructLogParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryLtsStructLogParams members

    /// <summary>
    /// 搜索起始时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 搜索结束时间（UTC时间，毫秒级）。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 支持SQL语句搜索， 目前支持\&quot;GROUP BY\&quot;, \&quot;LIKE\&quot;和\&quot;WHERE\&quot;。
    /// </summary>

    std::string getSqlExpression() const;
    bool sqlExpressionIsSet() const;
    void unsetsqlExpression();
    void setSqlExpression(const std::string& value);

    /// <summary>
    /// 返回内容中是否包含原始日志， 默认为false。
    /// </summary>

    bool isOriginalContent() const;
    bool originalContentIsSet() const;
    void unsetoriginalContent();
    void setOriginalContent(bool value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string sqlExpression_;
    bool sqlExpressionIsSet_;
    bool originalContent_;
    bool originalContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogParams_H_
