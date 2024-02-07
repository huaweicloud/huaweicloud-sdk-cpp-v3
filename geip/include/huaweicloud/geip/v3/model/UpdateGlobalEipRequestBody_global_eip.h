
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_global_eip_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_global_eip_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新全域弹性公网IP请求体
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateGlobalEipRequestBody_global_eip
    : public ModelBase
{
public:
    UpdateGlobalEipRequestBody_global_eip();
    virtual ~UpdateGlobalEipRequestBody_global_eip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGlobalEipRequestBody_global_eip members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户自定义的资源描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateGlobalEipRequestBody_global_eip_H_
