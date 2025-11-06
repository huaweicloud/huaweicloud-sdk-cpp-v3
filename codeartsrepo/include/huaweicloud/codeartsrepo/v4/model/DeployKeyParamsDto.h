
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeployKeyParamsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeployKeyParamsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DeployKeyParamsDto
    : public ModelBase
{
public:
    DeployKeyParamsDto();
    virtual ~DeployKeyParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeployKeyParamsDto members

    /// <summary>
    /// **参数解释：** 标题。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** key值。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DeployKeyParamsDto_H_
