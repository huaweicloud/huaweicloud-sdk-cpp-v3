
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowChargeModesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowChargeModesResponse();
    virtual ~ShowChargeModesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowChargeModesResponse members

    /// <summary>
    /// 计费模式查询结果
    /// </summary>

    std::vector<std::map<std::string, Object>>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::vector<std::map<std::string, Object>> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesResponse_H_
