
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorLink_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorLink_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 规格相关快捷链接地址。
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  FlavorLink
    : public ModelBase
{
public:
    FlavorLink();
    virtual ~FlavorLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FlavorLink members

    /// <summary>
    /// 对应快捷链接。
    /// </summary>

    std::string getHref() const;
    bool hrefIsSet() const;
    void unsethref();
    void setHref(const std::string& value);

    /// <summary>
    /// 快捷链接标记名称。
    /// </summary>

    std::string getRel() const;
    bool relIsSet() const;
    void unsetrel();
    void setRel(const std::string& value);

    /// <summary>
    /// 快捷链接类型，当前接口未使用，缺省值为null。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string href_;
    bool hrefIsSet_;
    std::string rel_;
    bool relIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorLink_H_
