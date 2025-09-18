
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckSettingsItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckSettingsItem_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskCheckSettingsItem
    : public ModelBase
{
public:
    TaskCheckSettingsItem();
    virtual ~TaskCheckSettingsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskCheckSettingsItem members

    /// <summary>
    /// 检查参数对应的key值
    /// </summary>

    std::string getCfgKey() const;
    bool cfgKeyIsSet() const;
    void unsetcfgKey();
    void setCfgKey(const std::string& value);

    /// <summary>
    /// 参数状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 检查参数值
    /// </summary>

    std::string getCfgValue() const;
    bool cfgValueIsSet() const;
    void unsetcfgValue();
    void setCfgValue(const std::string& value);


protected:
    std::string cfgKey_;
    bool cfgKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string cfgValue_;
    bool cfgValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskCheckSettingsItem_H_
