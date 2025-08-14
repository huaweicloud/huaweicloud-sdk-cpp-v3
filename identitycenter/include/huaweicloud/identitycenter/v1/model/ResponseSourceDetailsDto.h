
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSourceDetailsDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSourceDetailsDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 联邦配置属性映射详细信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResponseSourceDetailsDto
    : public ModelBase
{
public:
    ResponseSourceDetailsDto();
    virtual ~ResponseSourceDetailsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseSourceDetailsDto members

    /// <summary>
    /// 属性映射值
    /// </summary>

    std::vector<std::string>& getSource();
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::vector<std::string>& value);


protected:
    std::vector<std::string> source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSourceDetailsDto_H_
