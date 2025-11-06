
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowHttpsPasswordSettingResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowHttpsPasswordSettingResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowHttpsPasswordSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHttpsPasswordSettingResponse();
    virtual ~ShowHttpsPasswordSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHttpsPasswordSettingResponse members

    /// <summary>
    /// **参数解释：** 是否用https的认证方式 true,false。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);


protected:
    std::string body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowHttpsPasswordSettingResponse_H_
