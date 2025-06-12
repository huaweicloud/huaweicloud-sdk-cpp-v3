
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ChatResourceConfig
    : public ModelBase
{
public:
    ChatResourceConfig();
    virtual ~ChatResourceConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChatResourceConfig members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源数量
    /// </summary>

    int32_t getCountResource() const;
    bool countResourceIsSet() const;
    void unsetcountResource();
    void setCountResource(int32_t value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    int32_t countResource_;
    bool countResourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfig_H_
