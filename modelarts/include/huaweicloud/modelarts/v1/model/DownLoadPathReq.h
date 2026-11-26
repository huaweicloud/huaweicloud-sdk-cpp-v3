
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DownLoadPathReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DownLoadPathReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 下载临时路径请求
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DownLoadPathReq
    : public ModelBase
{
public:
    DownLoadPathReq();
    virtual ~DownLoadPathReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownLoadPathReq members

    /// <summary>
    /// **参数解释**：带授权信息的URL的过期时间。 **约束限制**：0-86400。 **取值范围**：不涉及。 **默认取值**：3000。
    /// </summary>

    int64_t getExpires() const;
    bool expiresIsSet() const;
    void unsetexpires();
    void setExpires(int64_t value);

    /// <summary>
    /// **参数解释**：要下载文件的对象名。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    int64_t expires_;
    bool expiresIsSet_;
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DownLoadPathReq_H_
