
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlAutoSqlLimitingResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlAutoSqlLimitingResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/NodeSqlAutoSqlLimiting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowSqlAutoSqlLimitingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSqlAutoSqlLimitingResponse();
    virtual ~ShowSqlAutoSqlLimitingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSqlAutoSqlLimitingResponse members

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**  节点的自治限流规则。
    /// </summary>

    std::vector<NodeSqlAutoSqlLimiting>& getAutoSqlLimitingRules();
    bool autoSqlLimitingRulesIsSet() const;
    void unsetautoSqlLimitingRules();
    void setAutoSqlLimitingRules(const std::vector<NodeSqlAutoSqlLimiting>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<NodeSqlAutoSqlLimiting> autoSqlLimitingRules_;
    bool autoSqlLimitingRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowSqlAutoSqlLimitingResponse_H_
