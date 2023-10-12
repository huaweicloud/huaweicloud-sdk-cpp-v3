
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceDeleteNicRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceDeleteNicRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护实例删除网卡请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceDeleteNicRequestBody
    : public ModelBase
{
public:
    ProtectedInstanceDeleteNicRequestBody();
    virtual ~ProtectedInstanceDeleteNicRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedInstanceDeleteNicRequestBody members

    /// <summary>
    /// 网卡Port ID。
    /// </summary>

    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);


protected:
    std::string nicId_;
    bool nicIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceDeleteNicRequestBody_H_
