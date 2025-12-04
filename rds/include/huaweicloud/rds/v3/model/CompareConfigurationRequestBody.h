
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CompareConfigurationRequestBody
    : public ModelBase
{
public:
    CompareConfigurationRequestBody();
    virtual ~CompareConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareConfigurationRequestBody members

    /// <summary>
    /// **参数解释**：  源参数模板id。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标参数模板id。  **约束限制**：  不涉及。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);


protected:
    std::string sourceId_;
    bool sourceIdIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationRequestBody_H_
