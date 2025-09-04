
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainClientStatsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainClientStatsResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ListDomainClientStatsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDomainClientStatsResponse();
    virtual ~ListDomainClientStatsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainClientStatsResponse members

    /// <summary>
    /// 区域
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// 按域名维每天客户端访问详情统计
    /// </summary>

    std::vector<std::map<std::string, Object>>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::string serviceArea_;
    bool serviceAreaIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListDomainClientStatsResponse_H_
