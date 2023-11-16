
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateProtectedIpBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateProtectedIpBody_H_


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
/// 更新防护ip tag请求体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdateProtectedIpBody
    : public ModelBase
{
public:
    UpdateProtectedIpBody();
    virtual ~UpdateProtectedIpBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProtectedIpBody members

    /// <summary>
    /// 防护ip的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 本地标签
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdateProtectedIpBody_H_
