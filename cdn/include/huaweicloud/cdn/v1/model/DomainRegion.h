
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainRegion_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainRegion_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

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
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  DomainRegion
    : public ModelBase
{
public:
    DomainRegion();
    virtual ~DomainRegion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainRegion members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 指标统计数据列表，如果该时间段内无值，则为空数组[]
    /// </summary>

    std::vector<std::map<std::string, Object>>& getRegionIspDetails();
    bool regionIspDetailsIsSet() const;
    void unsetregionIspDetails();
    void setRegionIspDetails(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::vector<std::map<std::string, Object>> regionIspDetails_;
    bool regionIspDetailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_DomainRegion_H_
