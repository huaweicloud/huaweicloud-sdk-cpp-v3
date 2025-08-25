
#ifndef HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesRequest_H_
#define HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesRequest_H_


#include <huaweicloud/cce/v5/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V5_EXPORT  ListImageCachesRequest
    : public ModelBase
{
public:
    ListImageCachesRequest();
    virtual ~ListImageCachesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImageCachesRequest members

    /// <summary>
    /// **参数解释：** 按单个镜像缓存名称进行过滤，不支持模糊匹配。 **约束限制：** 不涉及 **取值范围：** 以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围1-128位，且不能以中划线(-)结尾。 **默认取值：** 无 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImageCachesRequest& dereference_from_shared_ptr(std::shared_ptr<ListImageCachesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_MODEL_ListImageCachesRequest_H_
