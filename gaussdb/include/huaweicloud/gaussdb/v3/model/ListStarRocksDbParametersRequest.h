
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDbParametersRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDbParametersRequest_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListStarRocksDbParametersRequest
    : public ModelBase
{
public:
    ListStarRocksDbParametersRequest();
    virtual ~ListStarRocksDbParametersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStarRocksDbParametersRequest members

    /// <summary>
    /// StarRocks实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  新增子任务的场景，用于区分库参数是否支持修改。  **约束限制**：  非必填。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::string getAddTaskScenario() const;
    bool addTaskScenarioIsSet() const;
    void unsetaddTaskScenario();
    void setAddTaskScenario(const std::string& value);

    /// <summary>
    /// **参数解释**：  新增子任务相应的主任务名。  **约束限制**：  非必填。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::string getMainTaskName() const;
    bool mainTaskNameIsSet() const;
    void unsetmainTaskName();
    void setMainTaskName(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string addTaskScenario_;
    bool addTaskScenarioIsSet_;
    std::string mainTaskName_;
    bool mainTaskNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStarRocksDbParametersRequest& dereference_from_shared_ptr(std::shared_ptr<ListStarRocksDbParametersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDbParametersRequest_H_
