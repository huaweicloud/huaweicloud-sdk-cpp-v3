
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlOperateReqBody_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlOperateReqBody_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作控制策略的请求体。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  DisableControlOperateReqBody
    : public ModelBase
{
public:
    DisableControlOperateReqBody();
    virtual ~DisableControlOperateReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisableControlOperateReqBody members

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// 组织单元的ID信息。
    /// </summary>

    std::string getTargetIdentifier() const;
    bool targetIdentifierIsSet() const;
    void unsettargetIdentifier();
    void setTargetIdentifier(const std::string& value);


protected:
    std::string identifier_;
    bool identifierIsSet_;
    std::string targetIdentifier_;
    bool targetIdentifierIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlOperateReqBody_H_
