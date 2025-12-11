
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAutoSqlLimitingLogRequest
    : public ModelBase
{
public:
    ShowAutoSqlLimitingLogRequest();
    virtual ~ShowAutoSqlLimitingLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSqlLimitingLogRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点ID。  获取方法请参见[查询实例详情](https://support.huaweicloud.com/api-taurusdb/ShowGaussMySqlInstanceInfoUnifyStatus.html)。  **约束限制**：  节点角色必须为主节点。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为no07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAutoSqlLimitingLogRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAutoSqlLimitingLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogRequest_H_
