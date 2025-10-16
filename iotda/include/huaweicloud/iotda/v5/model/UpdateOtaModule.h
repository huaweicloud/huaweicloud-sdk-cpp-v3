
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateOtaModule_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateOtaModule_H_


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
/// 修改OTA模块对象结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateOtaModule
    : public ModelBase
{
public:
    UpdateOtaModule();
    virtual ~UpdateOtaModule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateOtaModule members

    /// <summary>
    /// **参数说明**：OTA模块别名。 **取值范围**：长度不超过64，只允许中文、英文字母、数字、下划线（_）、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::string getAliasName() const;
    bool aliasNameIsSet() const;
    void unsetaliasName();
    void setAliasName(const std::string& value);

    /// <summary>
    /// **参数说明**：用于描述模块的功能等信息。 **取值范围**：长度不超过1024。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string aliasName_;
    bool aliasNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateOtaModule_H_
