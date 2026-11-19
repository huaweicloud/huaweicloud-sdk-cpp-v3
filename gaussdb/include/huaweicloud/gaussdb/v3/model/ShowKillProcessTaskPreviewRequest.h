
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowKillProcessTaskPreviewRequest
    : public ModelBase
{
public:
    ShowKillProcessTaskPreviewRequest();
    virtual ~ShowKillProcessTaskPreviewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKillProcessTaskPreviewRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us：英文。 - zh-cn：中文。  **默认取值**：  en-us。
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
    /// **参数解释**：    持续时间，单位为秒。持续时间大于等于该值的会话满足Kill条件。  **约束限制**：    整数。  **取值范围**：    由数字组成，其中数字表示的范围应为1-2147483647。  **默认取值**：    不涉及。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  用户名。  **约束限制**：  不涉及。  **取值范围**：  名称在1到32个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：    主机。    **约束限制**：    不涉及。    **取值范围**：    不涉及。  **默认取值**：    不涉及。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// **参数解释**：    数据库名。    **约束限制**：    不涉及。   **取值范围**：    1到64个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符。   **默认取值**：    不涉及。
    /// </summary>

    std::string getDb() const;
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::string& value);

    /// <summary>
    /// **参数解释**：    命令。    **约束限制**：    不涉及。    **取值范围**：    不涉及。  **默认取值**：    不涉及。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// **参数解释**：    SQL语句。    **约束限制**：    不涉及。  **取值范围**：    不涉及。  **默认取值**：    不涉及。
    /// </summary>

    std::string getInfo() const;
    bool infoIsSet() const;
    void unsetinfo();
    void setInfo(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string db_;
    bool dbIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string info_;
    bool infoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowKillProcessTaskPreviewRequest& dereference_from_shared_ptr(std::shared_ptr<ShowKillProcessTaskPreviewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowKillProcessTaskPreviewRequest_H_
