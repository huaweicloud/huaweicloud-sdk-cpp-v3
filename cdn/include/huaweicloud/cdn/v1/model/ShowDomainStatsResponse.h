
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainStatsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainStatsResponse();
    virtual ~ShowDomainStatsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainStatsResponse members

    /// <summary>
    /// 按指定的分组方式组织的数据
    /// </summary>

    std::map<std::string, Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, Object>& value);


protected:
    std::map<std::string, Object> result_;
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainStatsResponse_H_
