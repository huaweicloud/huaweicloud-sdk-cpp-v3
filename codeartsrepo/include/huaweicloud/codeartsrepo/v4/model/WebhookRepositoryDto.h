
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookRepositoryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookRepositoryDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  WebhookRepositoryDto
    : public ModelBase
{
public:
    WebhookRepositoryDto();
    virtual ~WebhookRepositoryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WebhookRepositoryDto members

    /// <summary>
    /// **参数解释：** 仓库ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库路径 
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_WebhookRepositoryDto_H_
