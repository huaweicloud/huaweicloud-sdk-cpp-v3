
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageNameRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageNameRequestBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新实例名的请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdatePackageNameRequestBody
    : public ModelBase
{
public:
    UpdatePackageNameRequestBody();
    virtual ~UpdatePackageNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePackageNameRequestBody members

    /// <summary>
    /// 名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageNameRequestBody_H_
