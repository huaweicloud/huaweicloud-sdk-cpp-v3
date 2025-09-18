
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IgnorePathSettingItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IgnorePathSettingItem_H_


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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  IgnorePathSettingItem
    : public ModelBase
{
public:
    IgnorePathSettingItem();
    virtual ~IgnorePathSettingItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IgnorePathSettingItem members

    /// <summary>
    /// 目录或文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 屏蔽状态，包括unchecked(不屏蔽)、all(全屏蔽)、half(半屏蔽)
    /// </summary>

    std::string getCheckboxStatus() const;
    bool checkboxStatusIsSet() const;
    void unsetcheckboxStatus();
    void setCheckboxStatus(const std::string& value);


protected:
    std::string filePath_;
    bool filePathIsSet_;
    std::string checkboxStatus_;
    bool checkboxStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_IgnorePathSettingItem_H_
