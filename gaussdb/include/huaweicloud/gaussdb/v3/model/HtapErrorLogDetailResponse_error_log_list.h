
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapErrorLogDetailResponse_error_log_list_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapErrorLogDetailResponse_error_log_list_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapErrorLogDetailResponse_error_log_list
    : public ModelBase
{
public:
    HtapErrorLogDetailResponse_error_log_list();
    virtual ~HtapErrorLogDetailResponse_error_log_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapErrorLogDetailResponse_error_log_list members

    /// <summary>
    /// **参数解释**： HTAP标准版实例节点ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志时间。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志级别。  **取值范围**：  不涉及。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志内容。  **取值范围**：  不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释**： 日志单行序列号，第一次查询时不需要此参数，后续分页查询时需要使用，可从上次查询的返回信息中获取。  **取值范围**：  不涉及。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapErrorLogDetailResponse_error_log_list_H_
