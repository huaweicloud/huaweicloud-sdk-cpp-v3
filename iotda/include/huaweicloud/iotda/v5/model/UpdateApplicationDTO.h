
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationDTO_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationDTO_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新资源空间结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateApplicationDTO
    : public ModelBase
{
public:
    UpdateApplicationDTO();
    virtual ~UpdateApplicationDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationDTO members

    /// <summary>
    /// **参数说明**：资源空间名称。 **取值范围**：长度不超过64，允许中文、字母、数字、下划线（_）、连接符（-）等一些特殊字符的组合。
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);


protected:
    std::string appName_;
    bool appNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateApplicationDTO_H_
