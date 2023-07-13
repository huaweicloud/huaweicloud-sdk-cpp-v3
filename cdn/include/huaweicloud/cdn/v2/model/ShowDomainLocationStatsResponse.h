
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainLocationStatsResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainLocationStatsResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainLocationStatsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainLocationStatsResponse();
    virtual ~ShowDomainLocationStatsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainLocationStatsResponse members

    /// <summary>
    /// 数据分组方式
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// 按指定的分组方式组织的数据
    /// </summary>

    std::map<std::string, Object>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::map<std::string, Object>& value);


protected:
    std::string groupBy_;
    bool groupByIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainLocationStatsResponse_H_
