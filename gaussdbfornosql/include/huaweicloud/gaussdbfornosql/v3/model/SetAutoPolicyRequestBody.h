
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/DiskAutoExpansionPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  SetAutoPolicyRequestBody
    : public ModelBase
{
public:
    SetAutoPolicyRequestBody();
    virtual ~SetAutoPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoPolicyRequestBody members

    /// <summary>
    /// 设置磁盘自动扩容的实例组ID。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 自动扩容开关。  “on”，表示开启磁盘自动扩容策略。  “off”，表示关闭磁盘自动扩容策略。 默认值为“on”。
    /// </summary>

    std::string getSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(const std::string& value);

    /// <summary>
    /// 磁盘自动扩容策略
    /// </summary>

    std::vector<DiskAutoExpansionPolicy>& getPolicy();
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::vector<DiskAutoExpansionPolicy>& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    std::string switchOption_;
    bool switchOptionIsSet_;
    std::vector<DiskAutoExpansionPolicy> policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_SetAutoPolicyRequestBody_H_
