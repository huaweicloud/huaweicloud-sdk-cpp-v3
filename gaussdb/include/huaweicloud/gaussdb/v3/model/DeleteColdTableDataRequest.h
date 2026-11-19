
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteColdTableDataRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteColdTableDataRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteColdTableDataRequest
    : public ModelBase
{
public:
    DeleteColdTableDataRequest();
    virtual ~DeleteColdTableDataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteColdTableDataRequest members

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
    /// **参数解释**：  冷数据表空间ID。  获取方法请参见[查询冷表元信息](https://support.huaweicloud.com/api-taurusdb/ListColdTableMetas.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由数字组成。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSpaceId() const;
    bool spaceIdIsSet() const;
    void unsetspaceId();
    void setSpaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷数据表ID。  获取方法请参见[查询冷表元信息](https://support.huaweicloud.com/api-taurusdb/ListColdTableMetas.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由数字组成。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDdId() const;
    bool ddIdIsSet() const;
    void unsetddId();
    void setDdId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string spaceId_;
    bool spaceIdIsSet_;
    std::string ddId_;
    bool ddIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteColdTableDataRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteColdTableDataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteColdTableDataRequest_H_
